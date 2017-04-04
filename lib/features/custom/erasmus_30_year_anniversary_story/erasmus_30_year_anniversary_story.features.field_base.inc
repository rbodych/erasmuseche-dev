<?php
/**
 * @file
 * erasmus_30_year_anniversary_story.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function erasmus_30_year_anniversary_story_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_e30ya_monthly_theme'.
  $field_bases['field_e30ya_monthly_theme'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_e30ya_monthly_theme',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 1,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'erasmus_30_year_anniversary_monthly_themes',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
