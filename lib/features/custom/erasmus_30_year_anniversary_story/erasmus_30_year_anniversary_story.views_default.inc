<?php
/**
 * @file
 * erasmus_30_year_anniversary_story.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function erasmus_30_year_anniversary_story_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'erasmus_30_year_anniversary_stories';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Erasmus+ 30 year anniversary: Stories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Erasmus+ 30 year anniversary: Stories';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no stories.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Monthly theme (field_e30ya_monthly_theme) */
  $handler->display->display_options['arguments']['field_e30ya_monthly_theme_tid']['id'] = 'field_e30ya_monthly_theme_tid';
  $handler->display->display_options['arguments']['field_e30ya_monthly_theme_tid']['table'] = 'field_data_field_e30ya_monthly_theme';
  $handler->display->display_options['arguments']['field_e30ya_monthly_theme_tid']['field'] = 'field_e30ya_monthly_theme_tid';
  $handler->display->display_options['arguments']['field_e30ya_monthly_theme_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_e30ya_monthly_theme_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_e30ya_monthly_theme_tid']['default_argument_options']['argument'] = 'CHANGEME';
  $handler->display->display_options['arguments']['field_e30ya_monthly_theme_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_e30ya_monthly_theme_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_e30ya_monthly_theme_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_e30ya_monthly_theme_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_e30ya_monthly_theme_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_e30ya_monthly_theme_tid']['validate_options']['vocabularies'] = array(
    'erasmus_30_year_anniversary_monthly_themes' => 'erasmus_30_year_anniversary_monthly_themes',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'erasmus_30_year_anniversary_stor' => 'erasmus_30_year_anniversary_stor',
  );
  /* Filter criterion: Content: Country (field_country_na_events) (translated) */
  $handler->display->display_options['filters']['field_country_na_events_tid_i18n']['id'] = 'field_country_na_events_tid_i18n';
  $handler->display->display_options['filters']['field_country_na_events_tid_i18n']['table'] = 'field_data_field_country_na_events';
  $handler->display->display_options['filters']['field_country_na_events_tid_i18n']['field'] = 'field_country_na_events_tid_i18n';
  $handler->display->display_options['filters']['field_country_na_events_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_na_events_tid_i18n']['expose']['operator_id'] = 'field_country_na_events_tid_i18n_op';
  $handler->display->display_options['filters']['field_country_na_events_tid_i18n']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_country_na_events_tid_i18n']['expose']['operator'] = 'field_country_na_events_tid_i18n_op';
  $handler->display->display_options['filters']['field_country_na_events_tid_i18n']['expose']['identifier'] = 'country';
  $handler->display->display_options['filters']['field_country_na_events_tid_i18n']['expose']['remember_roles'] = array(
    2 => 0,
    1 => 0,
    3 => 0,
    32 => 0,
    4 => 0,
    5 => 0,
    34 => 0,
    35 => 0,
    29 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    30 => 0,
    31 => 0,
    36 => 0,
  );
  $handler->display->display_options['filters']['field_country_na_events_tid_i18n']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_country_na_events_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_country_na_events_tid_i18n']['vocabulary'] = 'ec_world_countries';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_30year_anniversary_monthly_theme');
  $handler->display->display_options['block_description'] = 'Erasmus+ 30 Year anniversary: Current montlhy theme block';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_30year_all_stories');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['block_description'] = '30 year : All stories';
  $export['erasmus_30_year_anniversary_stories'] = $view;

  return $export;
}
