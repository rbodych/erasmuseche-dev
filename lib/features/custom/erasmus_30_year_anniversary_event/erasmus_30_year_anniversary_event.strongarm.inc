<?php
/**
 * @file
 * erasmus_30_year_anniversary_event.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function erasmus_30_year_anniversary_event_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_erasmus_30ya_event';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autosave_erasmus_30ya_event';
  $strongarm->value = 1;
  $export['autosave_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_erasmus_30ya_event';
  $strongarm->value = '0';
  $export['comment_anonymous_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_erasmus_30ya_event';
  $strongarm->value = 1;
  $export['comment_default_mode_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_erasmus_30ya_event';
  $strongarm->value = '50';
  $export['comment_default_per_page_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_erasmus_30ya_event';
  $strongarm->value = '1';
  $export['comment_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_erasmus_30ya_event';
  $strongarm->value = 1;
  $export['comment_form_location_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_erasmus_30ya_event';
  $strongarm->value = '1';
  $export['comment_preview_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_erasmus_30ya_event';
  $strongarm->value = 1;
  $export['comment_subject_field_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_erasmus_30ya_event';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_erasmus_30ya_event';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_erasmus_30ya_event';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_comment_filter_erasmus_30ya_event';
  $strongarm->value = 0;
  $export['entity_translation_comment_filter_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_erasmus_30ya_event';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_erasmus_30ya_event';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_comment__comment_node_erasmus_30ya_event';
  $strongarm->value = array();
  $export['field_bundle_settings_comment__comment_node_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__erasmus_30ya_event';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '10',
        ),
        'path' => array(
          'weight' => '9',
        ),
        'language' => array(
          'weight' => '4',
        ),
        'workbench_access' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_erasmus_30ya_event';
  $strongarm->value = 1;
  $export['i18n_node_extended_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_erasmus_30ya_event';
  $strongarm->value = array();
  $export['i18n_node_options_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_erasmus_30ya_event';
  $strongarm->value = array();
  $export['i18n_sync_node_type_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_erasmus_30ya_event';
  $strongarm->value = '4';
  $export['language_content_type_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_erasmus_30ya_event';
  $strongarm->value = array(
    0 => 'menu-erasmus-30---events',
  );
  $export['menu_options_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_erasmus_30ya_event';
  $strongarm->value = 'menu-erasmus-30---events:0';
  $export['menu_parent_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_erasmus_30ya_event';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
  );
  $export['nodeaccess_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_erasmus_30ya_event';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_erasmus_30ya_event';
  $strongarm->value = '1';
  $export['node_preview_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_erasmus_30ya_event';
  $strongarm->value = 0;
  $export['node_submitted_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_bg_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_bg_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_cs_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_cs_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_da_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_da_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_de_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_de_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_el_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_el_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_es_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_es_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_et_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_et_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_fi_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_fi_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_ga_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_ga_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_hr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_hr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_hu_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_hu_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_it_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_it_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_lt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_lt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_lv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_lv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_mt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_mt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_nl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_nl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_pl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_pl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_pt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_pt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_ro_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_ro_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_sk_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_sk_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_sl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_sl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_sv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_sv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30ya_event_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30ya_event_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_display_comment_erasmus_30ya_event';
  $strongarm->value = 0;
  $export['print_html_display_comment_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_display_erasmus_30ya_event';
  $strongarm->value = 0;
  $export['print_html_display_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_display_urllist_erasmus_30ya_event';
  $strongarm->value = 0;
  $export['print_html_display_urllist_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_mail_display_comment_erasmus_30ya_event';
  $strongarm->value = 0;
  $export['print_mail_display_comment_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_mail_display_erasmus_30ya_event';
  $strongarm->value = 0;
  $export['print_mail_display_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_mail_display_urllist_erasmus_30ya_event';
  $strongarm->value = 0;
  $export['print_mail_display_urllist_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_pdf_display_comment_erasmus_30ya_event';
  $strongarm->value = 0;
  $export['print_pdf_display_comment_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_pdf_display_erasmus_30ya_event';
  $strongarm->value = 0;
  $export['print_pdf_display_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_pdf_display_urllist_erasmus_30ya_event';
  $strongarm->value = 0;
  $export['print_pdf_display_urllist_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_pdf_orientation_erasmus_30ya_event';
  $strongarm->value = '';
  $export['print_pdf_orientation_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_pdf_size_erasmus_30ya_event';
  $strongarm->value = '';
  $export['print_pdf_size_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_erasmus_30ya_event';
  $strongarm->value = array();
  $export['simplify_comments_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_erasmus_30ya_event';
  $strongarm->value = array(
    0 => 'author',
    1 => 'book',
    2 => 'comment',
    3 => 'menu',
  );
  $export['simplify_nodes_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_erasmus_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'public://eu-icon.png',
    'disable_dropdown_menu' => 0,
    'enable_interinstitutional_theme' => 0,
    'videohome_youtube_id' => '3fiCRpgOpvU',
    'ec_resp_base_theme_of_subtheme' => '',
    'favicon_mimetype' => 'image/png',
  );
  $export['theme_erasmus_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_erasmus_30ya_event';
  $strongarm->value = 0;
  $export['webform_node_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_erasmus_30ya_event';
  $strongarm->value = 0;
  $export['workbench_access_node_type_erasmus_30ya_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_erasmus_30ya_event';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_erasmus_30ya_event'] = $strongarm;

  return $export;
}
