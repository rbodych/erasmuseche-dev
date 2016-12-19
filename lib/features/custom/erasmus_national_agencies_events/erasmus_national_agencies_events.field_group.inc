<?php

/**
 * @file
 * erasmus_national_agencies_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function erasmus_national_agencies_events_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group__information_div_speaker|node|speakers_na_events|default';
  $field_group->group_name = 'group__information_div_speaker';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speakers_na_events';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal information',
    'weight' => '1',
    'children' => array(
      0 => 'field_job_title_speakers',
      1 => 'field_organiz_instit_speakers',
      2 => 'field_email_address_speakers',
      3 => 'field_twitter_speakers',
      4 => 'field_facebook_speakers',
      5 => 'field_linkedin_speakers',
      6 => 'field_instagram_speakers',
      7 => 'field_website_speakers',
      8 => 'field_yammer_speakers',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Personal information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-information-div-speaker field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group__information_div_speaker|node|speakers_na_events|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_biography_div_speaker|node|speakers_na_events|default';
  $field_group->group_name = 'group_biography_div_speaker';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speakers_na_events';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Biography',
    'weight' => '2',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Biography',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-biography-div-speaker field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_biography_div_speaker|node|speakers_na_events|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_biography_speaker|node|speakers_na_events|form';
  $field_group->group_name = 'group_biography_speaker';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speakers_na_events';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'BIOGRAPHY',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'workbench_access',
      2 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-biography-speaker field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_biography_speaker|node|speakers_na_events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_speakers|node|speakers_na_events|form';
  $field_group->group_name = 'group_contact_speakers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speakers_na_events';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CONTACT INFORMATION',
    'weight' => '1',
    'children' => array(
      0 => 'field_email_address_speakers',
      1 => 'field_website_speakers',
      2 => 'group_social_net_speakers',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact-speakers field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_contact_speakers|node|speakers_na_events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_agenda_na_events|node|agenda_na_events|form';
  $field_group->group_name = 'group_content_agenda_na_events';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agenda_na_events';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CONTENT',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_field_specific_na_events',
      2 => 'field_dates_na_events',
      3 => 'title',
      4 => 'workbench_access',
      5 => 'language',
      6 => 'field_image_na_events',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content-agenda-na-events field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content_agenda_na_events|node|agenda_na_events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_na_events|node|na_events_pages|form';
  $field_group->group_name = 'group_content_na_events';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'na_events_pages';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CONTENT',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title',
      2 => 'workbench_access',
      3 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content-na-events field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content_na_events|node|na_events_pages|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_documents_agenda|node|agenda_na_events|default';
  $field_group->group_name = 'group_documents_agenda';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agenda_na_events';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'DOCUMENTS',
    'weight' => '3',
    'children' => array(
      0 => 'field_link_document_na_events',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'DOCUMENTS',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-documents-agenda field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_documents_agenda|node|agenda_na_events|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_documents_na_events|node|agenda_na_events|form';
  $field_group->group_name = 'group_documents_na_events';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agenda_na_events';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'DOCUMENTS',
    'weight' => '4',
    'children' => array(
      0 => 'field_link_document_na_events',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_documents_na_events|node|agenda_na_events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_information_agenda|node|agenda_na_events|default';
  $field_group->group_name = 'group_information_agenda';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agenda_na_events';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'INFORMATION',
    'weight' => '1',
    'children' => array(
      0 => 'field_field_specific_na_events',
      1 => 'field_dates_na_events',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'INFORMATION',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-information-agenda field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_information_agenda|node|agenda_na_events|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_na_events|node|agenda_na_events|form';
  $field_group->group_name = 'group_location_na_events';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agenda_na_events';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'LOCATION',
    'weight' => '1',
    'children' => array(
      0 => 'field_address_na_events',
      1 => 'field_place_name_na_events',
      2 => 'field_readable_address_na_events',
      3 => 'field_country_na_events',
      4 => 'field_hall_room_na_events',
      5 => 'field_cabaret_setup_na_events',
      6 => 'field_website_location_na_events',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location-na-events field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location_na_events|node|agenda_na_events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal_speakers|node|speakers_na_events|form';
  $field_group->group_name = 'group_personal_speakers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speakers_na_events';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'PERSONAL INFORMATION',
    'weight' => '0',
    'children' => array(
      0 => 'field_job_title_speakers',
      1 => 'field_organiz_instit_speakers',
      2 => 'field_photo_speakers',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-personal-speakers field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_personal_speakers|node|speakers_na_events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_photo_agenda|node|agenda_na_events|default';
  $field_group->group_name = 'group_photo_agenda';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agenda_na_events';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'photo agenda',
    'weight' => '0',
    'children' => array(
      0 => 'field_image_na_events',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'photo agenda',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-photo-agenda field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_photo_agenda|node|agenda_na_events|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_photo_div_speaker|node|speakers_na_events|default';
  $field_group->group_name = 'group_photo_div_speaker';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speakers_na_events';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'photo',
    'weight' => '0',
    'children' => array(
      0 => 'field_photo_speakers',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'photo',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-photo-div-speaker field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_photo_div_speaker|node|speakers_na_events|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_photo_na_events|node|agenda_na_events|form';
  $field_group->group_name = 'group_photo_na_events';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agenda_na_events';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'PHOTOS',
    'weight' => '6',
    'children' => array(
      0 => 'field_photo_na_events',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-photo-na-events field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_photo_na_events|node|agenda_na_events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_photos_agenda|node|agenda_na_events|default';
  $field_group->group_name = 'group_photos_agenda';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agenda_na_events';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'PHOTOS',
    'weight' => '5',
    'children' => array(
      0 => 'field_photo_na_events',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'PHOTOS',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-photos-agenda field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_photos_agenda|node|agenda_na_events|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_net_speakers|node|speakers_na_events|form';
  $field_group->group_name = 'group_social_net_speakers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speakers_na_events';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact_speakers';
  $field_group->data = array(
    'label' => 'SOCIAL NETWORKS',
    'weight' => '9',
    'children' => array(
      0 => 'field_twitter_speakers',
      1 => 'field_facebook_speakers',
      2 => 'field_linkedin_speakers',
      3 => 'field_instagram_speakers',
      4 => 'field_yammer_speakers',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-social-net-speakers field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_social_net_speakers|node|speakers_na_events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speakers_na_events|node|agenda_na_events|form';
  $field_group->group_name = 'group_speakers_na_events';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agenda_na_events';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SPEAKERS',
    'weight' => '2',
    'children' => array(
      0 => 'field_speaker_na_events',
      1 => 'field_speakers_na_events',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-speakers-na-events field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_speakers_na_events|node|agenda_na_events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_agenda|node|agenda_na_events|default';
  $field_group->group_name = 'group_summary_agenda';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agenda_na_events';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SUMMARY',
    'weight' => '2',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'SUMMARY',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-summary-agenda field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_summary_agenda|node|agenda_na_events|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video_na_events|node|agenda_na_events|form';
  $field_group->group_name = 'group_video_na_events';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agenda_na_events';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'VIDEOS',
    'weight' => '5',
    'children' => array(
      0 => 'field_video_na_events',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-video-na-events field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_video_na_events|node|agenda_na_events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_videos_agenda|node|agenda_na_events|default';
  $field_group->group_name = 'group_videos_agenda';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agenda_na_events';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'VIDEOS',
    'weight' => '4',
    'children' => array(
      0 => 'field_video_na_events',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'VIDEOS',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-videos-agenda field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_videos_agenda|node|agenda_na_events|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('BIOGRAPHY');
  t('Biography');
  t('CONTACT INFORMATION');
  t('CONTENT');
  t('DOCUMENTS');
  t('INFORMATION');
  t('LOCATION');
  t('PERSONAL INFORMATION');
  t('PHOTOS');
  t('Personal information');
  t('SOCIAL NETWORKS');
  t('SPEAKERS');
  t('SUMMARY');
  t('VIDEOS');
  t('photo');
  t('photo agenda');

  return $field_groups;
}
