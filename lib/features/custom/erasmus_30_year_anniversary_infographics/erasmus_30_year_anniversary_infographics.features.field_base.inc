<?php
/**
 * @file
 * erasmus_30_year_anniversary_infographics.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function erasmus_30_year_anniversary_infographics_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_30ya_infographic'.
  $field_bases['field_30ya_infographic'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_30ya_infographic',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'mediafield',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'media',
  );

  return $field_bases;
}
