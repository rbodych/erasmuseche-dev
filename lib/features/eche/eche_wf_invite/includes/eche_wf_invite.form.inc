<?php
/**
 * @file
 * eche_wf_invite.form.inc
 */

/**
 * User's sharing form.
 */
function eche_wf_invite_invite_form($form, &$form_state) {

  global $user;

  $invites = new EcheWfInvite($user->uid);

  $form['h2'] = array(
    '#type' => 'markup',
    '#markup' => '<h2>Invite colleagues from your institution to collaborate</h2>',
  );

  $form['h3'] = array(
    '#type' => 'markup',
    '#markup' => '<h3>Your colleagues will receive an e-mail invite to fill in the self-assessment for your institution</h3>',
  );

  $form['invite_via_mail'] = array(
    '#type' => 'fieldset',
  );

  $form['invite_via_mail']['mails'] = array(
    '#markup' => '',
    '#prefix' => '<div id="eche-wf-share-mail-sharing-form-wrapper" class="modal__field-wrapper">',
    '#suffix' => '</div>',
  );

  $form['invite_via_mail']['mails']['list_of_invites'] = array(
    '#markup' => t('Please enter emails of your colleagues:'),
    '#prefix' => '<ul class="modal__field-header">',
    '#suffix' => '</ul>',
  );

  $counter = 1;
  $invites = $invites->getInvites();
  $invite_count = count($invites);

  $show_last_invite = FALSE;
  if (!empty($_SESSION['eche_wf_invite_sent'])) {
    $show_last_invite = TRUE;
    unset($_SESSION['eche_wf_invite_sent']);
  }

  foreach ($invites as $invite) {

    $li_css_class = '';
    if ($show_last_invite && $counter == $invite_count) {
      $li_css_class = 'last-item';
    }

    $form['invite_via_mail']['mails']['list_of_invites'][$counter]['counter'] = array(
      '#type' => 'markup',
      '#markup' => $counter . ' ',
      '#prefix' => '<li class="' . $li_css_class . '">',
    );

    $form['invite_via_mail']['mails']['list_of_invites'][$counter]['name'] = array(
      '#type' => 'markup',
      '#markup' => $invite->mail,
    );

    $form['invite_via_mail']['mails']['list_of_invites'][$counter]['type'] = array(
      '#type' => 'markup',
      '#markup' => ' ' . eche_wf_invite_get_webform_label($invite->nid),
      '#suffix' => '</li>',
    );

    $counter++;
  }

  $options = array(
    variable_get('eche_wf_rectors_form_nid', 0) => t('The self-assessment for Rectors / Vice Rectors / Vice Chancellors'),
    variable_get('eche_wf_self_assesment_form_nid', 0) => t('The self-assessment for Erasmus+ coordinators'),
  );

  $form['invite_via_mail']['mails']['mail'] = array(
    '#title' => t('E-mail address'),
    '#type' => 'textfield',
    '#default_value' => '',
  );

  $form['invite_via_mail']['mails']['form_nid'] = array(
    '#type' => 'radios',
    '#title' => t('Send invite to complete'),
    '#required' => TRUE,
    '#options' => $options,
    '#ajax' => array(
      'callback' => 'eche_wf_invite_mail_invite_form_submit_ajax_callback',
      'wrapper' => 'eche-wf-share-mail-sharing-form-wrapper',
      'method' => 'replace',
      'effect' => 'fade',
    ),

  );

  $invitation_text = 'Dear colleague in charge of international affairs in our institution, I cordially invite you to complete the questionnaire on the Erasmus Charter for Higher Education, which will help us to explore together in which areas our institution could perform better.';
  $form['invite_via_mail']['mails']['mail_text'] = array(
    '#type' => 'textarea',
    '#id' => 'mail_text',
    '#default_value' => $invitation_text,
    '#resizable' => FALSE,
  );

  $invitation_text_rector = 'Dear Rector, I cordially invite you to take the quiz on the Erasmus Charter for Higher Education, while I complete a more detailed questionnaire. Both will help us to explore together in which areas our institution could perform better.';

  $form['invite_via_mail']['mails']['mail_text_rector'] = array(
    '#type' => 'textarea',
    '#id' => 'mail_text_rector',
    '#attributes' => array('style' => 'display:none;'),
    '#default_value' => $invitation_text_rector,
    '#resizable' => FALSE,
  );

  $form['invite_via_mail']['share'] = array(
    '#type' => 'submit',
    '#value' => t('Invite colleagues'),
    '#submit' => array('eche_wf_invite_mail_invite_form_ajax_submit'),
    '#validate' => array('eche_wf_invite_mail_invite_form_ajax_validate'),
    '#attributes' => array('class' => array('btn--primary')),
    '#ajax' => array(
      'callback' => 'eche_wf_invite_mail_invite_form_submit_ajax_callback',
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
function eche_wf_invite_mail_invite_form_ajax_submit($form, &$form_state) {
  global $user;
  $values = $form_state['values'];

  $invites = new EcheWfInvite($user->uid);
  $invites->addInvite($values['mail'], $values['form_nid']);
  // @codingStandardsIgnoreStart
  $form_state['input']['mail'] = '';
  // @codingStandardsIgnoreEnd
  $form_state['rebuild'] = TRUE;

  $mail_text = '';

  if ($values['form_nid'] == variable_get('eche_wf_rectors_form_nid', 0)) {
    $mail_text = $form_state['values']['mail_text_rector'];
  }
  else {
    $mail_text = $form_state['values']['mail_text'];
  }

  $invites->sendInvite($values['mail'], $values['form_nid'], $mail_text);
  drupal_set_message(t('The invitation has been sent to <b>!mail</b>', array('!mail' => $values['mail'])));
  $_SESSION['eche_wf_invite_sent'] = TRUE;
}

/**
 * User's sharing form ajax share callback.
 */
function eche_wf_invite_mail_invite_form_ajax_validate($form, &$form_state) {
  // @codingStandardsIgnoreStart
  $form_state['input']['mail_text'] = $form_state['values']['mail_text'];
  $form_state['input']['mail_text_rector'] = $form_state['values']['mail_text_rector'];
  // @codingStandardsIgnoreEnd
  if (!valid_email_address($form_state['values']['mail'])) {
    form_set_error('mail', t('E-mail address is invalid.'));
  }

}

/**
 * Refresh callback for ajax submits.
 */
function eche_wf_invite_mail_invite_form_submit_ajax_callback($form, $form_state) {

  $values = $form_state['values'];

  $webform_type = $values['form_nid'];

  if ($webform_type == variable_get('eche_wf_rectors_form_nid')) {
    $form['invite_via_mail']['mails']['mail_text_rector']['#attributes'] = array('style' => 'display:block;');
    $form['invite_via_mail']['mails']['mail_text']['#attributes'] = array('style' => 'display:none;');
  }
  else {
    $form['invite_via_mail']['mails']['mail_text']['#attributes'] = array('style' => 'display:block;');
    $form['invite_via_mail']['mails']['mail_text_rector']['#attributes'] = array('style' => 'display:none;');

  }

  $form_state['rebuild'] = TRUE;

  return $form['invite_via_mail']['mails'];
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function eche_wf_invite_form_user_register_form_alter(&$form, &$form_state, $form_id) {
  if (isset($_GET['hei']) && is_numeric($_GET['hei'])) {
    $term = taxonomy_term_load($_GET['hei']);
    if (!empty($term) && $term->vocabulary_machine_name == 'higher_education_institutions') {
      $form['field_user_hei'][LANGUAGE_NONE][0]['target_id']['#default_value'] = $term->name . ' (' . $term->tid . ')';
      $form['field_user_hei']['#disabled'] = TRUE;
      // @codingStandardsIgnoreStart
      $form_state['input']['field_user_hei'][LANGUAGE_NONE][0]['target_id'] = $term->name;
      // @codingStandardsIgnoreEnd
      if (!empty($term->field_country[LANGUAGE_NONE][0]['iso2'])) {
        $form['field_country'][LANGUAGE_NONE]['#default_value'] = $term->field_country[LANGUAGE_NONE][0]['iso2'];
        $form['field_country']['#disabled'] = TRUE;
      }
    }
  }
}
