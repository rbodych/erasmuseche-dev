<?php
/**
 * @file
 * erasmus_30_year_anniversary_hero.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function erasmus_30_year_anniversary_hero_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
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
function erasmus_30_year_anniversary_hero_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function erasmus_30_year_anniversary_hero_image_default_styles() {
  $styles = array();

  // Exported image style: erasmus_30_year_hero_bg.
  $styles['erasmus_30_year_hero_bg'] = array(
    'label' => 'erasmus_30_year_hero_bg',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2000,
          'height' => 1125,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: erasmus_30_year_hero_small_hp.
  $styles['erasmus_30_year_hero_small_hp'] = array(
    'label' => 'erasmus_30_year_hero_small_hp',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 900,
          'height' => 510,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function erasmus_30_year_anniversary_hero_node_info() {
  $items = array(
    'erasmus_30_year_anniversary_hero' => array(
      'name' => t('Erasmus+ 30 year anniversary: Hero'),
      'base' => 'node_content',
      'description' => t('Hero/ Ambassador/ Face of the Erasmus+ campaign.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
