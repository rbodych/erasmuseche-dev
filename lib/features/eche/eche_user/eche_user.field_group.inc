<?php
/**
 * @file
 * eche_user.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function eche_user_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_hei|user|user|form';
  $field_group->group_name = 'group_user_hei';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'HEI',
    'weight' => '2',
    'children' => array(
      0 => 'field_user_hei',
      1 => 'field_country',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'HEI',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-user-hei field-group-html-element form-group--separated',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_user_hei|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('HEI');

  return $field_groups;
}
