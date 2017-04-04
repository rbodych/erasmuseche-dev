<?php
/**
 * @file
 * eche_case_study.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eche_case_study_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function eche_case_study_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function eche_case_study_node_info() {
  $items = array(
    'case_study' => array(
      'name' => t('Case study'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
