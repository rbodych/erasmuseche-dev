<?php
/**
 * @file
 * erasmus_30_year_anniversary_infographics.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function erasmus_30_year_anniversary_infographics_ctools_plugin_api($module = NULL, $api = NULL) {
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
function erasmus_30_year_anniversary_infographics_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function erasmus_30_year_anniversary_infographics_node_info() {
  $items = array(
    'erasmus_30_year_anniversary_info' => array(
      'name' => t('Erasmus+ 30 year anniversary: Infographic'),
      'base' => 'node_content',
      'description' => t('Infograhics'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
