<?php
/**
 * @file
 * eche_wf_invite.invites.inc
 */

/**
 * Class EcheWfUserInvites.
 */
class EcheWfInvite {

  protected $uid;
  protected $account;

  /**
   * Class constructor.
   */
  public function __construct($uid) {
    $this->uid = $uid;
    $this->account = user_load($uid);
  }

  /**
   * Gets invite.
   *
   * @return array
   *    Gets all information about the invite.
   */
  public function getInvites() {
    return db_query('SELECT * FROM {eche_wf_invites} WHERE uid = :uid ORDER BY timestamp ASC', array(':uid' => $this->uid))->fetchAll();
  }

  /**
   * Adds invite.
   *
   * @param string $mail
   *    Mail of user.
   * @param string $nid
   *    Nid of node.
   */
  public function addInvite($mail, $nid) {
    // @codingStandardsIgnoreStart
    db_query(
      'INSERT INTO {eche_wf_invites} (uid, nid, mail, timestamp)
       VALUES (:uid, :nid, :mail, :timestamp)
       ON DUPLICATE KEY UPDATE timestamp=:timestamp',
      array(
        ':uid' => $this->uid,
        ':nid' => $nid,
        ':mail' => $mail,
        ':timestamp' => REQUEST_TIME,
      )
    );
    // @codingStandardsIgnoreEnd
  }

  /**
   * Sends invite.
   *
   * @param string $mail
   *    Mail to send.
   * @param int $nid
   *    Node id.
   * @param string $mail_text
   *    Mail text.
   */
  public function sendInvite($mail, $nid, $mail_text) {

    if (user_load_by_mail($mail)) {
      $link = url('node/' . $nid, array('absolute' => TRUE));
    }
    else {
      $query = array(
        'hei' => $this->account->field_user_hei[LANGUAGE_NONE][0]['target_id'],
        'destination' => 'node/' . $nid,
      );
      // @codingStandardsIgnoreStart
      $link = url('user/register', array(
          'absolute' => TRUE,
          'query' => $query,
        )
      );
      // @codingStandardsIgnoreEnd

    }

    $params = array('link' => $link, 'to' => $mail, 'mail_text' => $mail_text);

    switch ($nid) {
      case variable_get('eche_wf_self_assesment_form_nid', 0):
        eche_wf_invite_share_report_mail('self_assesment', $params);
        break;

      case variable_get('eche_wf_rectors_form_nid', 0):
        eche_wf_invite_share_report_mail('rector', $params);
        break;
    }

  }

}
