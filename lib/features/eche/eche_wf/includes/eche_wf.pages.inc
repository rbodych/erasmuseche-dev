<?php
/**
 * @file
 * eche_wf.pages.inc
 */

/**
 * Report page callback.
 */
function eche_wf_report_page($node, $submission) {

  if (eche_wf_node_is_self_assesment($node)) {
    return eche_wf_sa_report_page($node, $submission);
  }
  elseif (eche_wf_node_is_rectors_quiz($node)) {
    return eche_wf_rq_report_page($node, $submission);
  }

  return drupal_not_found();
}

/**
 * Report pdf page callback.
 */
function eche_wf_report_page_pdf($node, $submission) {

  if (eche_wf_node_is_self_assesment($node)) {
    return eche_wf_sa_report_page_pdf($node, $submission);
  }
  elseif (eche_wf_node_is_rectors_quiz($node)) {
    return eche_wf_rq_report_page_pdf($node, $submission);
  }

  return drupal_not_found();
}

/**
 * Self-assesment detailed report page callback.
 */
function eche_wf_sa_report_page($node, $submission) {

  $build = array();

  $build['subway'] = array(
    '#markup' => '<div class="layout--content-boxed__preinner">
        <div class="subway">
        <div class="subway__item"><div class="subway__label">' . t('Start') . '</div></div>
        <div class="subway__item"><div class="subway__label">' . t('Page 1') . '</div></div>
        <div class="subway__item"><div class="subway__label">' . t('Page 2') . '</div></div>
        <div class="subway__item"><div class="subway__label">' . t('Page 3') . '</div></div>
        <div class="subway__item"><div class="subway__label">' . t('Page 4') . '</div></div>
        <div class="subway__item"><div class="subway__label">' . t('Page 5') . '</div></div>
        <div class="subway__item"><div class="subway__label">' . t('Page 6') . '</div></div>
        <div class="subway__item is-active"><div class="subway__label">' . t('Complete') . '</div></div>
        </div>
        </div>',
  );

  $build['intro'] = array(
    '#markup' => '<div class="layout--content-boxed__header">
        <div class="submission-info">
        <h2 class="submission-info__title">' . t('SELF-ASSESSMENT COMPLETE') . '</h2>
        <p>' . t('Based on your answers, we have prepared an overview for you. You can view it below and / or download it by clicking on the "Download results" button at the bottom of this page.') . '</p>
        </div>
        </div>',
  );

  $build['tabs'] = array(
    '#prefix' => '<div class="layout--content-boxed__preinner-primary">',
    '#suffix' => '</div>',
    '#theme' => 'eche_wf_report_tabs',
    '#nid' => $node->nid,
    '#sid' => $submission->sid,
  );

  $report = new EcheWfReportGenerator($submission);
  $build['report'] = array(
    '#theme' => 'eche_wf_report',
    '#data' => $report->report(),
    '#node' => $node,
    '#submission' => $submission,
  );

  // When report is viewed we mark it as read.
  if (module_exists('eche_wf_share')) {
    eche_wf_share_mark_report_as_read($submission);
  }

  return $build;
}

/**
 * Self-assesment pdf detailed report page callback.
 */
function eche_wf_sa_report_page_pdf($node, $submission) {
  drupal_set_title(t('Self-assessment results for Erasmus+ coordinator - Detailed results and recommendations'));

  $build = array();

  $build['intro'] = array(
    '#markup' => '<div class="layout--content-boxed__header">
            <div class="submission-info">
            <p>' . t('Based on your answers, we have prepared an overview for you.') . '</p>
            </div>
            </div>',
  );

  $report = new EcheWfReportGenerator($submission);
  $build['report'] = array(
    '#theme' => 'eche_wf_report_pdf',
    '#data' => $report->report(),
    '#node' => $node,
    '#submission' => $submission,
  );

  return $build;
}

/**
 * Self-assesment overview report page callback.
 */
function eche_wf_report_page_overview($node, $submission) {

  // If node is not SA, Rector's quiz for example, we redirect user to the
  // report page.
  if (!eche_wf_node_is_self_assesment($node)) {
    drupal_goto('node/' . $node->nid . '/submission/' . $submission->sid . '/report');
  }

  $build = array();

  $build['subway'] = array(
    '#markup' => '<div class="layout--content-boxed__preinner">
        <div class="subway">
        <div class="subway__item"><div class="subway__label">' . t('Start') . '</div></div>
        <div class="subway__item"><div class="subway__label">' . t('Page 1') . '</div></div>
        <div class="subway__item"><div class="subway__label">' . t('Page 2') . '</div></div>
        <div class="subway__item"><div class="subway__label">' . t('Page 3') . '</div></div>
        <div class="subway__item"><div class="subway__label">' . t('Page 4') . '</div></div>
        <div class="subway__item"><div class="subway__label">' . t('Page 5') . '</div></div>
        <div class="subway__item"><div class="subway__label">' . t('Page 6') . '</div></div>
        <div class="subway__item is-active"><div class="subway__label">' . t('Complete') . '</div></div>
        </div>
        </div>',
  );

  $build['intro'] = array(
    '#markup' => '<div class="layout--content-boxed__header">
        <div class="submission-info">
        <h2 class="submission-info__title">' . t('SELF-ASSESSMENT COMPLETE') . '</h2>
        <p>' . t('Based on your answers, we have prepared an overview for you. You can view it below and / or download it by clicking on the "Download results" button at the bottom of this page.') . '</p>
        </div>
        </div>',
  );

  $build['tabs'] = array(
    '#prefix' => '<div class="layout--content-boxed__preinner-primary">',
    '#suffix' => '</div>',
    '#theme' => 'eche_wf_report_tabs',
    '#nid' => $node->nid,
    '#sid' => $submission->sid,
  );

  $scores = new EcheWfRectorsQuestionsScores($submission);
  $build['report'] = array(
    '#theme' => 'eche_wf_report_overview',
    '#data' => $scores->get(),
    '#node' => $node,
    '#submission' => $submission,
  );

  // When report is viewed we mark it as read.
  if (module_exists('eche_wf_share')) {
    eche_wf_share_mark_report_as_read($submission);
  }

  return $build;
}

/**
 * Self-assesment overview report page callback for print.
 */
function eche_wf_report_page_overview_pdf($node, $submission) {
  drupal_set_title(t('Self-assessment results for Erasmus+ coordinator - Overview'));

  // If node is not SA, Rector's quiz for example, we redirect user to the
  // report page.
  if (!eche_wf_node_is_self_assesment($node)) {
    drupal_goto('node/' . $node->nid . '/submission/' . $submission->sid . '/report');
  }

  $build = array();

  $build['intro'] = array(
    '#markup' => '<div class="layout--content-boxed__header">
          <div class="submission-info">
          <p>' . t('Based on your answers, we have prepared an overview for you.') . '</p>
          </div>
          </div>',
  );

  $scores = new EcheWfRectorsQuestionsScores($submission);
  $build['report'] = array(
    '#theme' => 'eche_wf_report_overview_pdf',
    '#data' => $scores->get(),
    '#node' => $node,
    '#submission' => $submission,
  );

  return $build;
}

/**
 * Report page callback.
 */
function eche_wf_report_page_combined($node, $submission) {

  $build = array();

  $scores = new EcheWfRectorsQuestionsScores($submission);

  $build['overview'] = array(
    '#prefix' => '<h2 class="overview__title">' . t('Overview results') . '</h2>',
    '#theme' => 'eche_wf_report_overview',
    '#data' => $scores->get(),
    '#node' => $node,
    '#submission' => $submission,
  );

  $report = new EcheWfReportGenerator($submission);
  $build['report'] = array(
    '#prefix' => '<h2 class="overview__title">' . t('Detailed results') . '</h2>',
    '#theme' => 'eche_wf_report',
    '#data' => $report->report(),
    '#node' => $node,
    '#submission' => $submission,
  );

  return $build;
}

/**
 * Report pdf page callback.
 */
function eche_wf_report_page_combined_pdf($node, $submission) {

  drupal_set_title(t('Self-assessment results for Erasmus+ coordinator - Combined'));
  $build = array();

  $scores = new EcheWfRectorsQuestionsScores($submission);

  $build['overview'] = array(
    '#prefix' => '<h2 class="overview__title">' . t('Overview results') . '</h2>',
    '#theme' => 'eche_wf_report_overview_pdf',
    '#data' => $scores->get(),
    '#node' => $node,
    '#submission' => $submission,
  );

  $report = new EcheWfReportGenerator($submission);
  $build['report'] = array(
    '#prefix' => '<h2 class="overview__title">' . t('Detailed results') . '</h2>',
    '#theme' => 'eche_wf_report_pdf',
    '#data' => $report->report(),
    '#node' => $node,
    '#submission' => $submission,
  );

  return $build;
}

/**
 * Rector's quiz report page callback.
 */
function eche_wf_rq_report_page($node, $submission) {

  $build = array();

  drupal_set_title(t('Self-assessment results for Rector / Vice-Rector / Vice Chancellor'));

  $report = new EcheWfRqReportGenerator($submission);

  $build['report'] = array(
    '#theme' => 'eche_wf_rq_report',
    '#data' => $report->report(),
    '#node' => $node,
    '#submission' => $submission,
  );

  // When report is viewed we mark it as read.
  if (module_exists('eche_wf_share')) {
    eche_wf_share_mark_report_as_read($submission);
  }

  return $build;

}

/**
 * Rector's pdf quiz report page callback.
 */
function eche_wf_rq_report_page_pdf($node, $submission) {

  $build = array();

  drupal_set_title(t('Self-assessment results for Rector / Vice-Rector / Vice Chancellor'));

  $report = new EcheWfRqReportGenerator($submission);

  $build['report'] = array(
    '#theme' => 'eche_wf_rq_report_pdf',
    '#data' => $report->report(),
    '#node' => $node,
    '#submission' => $submission,
  );

  // When report is viewed we mark it as read.
  if (module_exists('eche_wf_share')) {
    eche_wf_share_mark_report_as_read($submission);
  }

  return $build;

}

/**
 * Start self-assesment page callback.
 *
 * We redirect user to the appropriate self-assesment based on his position
 * or force user to fill-in his position at first.
 */
function eche_wf_start_sa() {
  global $user;
  $redirect = 'user/complete';
  $account = user_load($user->uid);
  // If user has filled the position, we redirect him to the form appropriate
  // to his position.
  if (!empty($account->field_position[LANGUAGE_NONE][0]['value'])) {
    $redirect = eche_wf_get_self_assesment_path_depending_on_position($account->field_position[LANGUAGE_NONE][0]['value']);
  }
  drupal_goto($redirect);
}
