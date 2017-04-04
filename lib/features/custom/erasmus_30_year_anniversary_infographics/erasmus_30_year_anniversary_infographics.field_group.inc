<?php
/**
 * @file
 * erasmus_30_year_anniversary_infographics.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function erasmus_30_year_anniversary_infographics_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|erasmus_30_year_anniversary_info|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erasmus_30_year_anniversary_info';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '-50',
    'children' => array(
      0 => 'title_field',
      1 => 'field_30ya_infographic',
      2 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-content field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_content|node|erasmus_30_year_anniversary_info|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');

  return $field_groups;
}
