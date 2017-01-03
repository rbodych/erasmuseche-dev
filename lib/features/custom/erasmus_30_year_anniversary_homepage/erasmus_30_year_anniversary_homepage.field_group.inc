<?php
/**
 * @file
 * erasmus_30_year_anniversary_homepage.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function erasmus_30_year_anniversary_homepage_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_top|node|erasmus_30_year_anniversary_home|form';
  $field_group->group_name = 'group_content_top';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erasmus_30_year_anniversary_home';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content top',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title_field',
      2 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content-top field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content_top|node|erasmus_30_year_anniversary_home|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_discover_eramusplus|node|erasmus_30_year_anniversary_home|form';
  $field_group->group_name = 'group_discover_eramusplus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erasmus_30_year_anniversary_home';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Discover Erasmus+',
    'weight' => '2',
    'children' => array(
      0 => 'field_30ya_discover_erasmus',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-discover-eramusplus field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_discover_eramusplus|node|erasmus_30_year_anniversary_home|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_share_story|node|erasmus_30_year_anniversary_home|form';
  $field_group->group_name = 'group_share_story';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'erasmus_30_year_anniversary_home';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Share story',
    'weight' => '1',
    'children' => array(
      0 => 'field_30ya_share_story_text',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-share-story field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_share_story|node|erasmus_30_year_anniversary_home|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content top');
  t('Discover Erasmus+');
  t('Share story');

  return $field_groups;
}
