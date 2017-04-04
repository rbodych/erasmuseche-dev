<?php
/**
 * @file
 * erasmus_programmeguide.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function erasmus_programmeguide_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
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
function erasmus_programmeguide_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function erasmus_programmeguide_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Book page'),
      'base' => 'node_content',
      'description' => t('<em>Books</em> have a built-in hierarchical navigation. Use for handbooks or tutorials like Erasmus+ Programme Guideline'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'programme_guide' => array(
      'name' => t('Programme guide'),
      'base' => 'node_content',
      'description' => t('The Content Type "Programme Guide" host the Erasmus+ Programme Guide.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
