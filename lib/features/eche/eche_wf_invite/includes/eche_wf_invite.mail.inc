<?php
/**
 * @file
 * eche_wf_invite.mail.inc
 */

/**
 * Implements hook_mail().
 */
function eche_wf_invite_mail($key, &$message, $params) {
  if (isset($params['subject'])) {
    $message['subject'] = $params['subject'];
  }
  if (isset($params['body'])) {
    $message['body'][] = $params['body'];
  }
}

/**
 * Sends report share mail.
 *
 * @param string $key
 *   Key value.
 * @param array $params
 *   Parameters to send mail.
 */
function eche_wf_invite_share_report_mail($key, $params = array()) {

  $from = variable_get('site_mail', '');
  $mail_text = $params['mail_text'];

  if ($key == 'self_assesment') {
    $subject = t('Invitation to complete the questionnaire on the Erasmus Charter for Higher Education');
    if (!empty($mail_text)) {
      $body = t(
        '%mail_text <br /> !link',
        [
          '%mail_text' => $mail_text,
          '!link' => $params['link'],
        ]
      );
    }
    else {
      $body = t(
        "Dear colleague in charge of international affairs in our institution, I cordially invite you to complete the questionnaire on the Erasmus Charter for Higher Education, which will help us to explore together in which areas our institution could perform better. !link",
        array('!link' => $params['link'])
      );
    }
  }
  elseif ($key == 'rector') {
    $subject = t('Invitation to take the quiz on the Erasmus Charter for Higher Education');
    if (!empty($mail_text)) {
      $body = t(
        '%mail_text <br /> !link',
        [
          '%mail_text' => $mail_text,
          '!link' => $params['link'],
        ]
      );
    }
    else {
      $body = t(
        "Dear Rector, I cordially invite you to take the quiz on the Erasmus Charter for Higher Education, while I complete a more detailed questionnaire. Both will help us to explore together in which areas our institution could perform better. !link",
        array('!link' => $params['link'])
      );
    }
  }

  drupal_mail(
    'eche_wf_invite',
    $key,
    $params['to'],
    LANGUAGE_NONE,
    array(
      'body' => $body,
      'subject' => $subject,
    ),
    $from,
    TRUE
  );

}
