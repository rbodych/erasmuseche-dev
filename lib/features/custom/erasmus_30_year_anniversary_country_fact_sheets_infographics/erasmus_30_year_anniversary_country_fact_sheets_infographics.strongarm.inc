<?php
/**
 * @file
 * erasmus_30_year_anniversary_country_fact_sheets_infographics.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function erasmus_30_year_anniversary_country_fact_sheets_infographics_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_erasmus_30_year_anniversary_fact';
  $strongarm->value = 'edit-print';
  $export['additional_settings__active_tab_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autosave_erasmus_30_year_anniversary_fact';
  $strongarm->value = 1;
  $export['autosave_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_erasmus_30_year_anniversary_fact';
  $strongarm->value = '0';
  $export['comment_anonymous_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_erasmus_30_year_anniversary_fact';
  $strongarm->value = 1;
  $export['comment_default_mode_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_erasmus_30_year_anniversary_fact';
  $strongarm->value = '50';
  $export['comment_default_per_page_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_erasmus_30_year_anniversary_fact';
  $strongarm->value = '1';
  $export['comment_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_erasmus_30_year_anniversary_fact';
  $strongarm->value = 1;
  $export['comment_form_location_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_erasmus_30_year_anniversary_fact';
  $strongarm->value = '1';
  $export['comment_preview_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_erasmus_30_year_anniversary_fact';
  $strongarm->value = 1;
  $export['comment_subject_field_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_erasmus_30_year_anniversary_fact';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_erasmus_30_year_anniversary_fact';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_erasmus_30_year_anniversary_fact';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_comment_filter_erasmus_30_year_anniversary_fact';
  $strongarm->value = 0;
  $export['entity_translation_comment_filter_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_erasmus_30_year_anniversary_fact';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_erasmus_30_year_anniversary_fact';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__erasmus_30_year_anniversary_fact';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '3',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'language' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_erasmus_30_year_anniversary_fact';
  $strongarm->value = array();
  $export['i18n_sync_node_type_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_erasmus_30_year_anniversary_fact';
  $strongarm->value = '4';
  $export['language_content_type_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_erasmus_30_year_anniversary_fact';
  $strongarm->value = '';
  $export['maxlength_js_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_label_erasmus_30_year_anniversary_fact';
  $strongarm->value = 'Content limited to @limit characters, remaining: <strong>@remaining</strong>';
  $export['maxlength_js_label_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_erasmus_30_year_anniversary_fact';
  $strongarm->value = array();
  $export['menu_options_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_erasmus_30_year_anniversary_fact';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__erasmus_30_year_anniversary_fact';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_erasmus_30_year_anniversary_fact';
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
  $export['nodeaccess_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_erasmus_30_year_anniversary_fact';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_erasmus_30_year_anniversary_fact';
  $strongarm->value = '1';
  $export['node_preview_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_erasmus_30_year_anniversary_fact';
  $strongarm->value = 0;
  $export['node_submitted_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_bg_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_bg_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_cs_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_cs_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_da_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_da_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_de_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_de_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_el_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_el_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_es_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_es_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_et_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_et_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_fi_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_fi_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_ga_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_ga_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_hr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_hr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_hu_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_hu_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_it_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_it_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_lt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_lt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_lv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_lv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_mt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_mt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_nl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_nl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_pl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_pl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_pt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_pt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_ro_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_ro_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_sk_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_sk_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_sl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_sl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_sv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_sv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_fact_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_fact_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_display_comment_erasmus_30_year_anniversary_fact';
  $strongarm->value = 0;
  $export['print_html_display_comment_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_display_erasmus_30_year_anniversary_fact';
  $strongarm->value = 0;
  $export['print_html_display_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_display_urllist_erasmus_30_year_anniversary_fact';
  $strongarm->value = 0;
  $export['print_html_display_urllist_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_mail_display_comment_erasmus_30_year_anniversary_fact';
  $strongarm->value = 0;
  $export['print_mail_display_comment_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_mail_display_erasmus_30_year_anniversary_fact';
  $strongarm->value = 0;
  $export['print_mail_display_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_mail_display_urllist_erasmus_30_year_anniversary_fact';
  $strongarm->value = 0;
  $export['print_mail_display_urllist_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_pdf_display_comment_erasmus_30_year_anniversary_fact';
  $strongarm->value = 0;
  $export['print_pdf_display_comment_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_pdf_display_erasmus_30_year_anniversary_fact';
  $strongarm->value = 0;
  $export['print_pdf_display_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_pdf_display_urllist_erasmus_30_year_anniversary_fact';
  $strongarm->value = 0;
  $export['print_pdf_display_urllist_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_pdf_orientation_erasmus_30_year_anniversary_fact';
  $strongarm->value = '';
  $export['print_pdf_orientation_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_pdf_size_erasmus_30_year_anniversary_fact';
  $strongarm->value = '';
  $export['print_pdf_size_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_erasmus_30_year_anniversary_fact';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_comments_erasmus_30_year_anniversary_fact';
  $strongarm->value = array();
  $export['simplify_comments_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_nodes_erasmus_30_year_anniversary_fact';
  $strongarm->value = array(
    0 => 'author',
    1 => 'book',
    2 => 'comment',
    3 => 'menu',
  );
  $export['simplify_nodes_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_erasmus_30_year_anniversary_fact';
  $strongarm->value = 0;
  $export['webform_node_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_erasmus_30_year_anniversary_fact';
  $strongarm->value = 0;
  $export['workbench_access_node_type_erasmus_30_year_anniversary_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_erasmus_30_year_anniversary_fact';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_erasmus_30_year_anniversary_fact'] = $strongarm;

  return $export;
}
