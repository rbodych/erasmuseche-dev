<?php
/**
 * @file
 * eche_wf_share.shares.inc
 */

/**
 * Class EcheWfUserSubmissionShares.
 *
 * Responsible for storage and retrieval of submission shares.
 */
class EcheWfUserSubmissionShares {

  protected $shares_table = 'eche_wf_shares';
  protected $mail_shares_table = 'eche_wf_mail_shares';
  protected $uid;
  protected $sid;
  protected $account;
  protected $heiId;

  function __construct($uid, $sid) {
    $this->uid = $uid;
    $this->sid = $sid;
    $this->account = user_load($uid);
    $this->heiId = !empty($this->account->field_user_hei[LANGUAGE_NONE][0]['target_id']) ? $this->account->field_user_hei[LANGUAGE_NONE][0]['target_id'] : NULL;
  }

  function add_share($uid_to_share_with) {
    db_query(
      'INSERT INTO {' . $this->shares_table . '} (uid, sid, timestamp, is_read)
       VALUES (:uid, :sid, :timestamp, :is_read)
       ON DUPLICATE KEY UPDATE timestamp=:timestamp',
      array(
        ':uid' => $uid_to_share_with,
        ':sid' => $this->sid,
        ':timestamp' => REQUEST_TIME,
        ':is_read' => 0,
      )
    );
    eche_wf_share_update_user_count($uid_to_share_with);
  }

  function remove_share($uid_to_remove_share_from) {
    db_query(
      'DELETE FROM {' . $this->shares_table . '} WHERE uid = :uid AND sid = :sid',
      array(
        ':uid' => $uid_to_remove_share_from,
        ':sid' => $this->sid,
      )
    );
    eche_wf_share_update_user_count($uid_to_remove_share_from);
  }

  function mark_share_as_read($uid_shared_with) {

    $sid = db_query('SELECT sid FROM {' . $this->shares_table . '} WHERE sid=:sid AND uid=:uid', array(
      ':sid' => $this->sid,
      ':uid' => $uid_shared_with
    ))->fetchField();

    if (!empty($sid)) {
      db_query(
        'INSERT INTO {' . $this->shares_table . '} (uid, sid, timestamp, is_read)
       VALUES (:uid, :sid, :timestamp, :is_read)
       ON DUPLICATE KEY UPDATE is_read=:is_read',
        array(
          ':uid' => $uid_shared_with,
          ':sid' => $this->sid,
          ':timestamp' => REQUEST_TIME,
          ':is_read' => 1,
        )
      );
      eche_wf_share_update_user_count($uid_shared_with);
    }

  }

  function list_of_colleagues_to_share_with() {
    $options = array();

    if (!$this->heiId) {
      return $options;
    }

    $query = new EntityFieldQuery();

    $query->entityCondition('entity_type', 'user')
      ->propertyCondition('status', 1)
      ->propertyCondition('uid', $this->uid, '!=')
      ->fieldCondition('field_user_hei', 'target_id', $this->heiId)
      ->fieldOrderBy('field_firstname', 'value', 'ASC')
      ->propertyOrderBy('name', 'ASC');

    $result = $query->execute();

    if (isset($result['user'])) {
      $users = user_load_multiple(array_keys($result['user']));
      $shares = $this->get_shares();
      foreach ($users as $user) {
        // We return list of persons we haven't shared submission with yet.
        if (!in_array($user->uid, $shares)) {
          $options[$user->uid] = $user->realname;
        }
      }
    }

    return $options;
  }

  function get_shares($load_all = FALSE) {
    $uids = db_query('SELECT uid, uid FROM {' . $this->shares_table . '} WHERE sid = :sid ORDER BY timestamp ASC',
      array(':sid' => $this->sid))->fetchAllKeyed();
    if ($load_all) {
      return user_load_multiple($uids);
    }
    return $uids;
  }

  function get_mail_shares() {
    $mails = db_query('SELECT mail, mail FROM {' . $this->mail_shares_table . '} WHERE sid = :sid ORDER BY timestamp ASC',
      array(':sid' => $this->sid))->fetchAllKeyed();
    return $mails;
  }

  function add_mail_share($mail_to_share_with) {
    $token = $this->generate_mail_share_token($mail_to_share_with);
    db_query(
      'INSERT INTO {' . $this->mail_shares_table . '} (sid, mail, timestamp, token)
       VALUES (:sid, :mail, :timestamp, :token)
       ON DUPLICATE KEY UPDATE timestamp=:timestamp, token=:token',
      array(
        ':sid' => $this->sid,
        ':mail' => $mail_to_share_with,
        ':timestamp' => REQUEST_TIME,
        ':token' => $token,
      )
    );
    return $token;
  }

  protected function generate_mail_share_token($mail) {
    // Never ever change these secret words if you want tokens to work with
    // already sent shares!
    $random_word = substr(str_shuffle(md5(time())), 0, 16);
    return md5($random_word . $this->sid . $mail . REQUEST_TIME);
  }

  function remove_mail_share($mail_to_remove_share_from) {
    db_query(
      'DELETE FROM {' . $this->mail_shares_table . '} WHERE sid = :sid AND mail = :mail',
      array(
        ':sid' => $this->sid,
        ':mail' => $mail_to_remove_share_from,
      )
    );
  }

  function generate_tokenized_download_url($token) {
    return url('eche_wf/download/' . $token, array('absolute' => TRUE));
  }

}
