<?php
/**
 * @file
 * erasmus_30_year_anniversary_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function erasmus_30_year_anniversary_event_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|event|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erasmus_30ya_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_30ya_city',
      2 => 'field_30ya_country',
      3 => 'field_30ya_expected_participants',
      4 => 'field_30ya_lead_organisation',
      5 => 'field_30ya_link',
      6 => 'field_30ya_link_organiser',
      7 => 'field_30ya_sector',
      8 => 'field_30ya_txt_date',
      9 => 'field_30ya_presence_commissioner',
      10 => 'title_field',
      11 => 'workbench_access',
      12 => 'language',
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
  $field_groups['group_content|node|event|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');

  return $field_groups;
}
