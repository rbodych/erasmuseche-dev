<?php
/**
 * @file
 * eche_wf.report.overview.inc
 */

/**
 * Class EcheWfRectorsQuestionsScores.
 *
 * Returns rector's question data along with submission, average and iro scores.
 */
class EcheWfRectorsQuestionsScores {

  protected $submission;
  protected $submitter;
  protected $questions;

  /**
   * Construct.
   */
  public function __construct($submission) {
    $this->submission = $submission;
    $this->submitter = user_load($submission->uid);
    $counter = 1;
    foreach (eche_wf_utils_get_rectors_questions(FALSE) as $key => $question) {
      $this->questions_and_scores[$key] = array(
        '#title' => $question,
        '#number' => $counter,
        '#key' => $key,
        '#submission_score' => 0,
        '#iro_average_score' => 0,
        '#total_average_score' => 0,
      );
      $counter++;
    }
  }

  /**
   * Get scores.
   */
  public function get() {
    $this->getSubmissionScores();
    $this->getTotalAverageScores();
    $this->getIroAverageScores();
    return $this->questions_and_scores;
  }

  /**
   * Get submission scores per question.
   */
  protected function getSubmissionScores() {
    $results = db_query('SELECT * FROM {eche_wf_rectors_questions_scores} WHERE sid=:sid',
      array(':sid' => $this->submission->sid));
    foreach ($results as $row) {
      if (isset($this->questions_and_scores[$row->rectors_question])) {
        $this->questions_and_scores[$row->rectors_question]['#submission_score'] = $row->score;
      }
    }
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
      if (isset($this->questions_and_scores[$row->rectors_question])) {
        $this->questions_and_scores[$row->rectors_question]['#total_average_score'] = $row->score;
      }
    }
  }

  /**
   * Get iro average scores.
   */
  protected function getIroAverageScores() {

    // We don't calculate score if user doesn't have IRO associated with it.
    if (empty($this->submitter->field_user_hei[LANGUAGE_NONE][0]['target_id'])) {
      return;
    }
    $iro_id = $this->submitter->field_user_hei[LANGUAGE_NONE][0]['target_id'];
    $results = db_query(
      "SELECT s.rectors_question, ROUND(AVG(s.score)) as score
       FROM {eche_wf_rectors_questions_scores} s
       LEFT JOIN {eche_wf_latest_submissions} ls ON s.sid = ls.sid
       LEFT JOIN {field_data_field_user_hei} f ON ls.uid = f.entity_id AND f.entity_type = 'user' AND f.bundle = 'user' AND f.deleted = 0
       WHERE ls.nid=:nid AND f.field_user_hei_target_id = :iro_id GROUP BY rectors_question",
      array(
        ':nid' => $this->submission->nid,
        ':iro_id' => $iro_id,
      )
    );
    foreach ($results as $row) {
      if (isset($this->questions_and_scores[$row->rectors_question])) {
        $this->questions_and_scores[$row->rectors_question]['#iro_average_score'] = $row->score;
      }
    }
  }

}
