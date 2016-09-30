<?php
/**
 * @file
 * erasmus_programmeguide.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function erasmus_programmeguide_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_div|node|programme_guide|form';
  $field_group->group_name = 'group_content_div';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programme_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'CONTENT',
    'weight' => '19',
    'children' => array(
      0 => 'body',
      1 => 'field_images',
      2 => 'title_field',
      3 => 'field_links_pg',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-content-div field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_content_div|node|programme_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|book|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CONTENT',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title_field',
      2 => 'field_links_pg',
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
  $field_groups['group_content|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|programme_guide|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programme_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CONTENT',
    'weight' => '3',
    'children' => array(
      0 => 'group_content_div',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'CONTENT',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-content field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_content|node|programme_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footer_odd_pg|node|programme_guide|form';
  $field_group->group_name = 'group_footer_odd_pg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programme_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_structure_footer_pg';
  $field_group->data = array(
    'label' => 'FOOTER (ODD PAGES)',
    'weight' => '28',
    'children' => array(
      0 => 'field_footer_left_odd_pg',
      1 => 'field_footer_center_odd_pg',
      2 => 'field_footer_right_odd_pg',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_footer_odd_pg|node|programme_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footer_pg|node|programme_guide|form';
  $field_group->group_name = 'group_footer_pg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programme_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_structure_footer_pg';
  $field_group->data = array(
    'label' => 'FOOTER (EVEN PAGES)',
    'weight' => '27',
    'children' => array(
      0 => 'field_footer_left_even_pg',
      1 => 'field_footer_right_even_pg',
      2 => 'field_footer_center_even_pg',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_footer_pg|node|programme_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_odd_pg|node|programme_guide|form';
  $field_group->group_name = 'group_header_odd_pg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programme_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_structure_div';
  $field_group->data = array(
    'label' => 'HEADER (ODD PAGES)',
    'weight' => '32',
    'children' => array(
      0 => 'field_header_left_odd_pg',
      1 => 'field_header_center_odd_pg',
      2 => 'field_header_right_odd_pg',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_header_odd_pg|node|programme_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_pg|node|programme_guide|form';
  $field_group->group_name = 'group_header_pg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programme_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_structure_div';
  $field_group->data = array(
    'label' => 'HEADER (EVEN PAGES)',
    'weight' => '31',
    'children' => array(
      0 => 'field_header_left_even_pg',
      1 => 'field_header_center_even_pg',
      2 => 'field_header_right_even_pg',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_header_pg|node|programme_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata_div|node|programme_guide|form';
  $field_group->group_name = 'group_metadata_div';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programme_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'METADATA',
    'weight' => '12',
    'children' => array(
      0 => 'field_meta_description',
      1 => 'field_meta_classification',
      2 => 'language',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'METADATA',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-metadata-div field-group-div',
        'description' => 'Summarizes basic information about the content.',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_metadata_div|node|programme_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|book|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'METADATA',
    'weight' => '0',
    'children' => array(
      0 => 'field_meta_description',
      1 => 'field_meta_classification',
      2 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_metadata|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|programme_guide|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programme_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'METADATA',
    'weight' => '0',
    'children' => array(
      0 => 'group_metadata_div',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'METADATA',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-metadata field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_metadata|node|programme_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_content|node|page|form';
  $field_group->group_name = 'group_page_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'body',
      2 => 'field_page_type',
      3 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-page-content field-group-tab',
        'required_fields' => TRUE,
      ),
    ),
  );
  $field_groups['group_page_content|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_metadata|node|page|form';
  $field_group->group_name = 'group_page_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '10',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'group_content_access',
      2 => 'field_tags',
      3 => 'scheduler_settings',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-page-metadata field-group-tab',
        'required_fields' => TRUE,
      ),
    ),
  );
  $field_groups['group_page_metadata|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_structura_info_pg|node|programme_guide|form';
  $field_group->group_name = 'group_structura_info_pg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programme_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_structure';
  $field_group->data = array(
    'label' => 'STRUCTURE',
    'weight' => '28',
    'children' => array(
      0 => 'group_structure_div',
      1 => 'group_structure_footer_pg',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'STRUCTURE',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => 'Contains the right sequence of the various components of the Programme Guide into a coherent whole. This structure is required for the PDF version.',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_structura_info_pg|node|programme_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_structure_div|node|programme_guide|form';
  $field_group->group_name = 'group_structure_div';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programme_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_structura_info_pg';
  $field_group->data = array(
    'label' => 'HEADER',
    'weight' => '29',
    'children' => array(
      0 => 'group_header_pg',
      1 => 'group_header_odd_pg',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'HEADER',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_structure_div|node|programme_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_structure_footer_pg|node|programme_guide|form';
  $field_group->group_name = 'group_structure_footer_pg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programme_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_structura_info_pg';
  $field_group->data = array(
    'label' => 'FOOTER',
    'weight' => '30',
    'children' => array(
      0 => 'group_footer_pg',
      1 => 'group_footer_odd_pg',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-structure-footer-pg field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_structure_footer_pg|node|programme_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_structure|node|programme_guide|form';
  $field_group->group_name = 'group_structure';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programme_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'STRUCTURE',
    'weight' => '1',
    'children' => array(
      0 => 'group_structura_info_pg',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'STRUCTURE',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-structure field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_structure|node|programme_guide|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('CONTENT');
  t('Content');
  t('FOOTER');
  t('FOOTER (EVEN PAGES)');
  t('FOOTER (ODD PAGES)');
  t('HEADER');
  t('HEADER (EVEN PAGES)');
  t('HEADER (ODD PAGES)');
  t('METADATA');
  t('Metadata');
  t('STRUCTURE');

  return $field_groups;
}
