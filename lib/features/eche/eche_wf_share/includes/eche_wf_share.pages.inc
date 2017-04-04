<?php
/**
 * @file
 * eche_wf_share.pages.inc
 */

/**
 * Share page callback.
 */
function eche_wf_share_submission_share_page($node, $submission, $js) {

  if ($js) {

    ctools_include('modal');
    ctools_include('ajax');

    // Basic form settings.
    $form_state = array(
      'title' => t("Share your submission results"),
      'ajax' => TRUE,
      'node' => $node,
      'submission' => $submission,
    );

    $commands = ctools_modal_form_wrapper('eche_wf_share_sharing_form', $form_state);
    print ajax_render($commands);
    drupal_exit();
  }

  return drupal_get_form('eche_wf_share_sharing_form', $node, $submission);
}

/**
 * Report download tokenized url page callback.
 */
function eche_wf_report_download_page($token) {
  // Get nid and sid by token.
  $params = eche_wf_share_get_submission_id_by_token($token);
  module_load_include('inc', 'print_pdf', 'print_pdf.pages');
  // Generate report.
  $_SESSION['eche_wf_report_token'] = $token;
  // print_pdf_generate_path(eche_wf_share_combined_report_url($params['nid'],
  // $params['sid']), array('token' => $token), NULL, 'report.pdf');.
  drupal_goto('printpdf/' . eche_wf_share_combined_report_url($params['nid'], $params['sid']));
}
