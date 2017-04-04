<?php
/**
 * @file
 * eche_wf_share.mail.inc
 */

/**
 * Implements hook_mail().
 */
function eche_wf_share_mail($key, &$message, $params) {

  if (isset($params['subject'])) {
    $message['subject'] = $params['subject'];
  }
  if (isset($params['body'])) {
    $message['body'][] = $params['body'];
  }

}

/**
 * Sends report share mail.
 */
function eche_wf_share_share_report_mail($key, $params = []) {

  $account = user_load($params['account']->uid);

  $from = variable_get('site_mail', '');
  $body = t('!realname has shared the results of the online self-assessment completion on the Erasmus Charter for Higher Education',
    array('!realname' => $account->realname));

  if ($params['message']) {
    $body .= "\n" . $params['message'];
  }

  if ($key == 'pdf_share') {
    $body .= "\n" . l(t('You can download report as a pdf by clicking on the link below:'), $params['link']);
  }
  elseif ($key == 'user_share') {
    $body .= "\n" . l(t('You view report by clicking on the link below:'), $params['link']);
  }

  drupal_mail(
    'eche_wf_share',
    $key,
    $params['to'],
    LANGUAGE_NONE,
    array(
      'body' => $body,
      'subject' => t('!realname has shared a report with the result of the Erasmus Charter online self-assessment completion',
        array('!realname' => $account->realname)),
    ),
    $from,
    TRUE
  );

  watchdog('eche_wf_share', $body, array(), WATCHDOG_INFO);

}
