<?php
/**
 * @file
 * erasmus_30_year_anniversary_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function erasmus_30_year_anniversary_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'erasmus_30_year_anniversary_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Erasmus+ 30 year anniversary: Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no events.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_30ya_city']['id'] = 'field_30ya_city';
  $handler->display->display_options['fields']['field_30ya_city']['table'] = 'field_data_field_30ya_city';
  $handler->display->display_options['fields']['field_30ya_city']['field'] = 'field_30ya_city';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_30ya_txt_date']['id'] = 'field_30ya_txt_date';
  $handler->display->display_options['fields']['field_30ya_txt_date']['table'] = 'field_data_field_30ya_txt_date';
  $handler->display->display_options['fields']['field_30ya_txt_date']['field'] = 'field_30ya_txt_date';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Lead organisation */
  $handler->display->display_options['fields']['field_30ya_lead_organisation']['id'] = 'field_30ya_lead_organisation';
  $handler->display->display_options['fields']['field_30ya_lead_organisation']['table'] = 'field_data_field_30ya_lead_organisation';
  $handler->display->display_options['fields']['field_30ya_lead_organisation']['field'] = 'field_30ya_lead_organisation';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_30ya_link']['id'] = 'field_30ya_link';
  $handler->display->display_options['fields']['field_30ya_link']['table'] = 'field_data_field_30ya_link';
  $handler->display->display_options['fields']['field_30ya_link']['field'] = 'field_30ya_link';
  $handler->display->display_options['fields']['field_30ya_link']['click_sort_column'] = 'url';
  /* Field: Content: Link organiser */
  $handler->display->display_options['fields']['field_30ya_link_organiser']['id'] = 'field_30ya_link_organiser';
  $handler->display->display_options['fields']['field_30ya_link_organiser']['table'] = 'field_data_field_30ya_link_organiser';
  $handler->display->display_options['fields']['field_30ya_link_organiser']['field'] = 'field_30ya_link_organiser';
  $handler->display->display_options['fields']['field_30ya_link_organiser']['click_sort_column'] = 'url';
  /* Field: Content: Sector */
  $handler->display->display_options['fields']['field_30ya_sector']['id'] = 'field_30ya_sector';
  $handler->display->display_options['fields']['field_30ya_sector']['table'] = 'field_data_field_30ya_sector';
  $handler->display->display_options['fields']['field_30ya_sector']['field'] = 'field_30ya_sector';
  /* Field: Content: Expected number of participants */
  $handler->display->display_options['fields']['field_30ya_expected_participants']['id'] = 'field_30ya_expected_participants';
  $handler->display->display_options['fields']['field_30ya_expected_participants']['table'] = 'field_data_field_30ya_expected_participants';
  $handler->display->display_options['fields']['field_30ya_expected_participants']['field'] = 'field_30ya_expected_participants';
  $handler->display->display_options['fields']['field_30ya_expected_participants']['label'] = '';
  $handler->display->display_options['fields']['field_30ya_expected_participants']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_30ya_expected_participants']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_30ya_expected_participants']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_30ya_expected_participants']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Sort criterion: Content: Country (field_30ya_country) (translated) */
  $handler->display->display_options['sorts']['field_30ya_country_tid_i18n']['id'] = 'field_30ya_country_tid_i18n';
  $handler->display->display_options['sorts']['field_30ya_country_tid_i18n']['table'] = 'field_data_field_30ya_country';
  $handler->display->display_options['sorts']['field_30ya_country_tid_i18n']['field'] = 'field_30ya_country_tid_i18n';
  $handler->display->display_options['sorts']['field_30ya_country_tid_i18n']['order'] = 'DESC';
  /* Sort criterion: Content: Date (field_30ya_txt_date) */
  $handler->display->display_options['sorts']['field_30ya_txt_date_value']['id'] = 'field_30ya_txt_date_value';
  $handler->display->display_options['sorts']['field_30ya_txt_date_value']['table'] = 'field_data_field_30ya_txt_date';
  $handler->display->display_options['sorts']['field_30ya_txt_date_value']['field'] = 'field_30ya_txt_date_value';
  $handler->display->display_options['sorts']['field_30ya_txt_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'erasmus_30ya_event' => 'erasmus_30ya_event',
  );
  /* Filter criterion: Content: Country (field_30ya_country) (translated) */
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['id'] = 'field_30ya_country_tid_i18n';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['table'] = 'field_data_field_30ya_country';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['field'] = 'field_30ya_country_tid_i18n';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['value'] = array(
    152 => '152',
    154 => '154',
    156 => '156',
    157 => '157',
    158 => '158',
    159 => '159',
    160 => '160',
    161 => '161',
    162 => '162',
    163 => '163',
    164 => '164',
    165 => '165',
    166 => '166',
    167 => '167',
    168 => '168',
    169 => '169',
    170 => '170',
    171 => '171',
    172 => '172',
    173 => '173',
    174 => '174',
    177 => '177',
    179 => '179',
    180 => '180',
    181 => '181',
    185 => '185',
    186 => '186',
    187 => '187',
    190 => '190',
    143 => '143',
    192 => '192',
  );
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['expose']['operator_id'] = 'field_30ya_country_tid_i18n_op';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['expose']['operator'] = 'field_30ya_country_tid_i18n_op';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['expose']['identifier'] = 'country';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
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
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['vocabulary'] = 'ec_world_countries';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['error_message'] = FALSE;
  /* Filter criterion: Workbench Moderation: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'published' => 'published',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_30year_events');
  $export['erasmus_30_year_anniversary_events'] = $view;

  return $export;
}
