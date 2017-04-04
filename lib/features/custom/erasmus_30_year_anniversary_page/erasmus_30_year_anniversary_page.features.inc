<?php
/**
 * @file
 * erasmus_30_year_anniversary_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function erasmus_30_year_anniversary_page_ctools_plugin_api($module = NULL, $api = NULL) {
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
function erasmus_30_year_anniversary_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function erasmus_30_year_anniversary_page_image_default_styles() {
  $styles = array();

  // Exported image style: erasmus_30_year_video_poster_640_370.
  $styles['erasmus_30_year_video_poster_640_370'] = array(
    'label' => 'erasmus_30_year_video_poster_640_370',
    'effects' => array(
      11 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 370,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
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
function erasmus_30_year_anniversary_page_node_info() {
  $items = array(
    'erasmus_30_year_anniversary_page' => array(
      'name' => t('Erasmus+ 30 year anniversary: Page'),
      'base' => 'node_content',
      'description' => t('A page for the 30 year anniversary. Used for about us, tookit pages, ...'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
