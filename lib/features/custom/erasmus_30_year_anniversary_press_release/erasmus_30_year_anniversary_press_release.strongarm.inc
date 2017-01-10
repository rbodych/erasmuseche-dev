<?php
/**
 * @file
 * erasmus_30_year_anniversary_press_release.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function erasmus_30_year_anniversary_press_release_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_erasmus_30_year_anniversary_pres';
  $strongarm->value = '0';
  $export['comment_anonymous_erasmus_30_year_anniversary_pres'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_erasmus_30_year_anniversary_pres';
  $strongarm->value = 1;
  $export['comment_default_mode_erasmus_30_year_anniversary_pres'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_erasmus_30_year_anniversary_pres';
  $strongarm->value = '50';
  $export['comment_default_per_page_erasmus_30_year_anniversary_pres'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_erasmus_30_year_anniversary_pres';
  $strongarm->value = '1';
  $export['comment_erasmus_30_year_anniversary_pres'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_erasmus_30_year_anniversary_pres';
  $strongarm->value = 1;
  $export['comment_form_location_erasmus_30_year_anniversary_pres'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_erasmus_30_year_anniversary_pres';
  $strongarm->value = '1';
  $export['comment_preview_erasmus_30_year_anniversary_pres'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_erasmus_30_year_anniversary_pres';
  $strongarm->value = 1;
  $export['comment_subject_field_erasmus_30_year_anniversary_pres'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__erasmus_30_year_anniversary_pres';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '4',
        ),
        'title' => array(
          'weight' => '3',
        ),
        'path' => array(
          'weight' => '3',
        ),
        'language' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__erasmus_30_year_anniversary_pres'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_erasmus_30_year_anniversary_pres';
  $strongarm->value = array();
  $export['i18n_sync_node_type_erasmus_30_year_anniversary_pres'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_erasmus_30_year_anniversary_pres';
  $strongarm->value = '4';
  $export['language_content_type_erasmus_30_year_anniversary_pres'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_erasmus_30_year_anniversary_pres';
  $strongarm->value = array();
  $export['menu_options_erasmus_30_year_anniversary_pres'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_erasmus_30_year_anniversary_pres';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_erasmus_30_year_anniversary_pres'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_erasmus_30_year_anniversary_pres';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_erasmus_30_year_anniversary_pres'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_erasmus_30_year_anniversary_pres';
  $strongarm->value = '1';
  $export['node_preview_erasmus_30_year_anniversary_pres'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_erasmus_30_year_anniversary_pres';
  $strongarm->value = 0;
  $export['node_submitted_erasmus_30_year_anniversary_pres'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_bg_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_bg_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_cs_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_cs_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_da_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_da_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_de_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_de_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_el_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_el_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_es_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_es_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_et_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_et_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_fi_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_fi_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_ga_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_ga_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_hr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_hr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_hu_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_hu_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_it_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_it_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_lt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_lt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_lv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_lv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_mt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_mt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_nl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_nl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_pattern';
  $strongarm->value = 'press-release/[node:source:title]';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_pl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_pl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_pt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_pt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_ro_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_ro_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_sk_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_sk_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_sl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_sl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_sv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_sv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_erasmus_30_year_anniversary_pres_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_erasmus_30_year_anniversary_pres_und_pattern'] = $strongarm;

  return $export;
}
