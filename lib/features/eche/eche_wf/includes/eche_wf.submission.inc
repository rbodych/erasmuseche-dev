<?php
/**
 * @file
 * eche_wf.submission.inc
 */

/**
 * Respond to a Webform submission being inserted.
 */
function eche_wf_webform_submission_insert($node, $submission) {

  // Insert rector's question points after node's submission.
  if (eche_wf_node_is_self_assesment($node)) {
    eche_wf_calculate_rectors_questions_scores($node, $submission);
  }
  if (eche_wf_node_is_rectors_quiz($node)) {
    $report = new EcheWfRqReportGenerator($submission);
    $dataReportRector = $report->report();

    foreach ($dataReportRector as $key => $value) {
      // @codingStandardsIgnoreStart
      db_query(
        'INSERT INTO {eche_wf_rectors_questions_scores} (sid, rectors_question, score)
       VALUES (:sid, :rectors_question, :score)
       ON DUPLICATE KEY UPDATE rectors_question=:rectors_question, score=:score',
        array(
          ':sid' => $submission->sid,
          ':rectors_question' => $key,
          ':score' => $value['#stars_number'],
        )
      );
      // @codingStandardsIgnoreEnd
    }

  }

  $latest_submissions = new EcheWfLatestSubmissions($submission->nid, $submission->uid);
  $latest_submissions->add();
}

/**
 * Respond to a Webform submission being updated.
 */
function eche_wf_webform_submission_update($node, $submission) {

  // Update rector's question points after node's submission.
  if (eche_wf_node_is_self_assesment($node)) {
    eche_wf_calculate_rectors_questions_scores($node, $submission);
  }

  $latest_submissions = new EcheWfLatestSubmissions($submission->nid, $submission->uid);
  $latest_submissions->add();
}

/**
 * Respond to a Webform submission being deleted.
 */
function eche_wf_webform_submission_delete($node, $submission) {
  db_delete('DELETE FROM {eche_wf_rectors_questions_scores} WHERE sid = :sid',
    array(':sid' => $submission->sid));

  $latest_submissions = new EcheWfLatestSubmissions($submission->nid, $submission->uid);
  $latest_submissions->reAdd();
}

/**
 * Respond to a Webform component being deleted.
 */
function eche_wf_webform_component_delete($component) {
  db_delete('DELETE FROM {eche_wf_component_meta} WHERE nid = :nid AND cid = :cid', array(
    ':nid' => $component['nid'],
    ':cid' => $component['cid'],
  ));
}
