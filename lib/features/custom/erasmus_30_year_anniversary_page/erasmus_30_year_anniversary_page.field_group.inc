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
  $field_group->identifier = 'group_content_body|node|erasmus_30_year_anniversary_page|form';
  $field_group->group_name = 'group_content_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erasmus_30_year_anniversary_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content body',
    'weight' => '1',
    'children' => array(
      0 => 'field_30ya_content_row',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content-body field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content_body|node|erasmus_30_year_anniversary_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|erasmus_30_year_anniversary_page|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erasmus_30_year_anniversary_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'field_30ya_contentrow_richtext',
      2 => 'language',
      3 => 'group_media',
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
  $field_groups['group_content|node|erasmus_30_year_anniversary_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|field_collection_item|field_30ya_content_row|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_30ya_content_row';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '7',
    'children' => array(
      0 => 'field_30ya_contentrow_media',
      1 => 'field_30ya_media_thumb',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_media|field_collection_item|field_30ya_content_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|erasmus_30_year_anniversary_page|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erasmus_30_year_anniversary_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '8',
    'children' => array(
      0 => 'field_30ya_contentrow_media',
      1 => 'field_30ya_media_thumb',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_media|node|erasmus_30_year_anniversary_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Content body');
  t('Media');

  return $field_groups;
}
