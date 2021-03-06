<?php
/**
 * @file
 * erasmus_30_year_anniversary_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function erasmus_30_year_anniversary_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_30ya_content_row'.
  $field_bases['field_30ya_content_row'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_30ya_content_row',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'field_collection',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_blank_items' => 1,
      'hide_initial_item' => FALSE,
      'path' => '',
    ),
    'translatable' => 1,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_30ya_contentrow_media'.
  $field_bases['field_30ya_contentrow_media'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_30ya_contentrow_media',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 1,
    'module' => 'mediafield',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'media',
  );

  // Exported field_base: 'field_30ya_contentrow_richtext'.
  $field_bases['field_30ya_contentrow_richtext'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_30ya_contentrow_richtext',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_30ya_contentrow_type'.
  $field_bases['field_30ya_contentrow_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_30ya_contentrow_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'image-left-row' => 'Image left row',
        'video-row' => 'Video row',
        'gray-bg' => 'Gray background',
        'blue-bg' => 'Blue background',
        'center-gradient' => 'Center text with gradient background',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_30ya_disable_auto_columns'.
  $field_bases['field_30ya_disable_auto_columns'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_30ya_disable_auto_columns',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_30ya_in_the_spotlight'.
  $field_bases['field_30ya_in_the_spotlight'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_30ya_in_the_spotlight',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'No',
        1 => 'Yes',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_30ya_media_poster'.
  $field_bases['field_30ya_media_poster'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_30ya_media_poster',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 1,
    'module' => 'mediafield',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'media',
  );

  // Exported field_base: 'field_30ya_media_thumb'.
  $field_bases['field_30ya_media_thumb'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_30ya_media_thumb',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 1,
    'module' => 'mediafield',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'media',
  );

  return $field_bases;
}
