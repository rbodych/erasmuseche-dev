<?php
/**
 * @file
 * erasmus_30_year_anniversary_homepage.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function erasmus_30_year_anniversary_homepage_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_30ya_discover_erasmus'.
  $field_bases['field_30ya_discover_erasmus'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_30ya_discover_erasmus',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_30ya_share_story_text'.
  $field_bases['field_30ya_share_story_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_30ya_share_story_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  return $field_bases;
}
