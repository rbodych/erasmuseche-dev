<?php
/**
 * @file
 * erasmus_30_year_anniversary_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function erasmus_30_year_anniversary_page_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subsite_theme|node|page|form';
  $field_group->group_name = 'group_subsite_theme';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Subsite theme',
    'weight' => '4',
    'children' => array(
      0 => 'field_subsite_theme',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-subsite-theme field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_subsite_theme|node|page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Subsite theme');

  return $field_groups;
}
