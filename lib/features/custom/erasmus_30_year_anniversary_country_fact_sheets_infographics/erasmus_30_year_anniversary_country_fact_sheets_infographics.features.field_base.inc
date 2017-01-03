<?php
/**
 * @file
 * erasmus_30_year_anniversary_country_fact_sheets_infographics.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function erasmus_30_year_anniversary_country_fact_sheets_infographics_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_30ya_fact_sheets'.
  $field_bases['field_30ya_fact_sheets'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_30ya_fact_sheets',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 1,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 1,
    'type' => 'file',
  );

  // Exported field_base: 'field_30ya_infographics'.
  $field_bases['field_30ya_infographics'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_30ya_infographics',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 1,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 1,
    'type' => 'file',
  );

  return $field_bases;
}
