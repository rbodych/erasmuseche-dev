<?php
/**
 * @file
 * eche_wf.report.rq.inc
 */

/**
 * Class EcheWfRqReportGenerator.
 */
class EcheWfRqReportGenerator {

  protected $submission;
  protected $submitter;
  protected $tree;
  protected $webform;

  /**
   * Construct.
   */
  public function __construct($submission) {

    $this->submission = $submission;

    $this->webform = node_load($submission->nid, NULL, TRUE);

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
    $this->getIroAverageScores();
    $this->getTotalAverageScores();
    return $this->groupAndProcessTree();

  }

  /**
   * Get iro average scores.
   */
  protected function getIroAverageScores() {

    if (empty($this->submitter->field_user_hei[LANGUAGE_NONE][0]['target_id'])) {
      $iro_id = 0;
    }
    else {
      $iro_id = $this->submitter->field_user_hei[LANGUAGE_NONE][0]['target_id'];
    }

    $results = db_query(
      "SELECT s.rectors_question, ROUND(AVG(s.score)) as score FROM
      {eche_wf_rectors_questions_scores} s
      LEFT JOIN {eche_wf_latest_submissions} ls ON s.sid = ls.sid
      LEFT JOIN {field_data_field_user_hei} f ON ls.uid = f.entity_id AND f.entity_type = 'user' AND f.bundle = 'user' AND f.deleted = 0
      WHERE ls.nid=:nid AND f.field_user_hei_target_id = :iro_id GROUP BY s.rectors_question", array(
        ':nid' => $this->submission->nid,
        ':iro_id' => $iro_id,
      )
    );

    foreach ($results as $row) {
      if (isset($this->tree[$row->rectors_question])) {
        $this->tree[$row->rectors_question]['#iro_average_score'] = $row->score;
      }
    }

    return $results;
  }

  /**
   * Get total average scores.
   */
  protected function getTotalAverageScores() {
    $results = db_query(
      "SELECT s.rectors_question, ROUND(AVG(s.score)) as score FROM
      {eche_wf_rectors_questions_scores} s
      LEFT JOIN {eche_wf_latest_submissions} ls ON s.sid = ls.sid
      WHERE ls.nid=:nid GROUP BY s.rectors_question", array(':nid' => $this->submission->nid)
    );

    foreach ($results as $row) {
      if (isset($this->tree[$row->rectors_question])) {
        $this->tree[$row->rectors_question]['#total_average_score'] = $row->score;
      }
    }

    return $results;
  }

  /**
   * Group tree by categories and prepare the data into required format.
   */
  protected function groupAndProcessTree() {

    $grouped_answers = $this->tree;

    $counter = 1;
    foreach ($grouped_answers as &$values) {

      $meta = $values['#webform_component']['#meta'];
      $values['#stars_number'] = $this->getStarsForUserInput(array_values($values['#value']),
        $meta['meta']['stars']);
      $values['#count'] = $counter;

      $values['#recommendation'] = !empty($meta['meta']['text']) ? check_markup($meta['meta']['text']['value'],
        $meta['meta']['text']['format']) : '';

      $values['#answers'] = array();
      foreach ($values['#value'] as $value) {
        if (!empty($values['#options'][$value]['title'])) {
          $values['#answers'][] = preg_replace('#<h3>(.*?)<\/h3>#i', '',
            $values['#options'][$value]['title']);
        }
      }

      $counter++;
    }

    return $grouped_answers;
  }

  /**
   * Gets start for user input.
   */
  protected function getStarsForUserInput($user_input, $stars) {

    foreach ($stars as $star_value => $data) {

      $satisfied_conditons = array();

      // Cycle through ticked and not_ticked condition types.
      foreach ($data as $condition_type => $values) {

        $satisfied_conditons[$condition_type] = FALSE;

        $condition = $values['condition'];
        $values_required = array_values($values['values']);

        // If required values are empty, we can skip current
        // condition check and treat it as satisfied.
        if (empty($values_required)) {
          $satisfied_conditons[$condition_type] = TRUE;
          continue;
        }

        // We continue if $values_required is not empty.
        if ($condition == 'all') {

          if ($condition_type == 'ticked') {
            $difference_between_user_input_and_values_required = array_diff($values_required, $user_input);
            $satisfied_conditons[$condition_type] = empty($difference_between_user_input_and_values_required) && count($values_required) == count($user_input);
          }

          if ($condition_type == 'not_ticked') {
            $difference_between_user_input_and_values_required = array_diff($values_required, $user_input);
            $satisfied_conditons[$condition_type] = count($values_required) == count($difference_between_user_input_and_values_required);
          }

        }
        elseif ($condition == 'at_least') {

          if ($condition_type == 'ticked') {
            $difference = array_diff($values_required, $user_input);
            $satisfied_conditons[$condition_type] = empty($difference);
          }

          if ($condition_type == 'not_ticked') {
            $difference_between_user_input_and_values_required = array_diff($values_required, $user_input);
            $satisfied_conditons[$condition_type] = count($values_required) == count($difference_between_user_input_and_values_required);
          }

        }

      }

      // If both conditions are satisfied, we return current star value.
      if (count(array_filter($satisfied_conditons)) == 2) {
        return $star_value;
      }

    }

    return 1;
  }

  /**
   * Filter unneeded webform_components out of submission tree.
   */
  protected function filterSubmissionTree($vars) {
    return is_array($vars) && !empty($vars['#webform_component']) && $vars['#webform_component']['type'] == 'optionsmarkup';
  }

}
