<?php
/**
 * @file
 * eche_case_study.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function eche_case_study_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_case_study_about'.
  $field_bases['field_case_study_about'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_case_study_about',
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
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_case_study_contact'.
  $field_bases['field_case_study_contact'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_case_study_contact',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'addressfield',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'addressfield',
  );

  // Exported field_base: 'field_case_study_contact_email'.
  $field_bases['field_case_study_contact_email'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_case_study_contact_email',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'email',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'email',
  );

  // Exported field_base: 'field_case_study_contact_name'.
  $field_bases['field_case_study_contact_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_case_study_contact_name',
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

  // Exported field_base: 'field_case_study_country'.
  $field_bases['field_case_study_country'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_case_study_country',
    'indexes' => array(
      'iso2' => array(
        0 => 'iso2',
      ),
    ),
    'locked' => 1,
    'module' => 'countries',
    'settings' => array(
      'continents' => array(
        'AF' => 'AF',
        'AS' => 'AS',
        'EU' => 'EU',
        'NA' => 'NA',
        'OC' => 'OC',
        'SA' => 'SA',
      ),
      'countries' => array(),
      'enabled' => 1,
      'entity_translation_sync' => FALSE,
      'size' => 5,
    ),
    'translatable' => 0,
    'type' => 'country',
  );

  // Exported field_base: 'field_case_study_further_reading'.
  $field_bases['field_case_study_further_reading'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_case_study_further_reading',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => '_blank',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_case_study_introduction'.
  $field_bases['field_case_study_introduction'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_case_study_introduction',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 160,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_case_study_org_type'.
  $field_bases['field_case_study_org_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_case_study_org_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 'University',
        2 => 'Academy',
        3 => 'University of applied sciences',
        4 => 'College',
        5 => 'Vocational school including third level education',
        6 => 'Business',
        7 => 'Research organisation',
        8 => 'Erasmus+ project',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_case_study_organisation'.
  $field_bases['field_case_study_organisation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_case_study_organisation',
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
