<?php
/**
 * @file
 * eche_wf_share.counts.inc
 */

/**
 * Class EcheWfUserShareCount.
 *
 * The class is responsible for storage and retrieval of share count data.
 */
class EcheWfShareUserCount {

  /**
   * Construct method.
   */
  public function __construct($uid) {
    $this->uid = $uid;
  }

  /**
   * Gets share count.
   */
  public function getShareCount() {
    $count = db_query('SELECT share_count FROM {eche_wf_share_count} WHERE uid = :uid',
      array(':uid' => $this->uid))->fetchField();
    return !empty($count) ? $count : 0;
  }

}
