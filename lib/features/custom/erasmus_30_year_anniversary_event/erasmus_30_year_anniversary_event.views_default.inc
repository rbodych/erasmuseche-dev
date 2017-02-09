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
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'test';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
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
  /* Sort criterion: Content: Promoted to front page */
  $handler->display->display_options['sorts']['promote']['id'] = 'promote';
  $handler->display->display_options['sorts']['promote']['table'] = 'node';
  $handler->display->display_options['sorts']['promote']['field'] = 'promote';
  $handler->display->display_options['sorts']['promote']['order'] = 'DESC';
  /* Sort criterion: Content: Date (field_30ya_txt_date) */
  $handler->display->display_options['sorts']['field_30ya_txt_date_value']['id'] = 'field_30ya_txt_date_value';
  $handler->display->display_options['sorts']['field_30ya_txt_date_value']['table'] = 'field_data_field_30ya_txt_date';
  $handler->display->display_options['sorts']['field_30ya_txt_date_value']['field'] = 'field_30ya_txt_date_value';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'erasmus_30ya_event' => 'erasmus_30ya_event',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );
  /* Filter criterion: Content: Country (field_30ya_country) (translated) */
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['id'] = 'field_30ya_country_tid_i18n';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['table'] = 'field_data_field_30ya_country';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['field'] = 'field_30ya_country_tid_i18n';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['expose']['operator_id'] = 'field_30ya_country_tid_i18n_op';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['expose']['operator'] = 'field_30ya_country_tid_i18n_op';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['expose']['identifier'] = 'country';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['vocabulary'] = 'ec_world_countries';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_30year_events');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_anniversary_event_list');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any erasmus_30ya_event content';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_30ya_city' => 'field_30ya_city',
    'field_30ya_txt_date' => 'field_30ya_txt_date',
    'title' => 'title',
    'body' => 'body',
    'field_30ya_lead_organisation' => 'field_30ya_lead_organisation',
    'field_30ya_link' => 'field_30ya_link',
    'field_30ya_link_organiser' => 'field_30ya_link_organiser',
    'field_30ya_sector' => 'field_30ya_sector',
    'field_30ya_expected_participants' => 'field_30ya_expected_participants',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_30ya_city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_30ya_txt_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_30ya_lead_organisation' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_30ya_link' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_30ya_link_organiser' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_30ya_sector' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_30ya_expected_participants' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['expose']['operator_id'] = 'field_30ya_country_tid_i18n_op';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['expose']['operator'] = 'field_30ya_country_tid_i18n_op';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['expose']['identifier'] = 'country';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_30ya_country_tid_i18n']['vocabulary'] = 'ec_world_countries';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'admin/content/anniversary-event-list';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Manage anniversary events';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['erasmus_30_year_anniversary_events'] = $view;

  return $export;
}
