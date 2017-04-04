<?php
/**
 * @file
 * eche_case_study.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function eche_case_study_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case_study_about|node|case_study|form';
  $field_group->group_name = 'group_case_study_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_case_study_content';
  $field_group->data = array(
    'label' => 'About the institution',
    'weight' => '12',
    'children' => array(
      0 => 'field_case_study_about',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'About the institution',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-case-study-about field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_case_study_about|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case_study_about|node|case_study|full';
  $field_group->group_name = 'group_case_study_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_case_study_content';
  $field_group->data = array(
    'label' => 'About the institution',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_case_study_about',
      2 => 'field_case_study_introduction',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'label' => 'About the institution',
      'instance_settings' => array(
        'classes' => 'tabs__item ',
      ),
    ),
  );
  $field_groups['group_case_study_about|node|case_study|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case_study_contact|node|case_study|form';
  $field_group->group_name = 'group_case_study_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_case_study_content';
  $field_group->data = array(
    'label' => 'Contact Details',
    'weight' => '15',
    'children' => array(
      0 => 'field_case_study_contact',
      1 => 'field_case_study_contact_email',
      2 => 'field_case_study_contact_name',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Contact Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-case-study-contact field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_case_study_contact|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case_study_contact|node|case_study|full';
  $field_group->group_name = 'group_case_study_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_case_study_content';
  $field_group->data = array(
    'label' => 'Further reading and contact',
    'weight' => '4',
    'children' => array(
      0 => 'field_case_study_contact',
      1 => 'field_case_study_contact_email',
      2 => 'field_case_study_contact_name',
      3 => 'field_case_study_further_reading',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'label' => 'Further reading and contact',
      'instance_settings' => array(
        'classes' => 'tabs__item ',
      ),
    ),
  );
  $field_groups['group_case_study_contact|node|case_study|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case_study_content_tab|node|case_study|form';
  $field_group->group_name = 'group_case_study_content_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_case_study_content';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '11',
    'children' => array(
      0 => 'body',
      1 => 'field_case_study_introduction',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-case-study-content-tab field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_case_study_content_tab|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case_study_content|node|case_study|form';
  $field_group->group_name = 'group_case_study_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'group_case_study_contact',
      1 => 'group_case_study_content_tab',
      2 => 'group_case_study_description',
      3 => 'group_case_study_further_reading',
      4 => 'group_case_study_organisation',
      5 => 'group_case_study_about',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-case-study-content field-group-tabs',
      ),
    ),
  );
  $field_groups['group_case_study_content|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case_study_content|node|case_study|full';
  $field_group->group_name = 'group_case_study_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'group_case_study_about',
      1 => 'group_case_study_contact',
      2 => 'group_case_study_description',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'bootstrap_nav_type' => 'tabs',
        'bootstrap_stacked' => '0',
        'bootstrap_orientation' => '0',
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_case_study_content|node|case_study|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case_study_description|node|case_study|form';
  $field_group->group_name = 'group_case_study_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_case_study_content';
  $field_group->data = array(
    'label' => 'Descriptions',
    'weight' => '12',
    'children' => array(
      0 => 'field_case_study_description',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Descriptions',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-case-study-description field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_case_study_description|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case_study_description|node|case_study|full';
  $field_group->group_name = 'group_case_study_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_case_study_content';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'label' => 'Description',
      'instance_settings' => array(
        'classes' => 'tabs__item ',
      ),
    ),
  );
  $field_groups['group_case_study_description|node|case_study|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case_study_further_reading|node|case_study|form';
  $field_group->group_name = 'group_case_study_further_reading';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_case_study_content';
  $field_group->data = array(
    'label' => 'Further reading',
    'weight' => '16',
    'children' => array(
      0 => 'field_case_study_further_reading',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-case-study-further-reading field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_case_study_further_reading|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case_study_further_reading|node|case_study|full';
  $field_group->group_name = 'group_case_study_further_reading';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_case_study_content';
  $field_group->data = array(
    'label' => 'Further reading',
    'weight' => '4',
    'children' => array(
      0 => 'field_case_study_further_reading',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'label' => 'Further reading',
      'instance_settings' => array(
        'classes' => 'tabs__item ',
      ),
    ),
  );
  $field_groups['group_case_study_further_reading|node|case_study|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case_study_introduction|node|case_study|full';
  $field_group->group_name = 'group_case_study_introduction';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_case_study_content';
  $field_group->data = array(
    'label' => 'Introduction',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_case_study_introduction',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'label' => 'Introduction',
      'instance_settings' => array(
        'classes' => 'tabs__item ',
      ),
    ),
  );
  $field_groups['group_case_study_introduction|node|case_study|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case_study_organisation|node|case_study|form';
  $field_group->group_name = 'group_case_study_organisation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_case_study_content';
  $field_group->data = array(
    'label' => 'Organisation Details',
    'weight' => '14',
    'children' => array(
      0 => 'field_case_study_country',
      1 => 'field_case_study_org_type',
      2 => 'field_case_study_organisation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-case-study-organisation field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_case_study_organisation|node|case_study|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('About the institution');
  t('Contact Details');
  t('Content');
  t('Description');
  t('Descriptions');
  t('Further reading');
  t('Further reading and contact');
  t('Introduction');
  t('Organisation Details');

  return $field_groups;
}
