<?php
/**
 * @file
 * eche_case_study.box.inc
 */

/**
 * Implements hook_default_box().
 */
function eche_case_study_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'resources_header';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Resources - header';
  $box->options = array(
    'body' => array(
      'value' => 'In this section you can access all best practice examples and case studies related to ECHE.<br><strong>Simply use the filters below.</strong>',
      'format' => 'eche_custom_text_format',
    ),
    'additional_classes' => '',
  );
  $export['resources_header'] = $box;

  return $export;
}
