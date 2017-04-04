<?php
/**
 * @file
 * eche_wf.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function eche_wf_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'optionsmarkup_input_format';
  $strongarm->value = 'full_html';
  $export['optionsmarkup_input_format'] = $strongarm;

  return $export;
}
