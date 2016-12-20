<?php

/**
 * @file
 * erasmus_national_agencies_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function erasmus_national_agencies_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'day_1_na_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Day 1 - NA-Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Day 1 - Monday 12 December 2016';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'term_node_tid',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
    1 => array(
      'field' => 'field_hall_room_na_events',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'term_node_tid' => 'term_node_tid',
    'field_dates_na_events' => 'field_dates_na_events',
    'title' => 'title',
    'field_hall_room_na_events' => 'field_hall_room_na_events',
    'body' => 'body',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'term_node_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_na_events' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hall_room_na_events' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'thematic_na_events' => 'thematic_na_events',
    'classification' => 0,
    'ec_world_countries' => 0,
    'headers_programme_guide' => 0,
    'sections_programme_guide' => 0,
    'tags' => 0,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_dates_na_events']['id'] = 'field_dates_na_events';
  $handler->display->display_options['fields']['field_dates_na_events']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['fields']['field_dates_na_events']['field'] = 'field_dates_na_events';
  $handler->display->display_options['fields']['field_dates_na_events']['label'] = 'Time';
  $handler->display->display_options['fields']['field_dates_na_events']['settings'] = array(
    'format_type' => 'time_na_events',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Hall/Room  */
  $handler->display->display_options['fields']['field_hall_room_na_events']['id'] = 'field_hall_room_na_events';
  $handler->display->display_options['fields']['field_hall_room_na_events']['table'] = 'field_data_field_hall_room_na_events';
  $handler->display->display_options['fields']['field_hall_room_na_events']['field'] = 'field_hall_room_na_events';
  $handler->display->display_options['fields']['field_hall_room_na_events']['label'] = 'Hall/Room';
  $handler->display->display_options['fields']['field_hall_room_na_events']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hall_room_na_events']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Summary';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]<br>
[body]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['sorts']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['sorts']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['sorts']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-12';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';

  /* Display: Day 1 - Higher Education (international dimension) */
  $handler = $view->new_display('block', 'Day 1 - Higher Education (international dimension)', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-12';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '255',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 1 - Higher Education (international dimension)';

  /* Display: Day 1 - Higher Education (intra-EU) */
  $handler = $view->new_display('block', 'Day 1 - Higher Education (intra-EU)', 'block_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-12';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '256',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 1 - Higher Education (intra-EU)';

  /* Display: Day 1 - School Education */
  $handler = $view->new_display('block', 'Day 1 - School Education', 'block_3');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-12';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '257',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 1 - School Education';

  /* Display: Day 1 - Vocational Education and Training */
  $handler = $view->new_display('block', 'Day 1 - Vocational Education and Training', 'block_4');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-12';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '259',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 1 - Vocational Education and Training';

  /* Display: Day 1 - Adult Education */
  $handler = $view->new_display('block', 'Day 1 - Adult Education', 'block_5');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-12';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '258',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 1 - Adult Education';

  /* Display: Day 1 - Youth */
  $handler = $view->new_display('block', 'Day 1 - Youth', 'block_6');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-12';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '260',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 1 - Youth';

  /* Display: Day 1 - Directors session */
  $handler = $view->new_display('block', 'Day 1 - Directors session', 'block_7');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-12';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '261',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 1 - Directors session';
  $export['day_1_na_events'] = $view;

  $view = new view();
  $view->name = 'day_2_na_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Day 2 - NA-Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Day 2 - Tuesday 13 December 2016';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'term_node_tid',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
    1 => array(
      'field' => 'field_hall_room_na_events',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'term_node_tid' => 'term_node_tid',
    'field_dates_na_events' => 'field_dates_na_events',
    'title' => 'title',
    'field_hall_room_na_events' => 'field_hall_room_na_events',
    'body' => 'body',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'term_node_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_na_events' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hall_room_na_events' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'thematic_na_events' => 'thematic_na_events',
    'classification' => 0,
    'ec_world_countries' => 0,
    'headers_programme_guide' => 0,
    'sections_programme_guide' => 0,
    'tags' => 0,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_dates_na_events']['id'] = 'field_dates_na_events';
  $handler->display->display_options['fields']['field_dates_na_events']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['fields']['field_dates_na_events']['field'] = 'field_dates_na_events';
  $handler->display->display_options['fields']['field_dates_na_events']['label'] = 'Time';
  $handler->display->display_options['fields']['field_dates_na_events']['settings'] = array(
    'format_type' => 'time_na_events',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Hall/Room  */
  $handler->display->display_options['fields']['field_hall_room_na_events']['id'] = 'field_hall_room_na_events';
  $handler->display->display_options['fields']['field_hall_room_na_events']['table'] = 'field_data_field_hall_room_na_events';
  $handler->display->display_options['fields']['field_hall_room_na_events']['field'] = 'field_hall_room_na_events';
  $handler->display->display_options['fields']['field_hall_room_na_events']['label'] = 'Hall/Room';
  $handler->display->display_options['fields']['field_hall_room_na_events']['exclude'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Summary';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]<br>
[body]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['sorts']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['sorts']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['sorts']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-12';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';

  /* Display: Day 2 - Higher Education (international dimension) */
  $handler = $view->new_display('block', 'Day 2 - Higher Education (international dimension)', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-13';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '255',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 2 - Higher Education (international dimension)';

  /* Display: Day 2 - Higher Education (intra-EU) */
  $handler = $view->new_display('block', 'Day 2 - Higher Education (intra-EU)', 'block_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-13';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '256',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 2 - Higher Education (intra-EU)';

  /* Display: Day 2 - School Education */
  $handler = $view->new_display('block', 'Day 2 - School Education', 'block_3');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-13';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '257',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 2 - School Education';

  /* Display: Day 2 - Vocational Education and Training */
  $handler = $view->new_display('block', 'Day 2 - Vocational Education and Training', 'block_4');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-13';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '259',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 2 - Vocational Education and Training';

  /* Display: Day 2 - Adult Education */
  $handler = $view->new_display('block', 'Day 2 - Adult Education', 'block_5');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-13';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '258',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 2 - Adult Education';

  /* Display: Day 2 - Youth */
  $handler = $view->new_display('block', 'Day 2 - Youth', 'block_6');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-13';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '260',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 2 - Youth';

  /* Display: Day 2 - Directors session */
  $handler = $view->new_display('block', 'Day 2 - Directors session', 'block_7');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-13';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '261',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 2 - Directors session';
  $export['day_2_na_events'] = $view;

  $view = new view();
  $view->name = 'day_3_na_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Day 3 - NA-Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Day 3 - Wednesday 14 December 2016';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'term_node_tid',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
    1 => array(
      'field' => 'field_hall_room_na_events',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'term_node_tid' => 'term_node_tid',
    'field_dates_na_events' => 'field_dates_na_events',
    'title' => 'title',
    'field_hall_room_na_events' => 'field_hall_room_na_events',
    'body' => 'body',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'term_node_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_na_events' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hall_room_na_events' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'thematic_na_events' => 'thematic_na_events',
    'classification' => 0,
    'ec_world_countries' => 0,
    'headers_programme_guide' => 0,
    'sections_programme_guide' => 0,
    'tags' => 0,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_dates_na_events']['id'] = 'field_dates_na_events';
  $handler->display->display_options['fields']['field_dates_na_events']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['fields']['field_dates_na_events']['field'] = 'field_dates_na_events';
  $handler->display->display_options['fields']['field_dates_na_events']['label'] = 'Time';
  $handler->display->display_options['fields']['field_dates_na_events']['settings'] = array(
    'format_type' => 'time_na_events',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Hall/Room  */
  $handler->display->display_options['fields']['field_hall_room_na_events']['id'] = 'field_hall_room_na_events';
  $handler->display->display_options['fields']['field_hall_room_na_events']['table'] = 'field_data_field_hall_room_na_events';
  $handler->display->display_options['fields']['field_hall_room_na_events']['field'] = 'field_hall_room_na_events';
  $handler->display->display_options['fields']['field_hall_room_na_events']['label'] = 'Hall/Room';
  $handler->display->display_options['fields']['field_hall_room_na_events']['exclude'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Summary';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]<br>
[body]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['sorts']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['sorts']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['sorts']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-12';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';

  /* Display: Day 3 - Higher Education (international dimension) */
  $handler = $view->new_display('block', 'Day 3 - Higher Education (international dimension)', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-14';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '255',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 3 - Higher Education (international dimension)';

  /* Display: Day 3 - Higher Education (intra-EU) */
  $handler = $view->new_display('block', 'Day 3 - Higher Education (intra-EU)', 'block_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-14';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '256',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 3 - Higher Education (intra-EU)';

  /* Display: Day 3 - School Education */
  $handler = $view->new_display('block', 'Day 3 - School Education', 'block_3');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-14';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '257',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 3 - School Education';

  /* Display: Day 3 - Vocational Education and Training */
  $handler = $view->new_display('block', 'Day 3 - Vocational Education and Training', 'block_4');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-14';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '259',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 3 - Vocational Education and Training';

  /* Display: Day 3 - Adult Education */
  $handler = $view->new_display('block', 'Day 3 - Adult Education', 'block_5');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-14';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '258',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 3 - Adult Education';

  /* Display: Day 3 - Youth */
  $handler = $view->new_display('block', 'Day 3 - Youth', 'block_6');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-14';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '260',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 3 - Youth';

  /* Display: Day 3 - Directors session */
  $handler = $view->new_display('block', 'Day 3 - Directors session', 'block_7');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-14';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '261',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 3 - Directors session';
  $export['day_3_na_events'] = $view;

  $view = new view();
  $view->name = 'day_4_na_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Day 4 - NA-Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Day 4 - Thursday 15 December 2016';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'term_node_tid',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
    1 => array(
      'field' => 'field_hall_room_na_events',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'term_node_tid' => 'term_node_tid',
    'field_dates_na_events' => 'field_dates_na_events',
    'title' => 'title',
    'field_hall_room_na_events' => 'field_hall_room_na_events',
    'body' => 'body',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'term_node_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_na_events' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hall_room_na_events' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'thematic_na_events' => 'thematic_na_events',
    'classification' => 0,
    'ec_world_countries' => 0,
    'headers_programme_guide' => 0,
    'sections_programme_guide' => 0,
    'tags' => 0,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_dates_na_events']['id'] = 'field_dates_na_events';
  $handler->display->display_options['fields']['field_dates_na_events']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['fields']['field_dates_na_events']['field'] = 'field_dates_na_events';
  $handler->display->display_options['fields']['field_dates_na_events']['label'] = 'Time';
  $handler->display->display_options['fields']['field_dates_na_events']['settings'] = array(
    'format_type' => 'time_na_events',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Hall/Room  */
  $handler->display->display_options['fields']['field_hall_room_na_events']['id'] = 'field_hall_room_na_events';
  $handler->display->display_options['fields']['field_hall_room_na_events']['table'] = 'field_data_field_hall_room_na_events';
  $handler->display->display_options['fields']['field_hall_room_na_events']['field'] = 'field_hall_room_na_events';
  $handler->display->display_options['fields']['field_hall_room_na_events']['label'] = 'Hall/Room';
  $handler->display->display_options['fields']['field_hall_room_na_events']['exclude'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Summary';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]<br>
[body]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['sorts']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['sorts']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['sorts']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-12';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';

  /* Display: Day 4 - Higher Education (international dimension) */
  $handler = $view->new_display('block', 'Day 4 - Higher Education (international dimension)', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-15';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '255',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 4 - Higher Education (international dimension)';

  /* Display: Day 4 - Higher Education (intra-EU) */
  $handler = $view->new_display('block', 'Day 4 - Higher Education (intra-EU)', 'block_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-15';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '256',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 4 - Higher Education (intra-EU)';

  /* Display: Day 4 - School Education */
  $handler = $view->new_display('block', 'Day 4 - School Education', 'block_3');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-15';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '257',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 4 - School Education';

  /* Display: Day 4 - Vocational Education and Training */
  $handler = $view->new_display('block', 'Day 4 - Vocational Education and Training', 'block_4');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-15';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '259',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 4 - Vocational Education and Training';

  /* Display: Day 4 - Adult Education */
  $handler = $view->new_display('block', 'Day 4 - Adult Education', 'block_5');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-15';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '258',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 4 - Adult Education';

  /* Display: Day 4 - Youth */
  $handler = $view->new_display('block', 'Day 4 - Youth', 'block_6');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-15';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '260',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 4 - Youth';

  /* Display: Day 4 - Directors session */
  $handler = $view->new_display('block', 'Day 4 - Directors session', 'block_7');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-15';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '261',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 4 - Directors session';
  $export['day_4_na_events'] = $view;

  $view = new view();
  $view->name = 'day_5_na_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Day 5 - NA-Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Day 5 - Friday 16 December 2016';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'term_node_tid',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
    1 => array(
      'field' => 'field_hall_room_na_events',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'term_node_tid' => 'term_node_tid',
    'field_dates_na_events' => 'field_dates_na_events',
    'title' => 'title',
    'field_hall_room_na_events' => 'field_hall_room_na_events',
    'body' => 'body',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'term_node_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_na_events' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hall_room_na_events' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'thematic_na_events' => 'thematic_na_events',
    'classification' => 0,
    'ec_world_countries' => 0,
    'headers_programme_guide' => 0,
    'sections_programme_guide' => 0,
    'tags' => 0,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_dates_na_events']['id'] = 'field_dates_na_events';
  $handler->display->display_options['fields']['field_dates_na_events']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['fields']['field_dates_na_events']['field'] = 'field_dates_na_events';
  $handler->display->display_options['fields']['field_dates_na_events']['label'] = 'Time';
  $handler->display->display_options['fields']['field_dates_na_events']['settings'] = array(
    'format_type' => 'time_na_events',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Hall/Room  */
  $handler->display->display_options['fields']['field_hall_room_na_events']['id'] = 'field_hall_room_na_events';
  $handler->display->display_options['fields']['field_hall_room_na_events']['table'] = 'field_data_field_hall_room_na_events';
  $handler->display->display_options['fields']['field_hall_room_na_events']['field'] = 'field_hall_room_na_events';
  $handler->display->display_options['fields']['field_hall_room_na_events']['label'] = 'Hall/Room';
  $handler->display->display_options['fields']['field_hall_room_na_events']['exclude'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Summary';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]<br>
[body]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['sorts']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['sorts']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['sorts']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-12';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';

  /* Display: Day 5 - Higher Education (international dimension) */
  $handler = $view->new_display('block', 'Day 5 - Higher Education (international dimension)', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-16';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '255',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 5 - Higher Education (international dimension)';

  /* Display: Day 5 - Higher Education (intra-EU) */
  $handler = $view->new_display('block', 'Day 5 - Higher Education (intra-EU)', 'block_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-16';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '256',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 5 - Higher Education (intra-EU)';

  /* Display: Day 5 - School Education */
  $handler = $view->new_display('block', 'Day 5 - School Education', 'block_3');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-16';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '257',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 5 - School Education';

  /* Display: Day 5 - Vocational Education and Training */
  $handler = $view->new_display('block', 'Day 5 - Vocational Education and Training', 'block_4');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-16';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '259',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 5 - Vocational Education and Training';

  /* Display: Day 5 - Adult Education */
  $handler = $view->new_display('block', 'Day 5 - Adult Education', 'block_5');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-16';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '258',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 5 - Adult Education';

  /* Display: Day 5 - Youth */
  $handler = $view->new_display('block', 'Day 5 - Youth', 'block_6');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-16';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '260',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 5 - Youth';

  /* Display: Day 5 - Directors session */
  $handler = $view->new_display('block', 'Day 5 - Directors session', 'block_7');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'agenda_na_events' => 'agenda_na_events',
  );
  /* Filter criterion: Content: Date -  start date (field_dates_na_events) */
  $handler->display->display_options['filters']['field_dates_na_events_value']['id'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['table'] = 'field_data_field_dates_na_events';
  $handler->display->display_options['filters']['field_dates_na_events_value']['field'] = 'field_dates_na_events_value';
  $handler->display->display_options['filters']['field_dates_na_events_value']['value']['value'] = '2016-12-16';
  $handler->display->display_options['filters']['field_dates_na_events_value']['year_range'] = '-0:+0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '261',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'thematic_na_events';
  $handler->display->display_options['block_description'] = 'Day 5 - Directors session';
  $export['day_5_na_events'] = $view;

  $view = new view();
  $view->name = 'map_na_events_agenda_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Map NA-Events (Agenda)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Map NA-Events (Agenda)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_hall_room_na_events' => 'field_hall_room_na_events',
  );
  /* Field: Content: Address (Map) */
  $handler->display->display_options['fields']['field_address_na_events']['id'] = 'field_address_na_events';
  $handler->display->display_options['fields']['field_address_na_events']['table'] = 'field_data_field_address_na_events';
  $handler->display->display_options['fields']['field_address_na_events']['field'] = 'field_address_na_events';
  $handler->display->display_options['fields']['field_address_na_events']['label'] = '';
  $handler->display->display_options['fields']['field_address_na_events']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_na_events']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_address_na_events']['hide_empty'] = TRUE;
  /* Field: Content: Place name */
  $handler->display->display_options['fields']['field_place_name_na_events']['id'] = 'field_place_name_na_events';
  $handler->display->display_options['fields']['field_place_name_na_events']['table'] = 'field_data_field_place_name_na_events';
  $handler->display->display_options['fields']['field_place_name_na_events']['field'] = 'field_place_name_na_events';
  $handler->display->display_options['fields']['field_place_name_na_events']['label'] = '';
  $handler->display->display_options['fields']['field_place_name_na_events']['element_label_colon'] = FALSE;
  /* Field: Content: Hall/Room  */
  $handler->display->display_options['fields']['field_hall_room_na_events']['id'] = 'field_hall_room_na_events';
  $handler->display->display_options['fields']['field_hall_room_na_events']['table'] = 'field_data_field_hall_room_na_events';
  $handler->display->display_options['fields']['field_hall_room_na_events']['field'] = 'field_hall_room_na_events';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'agenda_na_events' => 'agenda_na_events',
  );
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
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
    'agenda_na_events' => 'agenda_na_events',
  );

  /* Display: Venue */
  $handler = $view->new_display('block', 'Venue', 'block');
  $handler->display->display_options['block_description'] = 'Venue';
  $export['map_na_events_agenda_'] = $view;

  $view = new view();
  $view->name = 'speaker_na_events_agenda_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Speaker NA-Events (Agenda)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Speaker NA-Events (Agenda)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_photo_speakers' => 'field_photo_speakers',
    'field_speaker_na_events' => 'field_speaker_na_events',
  );
  /* Relationship: Content: Photo (field_photo_speakers:fid) */
  $handler->display->display_options['relationships']['field_photo_speakers_fid']['id'] = 'field_photo_speakers_fid';
  $handler->display->display_options['relationships']['field_photo_speakers_fid']['table'] = 'field_data_field_photo_speakers';
  $handler->display->display_options['relationships']['field_photo_speakers_fid']['field'] = 'field_photo_speakers_fid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>Speaker(s)</h3>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo_speakers_1']['id'] = 'field_photo_speakers_1';
  $handler->display->display_options['fields']['field_photo_speakers_1']['table'] = 'field_data_field_photo_speakers';
  $handler->display->display_options['fields']['field_photo_speakers_1']['field'] = 'field_photo_speakers';
  $handler->display->display_options['fields']['field_photo_speakers_1']['label'] = '';
  $handler->display->display_options['fields']['field_photo_speakers_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo_speakers_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_speakers_1']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Speakers */
  $handler->display->display_options['fields']['field_speakers_na_events']['id'] = 'field_speakers_na_events';
  $handler->display->display_options['fields']['field_speakers_na_events']['table'] = 'field_data_field_speakers_na_events';
  $handler->display->display_options['fields']['field_speakers_na_events']['field'] = 'field_speakers_na_events';
  $handler->display->display_options['fields']['field_speakers_na_events']['label'] = '';
  $handler->display->display_options['fields']['field_speakers_na_events']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers_na_events']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_speakers_na_events']['delta_offset'] = '0';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'agenda_na_events' => 'agenda_na_events',
  );

  /* Display: Speaker NA-Events (Agenda) */
  $handler = $view->new_display('block', 'Speaker NA-Events (Agenda)', 'block');
  $export['speaker_na_events_agenda_'] = $view;

  return $export;
}
