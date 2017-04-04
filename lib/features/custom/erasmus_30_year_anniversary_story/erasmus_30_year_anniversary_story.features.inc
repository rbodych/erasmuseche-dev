<?php
/**
 * @file
 * erasmus_30_year_anniversary_story.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function erasmus_30_year_anniversary_story_ctools_plugin_api($module = NULL, $api = NULL) {
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
function erasmus_30_year_anniversary_story_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function erasmus_30_year_anniversary_story_image_default_styles() {
  $styles = array();

  // Exported image style: erasmus_30_year_story_card__370x210.
  $styles['erasmus_30_year_story_card__370x210'] = array(
    'label' => 'erasmus_30_year_story_card (370x210)',
    'effects' => array(
      9 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 370,
          'height' => 210,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function erasmus_30_year_anniversary_story_node_info() {
  $items = array(
    'erasmus_30_year_anniversary_stor' => array(
      'name' => t('Erasmus+ 30 year anniversary: Story'),
      'base' => 'node_content',
      'description' => t('Story for Erasmus+ 30 year anniversary.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
