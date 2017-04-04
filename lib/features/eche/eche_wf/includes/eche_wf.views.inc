<?php
/**
 * @file
 * eche_wf.views.inc
 */

/**
 * Implements hook_views_pre_view().
 */
function eche_wf_views_pre_view(&$view, &$display_id, &$args) {

  // Show case studies for unanswered questions in the block.
  if (
    $view->name == 'eche_wf_recommended_case_studies' &&
    $display_id == 'block'
  ) {
    $submission = menu_get_object('webform_menu_submission', 3);
    if (!empty($submission)) {
      $report = new EcheWfReportGenerator($submission);
      $nids = $report->caseStudies();
      if (!empty($nids)) {
        $args = array(implode(',', $nids));
      }
    }
  }
}
