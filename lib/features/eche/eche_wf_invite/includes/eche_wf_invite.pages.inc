<?php
/**
 * @file
 * eche_wf_invite.pages.inc
 */

/**
 * Invite page function.
 */
function eche_wf_invite_page($js) {
  if ($js) {

    ctools_include('modal');
    ctools_include('ajax');

    // Basic form settings.
    $form_state = array(
      'title' => t("Invite"),
      'ajax' => TRUE,
    );

    $commands = ctools_modal_form_wrapper('eche_wf_invite_invite_form', $form_state);
    print ajax_render($commands);
    drupal_exit();
  }

  return drupal_get_form('eche_wf_invite_invite_form');
}
