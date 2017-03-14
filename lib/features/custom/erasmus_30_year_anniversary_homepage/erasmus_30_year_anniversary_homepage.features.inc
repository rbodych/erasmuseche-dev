<?php
/**
 * @file
 * erasmus_30_year_anniversary_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function erasmus_30_year_anniversary_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function erasmus_30_year_anniversary_homepage_image_default_styles() {
  $styles = array();

  // Exported image style: erasmus_30_year_story_huge__720x574.
  $styles['erasmus_30_year_story_huge__720x574'] = array(
    'label' => 'erasmus_30_year_story_huge (720x574)',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 720,
          'height' => 574,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: erasmus_30_year_story_large__520x520.
  $styles['erasmus_30_year_story_large__520x520'] = array(
    'label' => 'erasmus_30_year_story_large (520x520)',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 520,
          'height' => 520,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: erasmus_30_year_story_medium__300x300.
  $styles['erasmus_30_year_story_medium__300x300'] = array(
    'label' => 'erasmus_30_year_story_medium (300x300)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: erasmus_30_year_story_small__280x280.
  $styles['erasmus_30_year_story_small__280x280'] = array(
    'label' => 'erasmus_30_year_story_small (280x280)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 280,
          'height' => 280,
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
function erasmus_30_year_anniversary_homepage_node_info() {
  $items = array(
    'erasmus_30_year_anniversary_home' => array(
      'name' => t('Erasmus+ 30 year anniversary: homepage'),
      'base' => 'node_content',
      'description' => t('Homepage for the 30 year Erasmus+ Campaign site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
