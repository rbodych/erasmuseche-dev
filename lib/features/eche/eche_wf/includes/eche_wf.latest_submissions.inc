<?php
/**
 * @file
 * eche_wf.latest_submissions.inc
 */

/**
 * Class EcheWfLatestSubmissions.
 *
 * Class is responsible for adding /  deleting latest submission data.
 */
class EcheWfLatestSubmissions {

  protected $nid;
  protected $uid;

  /**
   * Construct.
   */
  public function __construct($nid, $uid) {
    $this->nid = $nid;
    $this->uid = $uid;
  }

  /**
   * Delete latest submission and add a new one if exists.
   */
  public function reAdd() {
    $this->delete();
    $this->add();
  }

  /**
   * Delete latest submission for the node / user.
   */
  public function delete() {
    db_delete('eche_wf_latest_submissions')
      ->condition('nid', $this->nid, '=')
      ->condition('uid', $this->uid, '=')
      ->execute();
  }

  /**
   * Add latest by user submission to the eche_wf_latest_submissions table.
   *
   * Automatically calculate sid of the latest submission.
   */
  public function add() {

    $sid = $this->findLatestSubmission();
// @codingStandardsIgnoreStart
    if (!empty($sid)) {
      db_query(
        'INSERT INTO {eche_wf_latest_submissions} (nid, uid, sid, timestamp)
         VALUES (:nid, :uid, :sid, :timestamp)
         ON DUPLICATE KEY UPDATE sid=:sid, timestamp=:timestamp',
        array(
          ':nid' => $this->nid,
          ':uid' => $this->uid,
          ':sid' => $sid,
          ':timestamp' => REQUEST_TIME,
        )
      );
    }
// @codingStandardsIgnoreEnd
  }

  /**
   * Find latest submission for the node / user.
   */
  public function findLatestSubmission() {
    return db_query('SELECT sid FROM {webform_submissions} WHERE nid = :nid AND uid = :uid AND is_draft = 0 ORDER BY completed DESC, sid DESC LIMIT 1',
      array(
        ':nid' => $this->nid,
        ':uid' => $this->uid,
      ))->fetchField();
  }

}
