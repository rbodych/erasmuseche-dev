<?php
/**
 * @file
 * erasmus_30_year_anniversary_country_fact_sheets_infographics.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function erasmus_30_year_anniversary_country_fact_sheets_infographics_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|erasmus_30_year_anniversary_fact|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erasmus_30_year_anniversary_fact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'field_country_na_events',
      2 => 'field_30ya_fact_sheets',
      3 => 'language',
      4 => 'field_30ya_infographics',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|node|erasmus_30_year_anniversary_fact|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');

  return $field_groups;
}
