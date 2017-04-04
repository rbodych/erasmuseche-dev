<?php
/**
 * @file
 * eche_user.box.inc
 */

/**
 * Implements hook_default_box().
 */
function eche_user_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'eche_user_register_info_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Register info box';
  $box->options = array(
    'body' => array(
      'value' => '<p>Are you aware of your institution’s performance in implementing Erasmus+?<br>Please register below to take the self-assessment and find out.<br>Registration is <strong>free</strong> and <strong>confidential</strong>.</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['eche_user_register_info_box'] = $box;

  return $export;
}
