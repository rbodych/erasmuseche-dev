<?php
/**
 * @file
 * erasmus_30_year_anniversary_infographics.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function erasmus_30_year_anniversary_infographics_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-erasmus_30_year_anniversary_info-field_30ya_infographic'.
  $field_instances['node-erasmus_30_year_anniversary_info-field_30ya_infographic'] = array(
    'bundle' => 'erasmus_30_year_anniversary_info',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'media',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'media',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_30ya_infographic',
    'label' => 'Infographic',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'file_extensions' => 'jpg jpeg gif png',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'avportal' => 0,
          'dailymotion' => 0,
          'ffp' => 0,
          'node' => 0,
          'private' => 0,
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 'media_internet',
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 41,
    ),
  );

  // Exported field_instance:
  // 'node-erasmus_30_year_anniversary_info-title_field'.
  $field_instances['node-erasmus_30_year_anniversary_info-title_field'] = array(
    'bundle' => 'erasmus_30_year_anniversary_info',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => FALSE,
        'page' => FALSE,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Infographic');
  t('Title');

  return $field_instances;
}
