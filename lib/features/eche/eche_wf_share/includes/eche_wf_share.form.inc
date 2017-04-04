<?php
/**
 * @file
 * eche_wf_share.form.inc
 */

/**
 * User's sharing form.
 */
function eche_wf_share_sharing_form($form, &$form_state, $node, $submission) {

  $node = $node ? $node : $form_state['node'];
  $submission = $submission ? $submission : $form_state['submission'];

  $shares = new EcheWfUserSubmissionShares($submission->uid, $submission->sid);

  $form['nid'] = array(
    '#type' => 'value',
    '#value' => $node->nid,
  );

  $form['sid'] = array(
    '#type' => 'value',
    '#value' => $submission->sid,
  );

  $form['share_with_users'] = array(
    '#type' => 'fieldset',
  );

  $form['share_with_users']['users'] = array(
    '#type' => 'fieldset',
    '#prefix' => '<div id="eche-wf-share-user-sharing-form">',
    '#suffix' => '</div>',
  );

  $form['share_with_users']['users']['list_of_shares'] = array(
    '#type' => 'fieldset',
    '#prefix' => '<ul>',
    '#suffix' => '</ul>',
  );

  // @codingStandardsIgnoreStart
  if (!empty($shares->get_shares(TRUE))) {
    $form['share_with_users']['users']['list_of_shares']['title'] = array(
      '#markup' => '<div class="modal__field-header">' . t('Your self-assessment results has been shared with') . ':' . '</div>',
    );
  }
  // @codingStandardsIgnoreEnd
  $counter = 1;
  foreach ($shares->get_shares(TRUE) as $account) {

    $form['share_with_users']['users']['list_of_shares'][$counter]['counter'] = array(
      '#type' => 'markup',
      '#markup' => $counter . ' ',
      '#prefix' => '<li>',
    );

    $form['share_with_users']['users']['list_of_shares'][$counter]['name'] = array(
      '#type' => 'markup',
      '#markup' => $account->realname,
    );

    $form['share_with_users']['users']['list_of_shares'][$counter]['remove_user'] = array(
      '#title_display' => 'invisible',
      '#type' => 'submit',
      '#value' => t('unshare'),
      '#name' => 'remove_' . $counter,
      '#id' => 'remove_' . $counter,
      '#submit' => array('eche_wf_share_sharing_form_remove_submit'),
      '#attributes' => array('class' => array('btn--primary')),
      '#ajax' => array(
        'callback' => 'eche_wf_share_sharing_form_submit_ajax_callback',
        'wrapper' => 'eche-wf-share-user-sharing-form',
        'parameters' => array(
          'uid' => $account->uid,
          'nid' => $node->nid,
          'sid' => $submission->sid,
        ),
      ),
      '#suffix' => '</li>',
    );

    $counter++;
  }

  $form['share_with_users']['users']['users_to_share_with'] = array(
    '#title' => t('Please select the name of your colleagues with whom to share your results'),
    '#type' => 'select',
    '#empty_option' => '',
    '#options' => $shares->list_of_colleagues_to_share_with(),
  );

  $form['share_with_users']['submission'] = array(
    '#type' => 'submit',
    '#value' => t('Share'),
    '#name' => 'share',
    '#submit' => array('eche_wf_share_sharing_form_ajax_submit'),
    '#attributes' => array('class' => array('btn--primary')),
    // See the examples in ajax_example.module for more details on the
    // properties of #ajax.
    '#ajax' => array(
      'callback' => 'eche_wf_share_sharing_form_submit_ajax_callback',
      'wrapper' => 'eche-wf-share-user-sharing-form',
      'method' => 'replace',
      'effect' => 'fade',
    ),
  );

  $form['share_via_mail'] = array(
    '#type' => 'fieldset',
  );

  $form['share_via_mail']['mails'] = array(
    '#type' => 'fieldset',
    '#prefix' => '<div id="eche-wf-share-mail-sharing-form-wrapper">',
    '#suffix' => '</div>',
  );

  $form['share_via_mail']['mails']['list_of_shares'] = array(
    '#type' => 'fieldset',
    '#prefix' => '<ul>',
    '#suffix' => '</ul>',
  );
  // @codingStandardsIgnoreStart
  if (!empty($shares->get_mail_shares())) {
    $form['share_via_mail']['mails']['list_of_shares']['title'] = array(
      '#markup' => '<div class="modal__field-header">' . t('Your self-assessment results has been shared with') . ':' . '</div>',
    );
  }
  // @codingStandardsIgnoreEnd

  $counter = 1;
  foreach ($shares->get_mail_shares() as $mail) {

    $form['share_via_mail']['mails']['list_of_shares'][$counter]['counter'] = array(
      '#type' => 'markup',
      '#markup' => $counter . ' ',
      '#prefix' => '<li>',
    );

    $form['share_via_mail']['mails']['list_of_shares'][$counter]['name'] = array(
      '#type' => 'markup',
      '#markup' => $mail,

    );

    $form['share_via_mail']['mails']['list_of_shares'][$counter]['remove_mail'] = array(
      '#title_display' => 'invisible',
      '#type' => 'submit',
      '#value' => t('unshare'),
      '#name' => 'remove_mail_' . $counter,
      '#id' => 'remove_mail_' . $counter,
      '#submit' => array('eche_wf_share_sharing_form_remove_mail_submit'),
      '#attributes' => array('class' => array('btn--primary')),
      '#ajax' => array(
        'callback' => 'eche_wf_share_mail_sharing_form_submit_ajax_callback',
        'wrapper' => 'eche-wf-share-mail-sharing-form-wrapper',
        'method' => 'replace',
        'effect' => 'fade',
        'parameters' => array(
          'sid' => $submission->sid,
          'mail' => $mail,
        ),
      ),

      '#suffix' => '</li>',
    );

    $counter++;
  }

  $form['share_via_mail']['mails']['mail'] = array(
    '#title' => t('Please type in the e-mail addresses of your colleagues to share your results'),
    '#type' => 'textfield',
    '#default_value' => '',
  );

  $form['share_via_mail']['send_message'] = array(
    '#type' => 'checkbox',
    '#title' => t('Please tick this box to send a personalised message'),
  );

  $form['share_via_mail']['message'] = array(
    '#type' => 'textarea',
    '#title' => t('Message'),
    '#states' => array(
      'enabled' => array(
        ':input[name="send_message"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['share_via_mail']['note'] = array(
    '#type' => 'item',
    '#markup' => t('By clicking the share button below, you will send an e-mail with a PDF version of the self-assessment results.'),
  );

  $form['share_via_mail']['share'] = array(
    '#type' => 'submit',
    '#value' => t('Share'),
    '#submit' => array('eche_wf_share_mail_sharing_form_ajax_submit'),
    '#validate' => array('eche_wf_share_mail_sharing_form_ajax_validate'),
    '#attributes' => array('class' => array('btn--primary')),
    // See the examples in ajax_example.module for more details on the
    // properties of #ajax.
    '#ajax' => array(
      'callback' => 'eche_wf_share_mail_sharing_form_submit_ajax_callback',
      'wrapper' => 'eche-wf-share-mail-sharing-form-wrapper',
      'method' => 'replace',
      'effect' => 'fade',
    ),
  );

  return $form;
}

/**
 * User's sharing form ajax share callback.
 */
function eche_wf_share_sharing_form_ajax_submit($form, &$form_state) {
  global $user;
  $values = $form_state['values'];
  $shares = new EcheWfUserSubmissionShares($user->uid, $values['sid']);
  if (!is_array($values['users_to_share_with'])) {
    $values['users_to_share_with'] = array($values['users_to_share_with']);
  }
  foreach ($values['users_to_share_with'] as $uid) {
    if (!empty($uid)) {
      $shares->add_share($uid);

      $recipient = user_load($uid);

      $params = array(
        'nid' => $values['nid'],
        'sid' => $values['sid'],
        'to' => $recipient->mail,
        'account' => $user,
        'link' => eche_wf_share_combined_report_url($values['nid'], $values['sid']),
      );

      eche_wf_share_share_report_mail('user_share', $params);
    }
  }
  $form_state['rebuild'] = TRUE;
}

/**
 * Submit handler for the "unshare" button.
 */
function eche_wf_share_sharing_form_remove_submit($form, &$form_state) {
  $params = $form_state['triggering_element']['#ajax']['parameters'];
  $node = node_load($params['nid']);
  $share = new EcheWfUserSubmissionShares($node->uid, $params['sid']);
  $share->remove_share($params['uid']);
  $form_state['rebuild'] = TRUE;
}

/**
 * Submit handler for the "unshare mail" button.
 */
function eche_wf_share_sharing_form_remove_mail_submit($form, &$form_state) {
  $params = $form_state['triggering_element']['#ajax']['parameters'];
  $node = node_load($params['nid']);
  $share = new EcheWfUserSubmissionShares($node->uid, $params['sid']);
  $share->remove_mail_share($params['mail']);
  // $share->remove_share($params['uid']);.
  $form_state['rebuild'] = TRUE;
}

/**
 * Refresh callback for ajax submits.
 */
function eche_wf_share_sharing_form_submit_ajax_callback($form, $form_state) {
  return $form['share_with_users']['users'];
}

/**
 * User's sharing form ajax share callback.
 */
function eche_wf_share_mail_sharing_form_ajax_validate($form, &$form_state) {
  if (!valid_email_address($form_state['values']['mail'])) {
    form_set_error('mail', t('E-mail address is invalid.'));
  }
}

/**
 * User's sharing form ajax share callback.
 */
function eche_wf_share_mail_sharing_form_ajax_submit($form, &$form_state) {
  global $user;
  $values = $form_state['values'];
  $shares = new EcheWfUserSubmissionShares($user->uid, $values['sid']);
  $token = $shares->add_mail_share($values['mail']);
  // @codingStandardsIgnoreStart
  $form_state['input']['mail'] = '';
  // @codingStandardsIgnoreEnd
  $form_state['rebuild'] = TRUE;

  $params = array(
    'nid' => $values['nid'],
    'sid' => $values['sid'],
    'to' => $values['mail'],
    'message' => !(empty($values['send_message'])) ? $values['message'] : NULL,
    'account' => $user,
    'link' => $shares->generate_tokenized_download_url($token),
  );

  eche_wf_share_share_report_mail('pdf_share', $params);
}

/**
 * Refresh callback for ajax submits.
 */
function eche_wf_share_mail_sharing_form_submit_ajax_callback($form, $form_state) {

  $submission = $form_state['submission'];

  $shares = new EcheWfUserSubmissionShares($submission->uid, $submission->sid);
  $counter = 1;
  foreach ($shares->get_mail_shares() as $mail) {

    $form['share_via_mail']['mails']['list_of_shares'][$counter]['counter'] = array(
      '#type' => 'markup',
      '#markup' => $counter . ' ',
      '#prefix' => '<li>',
    );

    $form['share_via_mail']['mails']['list_of_shares'][$counter]['name'] = array(
      '#type' => 'markup',
      '#markup' => $mail,

    );

    $form['share_via_mail']['mails']['list_of_shares'][$counter]['remove_mail'] = array(
      '#title_display' => 'invisible',
      '#type' => 'submit',
      '#value' => t('unshare'),
      '#name' => 'remove_mail_' . $counter,
      '#id' => 'remove_mail_' . $counter,
      '#submit' => array('eche_wf_share_sharing_form_remove_mail_submit'),
      '#attributes' => array('class' => array('btn--primary')),
      '#ajax' => array(
        'callback' => 'eche_wf_share_mail_sharing_form_submit_ajax_callback',
        'wrapper' => 'eche-wf-share-mail-sharing-form-wrapper',
        'method' => 'replace',
        'effect' => 'fade',
        'parameters' => array(
          'sid' => $submission->sid,
          'mail' => $mail,
        ),
      ),

      '#suffix' => '</li>',
    );

    $counter++;
  }
  $form_state['rebuild'] = TRUE;
  return $form['share_via_mail']['mails'];
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function eche_wf_share_form_views_exposed_form_alter(&$form, &$form_state) {
  if (in_array($form['#id'], array(
    'views-exposed-form-self-assessment-submissions-page',
    'views-exposed-form-self-assessment-submissions-page-1',
  ))) {
    if (!empty($form['submitted'])) {
      $form['submitted']['min']['#attributes']['placeholder'] = t('From');
      $form['submitted']['max']['#attributes']['placeholder'] = t('To');
      $form['submitted']['max']['#title'] = '';
    }
  }
  if ($form['#id'] == 'views-exposed-form-self-assessment-submissions-page-1') {
    if (!empty($form['realname'])) {
      global $user;
      $form['realname']['#type'] = 'select';
      $shares = new EcheWfUserSubmissionShares($user->uid, NULL);
      $form['realname']['#options'] = array_combine(array_values($shares->list_of_colleagues_to_share_with()),
        array_values($shares->list_of_colleagues_to_share_with()));
      $form['realname']['#default_value'] = '';
      $form['realname']['#required'] = FALSE;
      $form['realname']['#empty_option'] = t('Colleague name');
      $form['realname']['#multiple'] = FALSE;
      unset($form['realname']['#size']);
    }
  }
}
