<?php
/**
 * @file
 * eche_wf.report.detailed.inc
 */

/**
 * Class EcheWfReportGenerator.
 */
class EcheWfReportGenerator {

  protected $submission;
  protected $submitter;
  protected $tree;
  protected $webform;

  /**
   * Construct.
   */
  public function __construct($submission) {
    $this->submission = $submission;
    $this->webform = node_load($submission->nid);
    $this->submitter = user_load($submission->uid);
    $this->tree = $this->submissionTree();
  }

  /**
   * Get a submission tree for a submission.
   */
  protected function submissionTree() {
    $tree = webform_submission_render($this->webform, $this->submission, NULL, 'text');
    $filtered_tree = array_filter($tree, array(
      $this,
      'filterSubmissionTree',
    ));
    return $filtered_tree;
  }

  /**
   * Return case studies nid for each question that has at least one empty item.
   */
  public function caseStudies() {
    $nids = array();
    foreach ($this->tree as $item) {
      if (!empty($item['#webform_component']['#meta']['case_studies']) && count($item['#options']) != count($item['#value'])) {
        foreach ($item['#webform_component']['#meta']['case_studies'] as $case) {
          $nids[$case->nid] = $case->nid;
        }
      }
    }
    return $nids;
  }

  /**
   * Generate report.
   */
  public function report() {
    return $this->groupAndProcessTree();
  }

  /**
   * Group tree by categories and prepare the data into required format.
   */
  protected function groupAndProcessTree() {

    $grouped_answers = array();
    $categories = eche_wf_question_categories();

    foreach ($categories as $category_slug => $category) {
      $grouped_answers[$category_slug]['#count'] = 0;
      $grouped_answers[$category_slug]['#case_studies'] = array();

      foreach ($this->tree as $key => $item) {
        if (drupal_substr($key, 0, 1) !== '#' && !empty($item['#webform_component']['#meta'])) {

          $meta = $item['#webform_component']['#meta'];

          if ($meta['category'] == $category_slug) {
            $grouped_answers[$category_slug]['#count'] += count($item['#options']) - count($item['#value']);

            $grouped_answers[$category_slug]['#title'] = $categories[$category_slug];

            $item['#recommendations_raw'] = array();
            foreach ($item['#options'] as $option_key => $option) {
              if (!in_array($option_key, $item['#value'])) {
                $item['#recommendations_raw'][$option_key] = $option;
              }
            }

            $item['#recommendations'] = array();
            foreach ($item['#recommendations_raw'] as $rec_key => $rec) {
              if (!empty($meta['answers'][$rec_key])) {
                $answer_meta = $meta['answers'][$rec_key];

                $item['#recommendations'][$answer_meta['priority']][] = array_merge(
                  $answer_meta,
                  array('#title' => $rec)
                );
              }
            }

            $item['#case_studies'] = array();
            foreach ($meta['case_studies'] as $case_key => $case_s) {
              if (!empty($meta['case_studies'][$case_key])) {

                if (isset($meta['case_studies'][$case_key]->title)) {
                  $item['#case_studies'][$case_key] = array(
                    '#node' => $meta['case_studies'][$case_key],
                    '#title' => $meta['case_studies'][$case_key]->title,
                  );

                }

              }

            }

            $grouped_answers[$category_slug]['#items'][$key] = $item;
          }
        }
      }

    }
    return $grouped_answers;
  }

  /**
   * Filter unneeded webform_components out of submission tree.
   */
  protected function filterSubmissionTree($vars) {
    return is_array($vars) && !empty($vars['#webform_component']) && $vars['#webform_component']['type'] == 'select';
  }

}
