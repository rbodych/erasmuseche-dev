<?php
/**
 * @file
 * eche_core.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function eche_core_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_machine_name'.
  $field_bases['field_machine_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_machine_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
