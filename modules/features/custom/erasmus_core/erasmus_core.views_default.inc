<?php
/**
 * @file
 * erasmus_core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function erasmus_core_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'about';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'about';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_tab_plugin_style';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['style_options']['tab_field'] = 'title';
  $handler->display->display_options['style_options']['tab_type'] = 'pills';
  $handler->display->display_options['style_options']['justified'] = 0;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
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
    'about' => 'about',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'about';
  $export['about'] = $view;

  $view = new view();
  $view->name = 'allcalls';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'View all Calls';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'List of all calls';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'viewresults';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'viewresults';
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
  /* Sort criterion: Content: Calls type (field_calls_type) */
  $handler->display->display_options['sorts']['field_calls_type_value']['id'] = 'field_calls_type_value';
  $handler->display->display_options['sorts']['field_calls_type_value']['table'] = 'field_data_field_calls_type';
  $handler->display->display_options['sorts']['field_calls_type_value']['field'] = 'field_calls_type_value';
  $handler->display->display_options['sorts']['field_calls_type_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_calls_type_value']['expose']['label'] = 'Calls type ';
  /* Sort criterion: Content: Status (field_calls_status) */
  $handler->display->display_options['sorts']['field_calls_status_value']['id'] = 'field_calls_status_value';
  $handler->display->display_options['sorts']['field_calls_status_value']['table'] = 'field_data_field_calls_status';
  $handler->display->display_options['sorts']['field_calls_status_value']['field'] = 'field_calls_status_value';
  $handler->display->display_options['sorts']['field_calls_status_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_calls_status_value']['expose']['label'] = 'Status';
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
    'calls' => 'calls',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'calls-for-proposals-tenders';
  $export['allcalls'] = $view;

  $view = new view();
  $view->name = 'button_view_all_calls_events_news_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Button : View all (Calls, Events, News)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'button_view_all' => 'button_view_all',
  );
  /* Filter criterion: Content: button_view (field_button_view) */
  $handler->display->display_options['filters']['field_button_view_value']['id'] = 'field_button_view_value';
  $handler->display->display_options['filters']['field_button_view_value']['table'] = 'field_data_field_button_view';
  $handler->display->display_options['filters']['field_button_view_value']['field'] = 'field_button_view_value';
  $handler->display->display_options['filters']['field_button_view_value']['value'] = array(
    'Calls' => 'Calls',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block Calls */
  $handler = $view->new_display('block', 'Block Calls', 'block');

  /* Display: Block Events */
  $handler = $view->new_display('block', 'Block Events', 'block_1');
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
    'button_view_all' => 'button_view_all',
  );
  /* Filter criterion: Content: button_view (field_button_view) */
  $handler->display->display_options['filters']['field_button_view_value']['id'] = 'field_button_view_value';
  $handler->display->display_options['filters']['field_button_view_value']['table'] = 'field_data_field_button_view';
  $handler->display->display_options['filters']['field_button_view_value']['field'] = 'field_button_view_value';
  $handler->display->display_options['filters']['field_button_view_value']['value'] = array(
    'Events' => 'Events',
  );
  $export['button_view_all_calls_events_news_'] = $view;

  $view = new view();
  $view->name = 'contact';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'contact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_tab_plugin_style';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['style_options']['tab_field'] = 'title';
  $handler->display->display_options['style_options']['tab_type'] = 'pills';
  $handler->display->display_options['style_options']['justified'] = 0;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
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
    'contact' => 'contact',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'contact';
  $export['contact'] = $view;

  $view = new view();
  $view->name = 'document_library';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Document Library';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All the files in the document library';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: All the library files */
  $handler = $view->new_display('block', 'All the library files', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';

  /* Display: Ind - Students - Studying Abroad */
  $handler = $view->new_display('block', 'Ind - Students - Studying Abroad', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    44 => '44',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Ind - Students - Erasmus Mundus Joint Master Degrees */
  $handler = $view->new_display('block', 'Ind - Students - Erasmus Mundus Joint Master Degrees', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    45 => '45',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Ind - Students - Erasmus+ Master Degree Loans */
  $handler = $view->new_display('block', 'Ind - Students - Erasmus+ Master Degree Loans', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    46 => '46',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Ind - Staff Teaching - Vocational education and training  */
  $handler = $view->new_display('block', 'Ind - Staff Teaching - Vocational education and training ', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    48 => '48',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Ind - Staff Teaching - School education */
  $handler = $view->new_display('block', 'Ind - Staff Teaching - School education', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    49 => '49',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Ind - Staff Teaching - Jean Monnet */
  $handler = $view->new_display('block', 'Ind - Staff Teaching - Jean Monnet', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    51 => '51',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Ind - Staff Teaching - Higher education */
  $handler = $view->new_display('block', 'Ind - Staff Teaching - Higher education', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    47 => '47',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Ind - Staff Teaching - Adult education  */
  $handler = $view->new_display('block', 'Ind - Staff Teaching - Adult education ', 'block_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    50 => '50',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Ind - Staff Training - Vocational education and training */
  $handler = $view->new_display('block', 'Ind - Staff Training - Vocational education and training', 'block_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    53 => '53',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Ind - Staff Training - School education */
  $handler = $view->new_display('block', 'Ind - Staff Training - School education', 'block_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    54 => '54',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Ind - Staff Training - Higher education */
  $handler = $view->new_display('block', 'Ind - Staff Training - Higher education', 'block_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    52 => '52',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Ind - Staff Training - Adult education  */
  $handler = $view->new_display('block', 'Ind - Staff Training - Adult education ', 'block_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    55 => '55',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Ind - Trainees - Higher education students  */
  $handler = $view->new_display('block', 'Ind - Trainees - Higher education students ', 'block_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    56 => '56',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Ind - Trainees - Vocational educational and training students */
  $handler = $view->new_display('block', 'Ind - Trainees - Vocational educational and training students', 'block_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    57 => '57',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Ind - YoungPeople - Youth exchanges */
  $handler = $view->new_display('block', 'Ind - YoungPeople - Youth exchanges', 'block_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    59 => '59',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Ind - YoungPeople - European Voluntary Service */
  $handler = $view->new_display('block', 'Ind - YoungPeople - European Voluntary Service', 'block_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    58 => '58',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Ind - Youth Workers - Youth workers */
  $handler = $view->new_display('block', 'Ind - Youth Workers - Youth workers', 'block_17');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    60 => '60',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - LMOI - Higher education students and staff  */
  $handler = $view->new_display('block', 'Org - LMOI - Higher education students and staff ', 'block_18');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    70 => '70',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - LMOI - Vocational education and training  */
  $handler = $view->new_display('block', 'Org - LMOI - Vocational education and training ', 'block_19');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    71 => '71',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - LMOI - School education staff  */
  $handler = $view->new_display('block', 'Org - LMOI - School education staff ', 'block_20');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    72 => '72',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - LMOI - Adult education staff  */
  $handler = $view->new_display('block', 'Org - LMOI - Adult education staff ', 'block_21');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    73 => '73',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - LMOI - Erasmus+ Master Loans */
  $handler = $view->new_display('block', 'Org - LMOI - Erasmus+ Master Loans', 'block_22');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    77 => '77',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - LMOI - Large-scale European Voluntary Service events */
  $handler = $view->new_display('block', 'Org - LMOI - Large-scale European Voluntary Service events', 'block_23');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    75 => '75',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - LMOI - Erasmus Mundus Joint Master Degrees */
  $handler = $view->new_display('block', 'Org - LMOI - Erasmus Mundus Joint Master Degrees', 'block_24');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    76 => '76',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - LMOI - Young people and youth workers  */
  $handler = $view->new_display('block', 'Org - LMOI - Young people and youth workers ', 'block_25');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    74 => '74',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - IAGP - Strategic Partnerships  */
  $handler = $view->new_display('block', 'Org - IAGP - Strategic Partnerships ', 'block_26');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    78 => '78',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - IAGP - Knowledge Alliances */
  $handler = $view->new_display('block', 'Org - IAGP - Knowledge Alliances', 'block_27');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    79 => '79',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - IAGP - Sector Skills Alliances */
  $handler = $view->new_display('block', 'Org - IAGP - Sector Skills Alliances', 'block_28');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    80 => '80',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - IAGP - Capacity building - Higher education */
  $handler = $view->new_display('block', 'Org - IAGP - Capacity building - Higher education', 'block_29');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    81 => '81',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - IAGP - Capacity building - Youth */
  $handler = $view->new_display('block', 'Org - IAGP - Capacity building - Youth', 'block_30');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    82 => '82',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - SPF - Structured Dialogue */
  $handler = $view->new_display('block', 'Org - SPF - Structured Dialogue', 'block_31');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    83 => '83',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - SPF - Actions managed by the Education */
  $handler = $view->new_display('block', 'Org - SPF - Actions managed by the Education', 'block_32');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    84 => '84',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - JM - Modules */
  $handler = $view->new_display('block', 'Org - JM - Modules', 'block_33');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    85 => '85',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - JM - Chairs */
  $handler = $view->new_display('block', 'Org - JM - Chairs', 'block_34');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    86 => '86',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - JM - Centres of Excellence */
  $handler = $view->new_display('block', 'Org - JM - Centres of Excellence', 'block_35');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    87 => '87',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - JM - Support to Institutions */
  $handler = $view->new_display('block', 'Org - JM - Support to Institutions', 'block_36');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    88 => '88',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - JM - Support to Associations */
  $handler = $view->new_display('block', 'Org - JM - Support to Associations', 'block_37');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    89 => '89',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - JM - Networks */
  $handler = $view->new_display('block', 'Org - JM - Networks', 'block_38');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    90 => '90',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - JM - Projects */
  $handler = $view->new_display('block', 'Org - JM - Projects', 'block_39');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    91 => '91',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - Sport - Collaborative Partnerships  */
  $handler = $view->new_display('block', 'Org - Sport - Collaborative Partnerships ', 'block_40');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    92 => '92',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - Sport - Not-for-profit European Sport Events */
  $handler = $view->new_display('block', 'Org - Sport - Not-for-profit European Sport Events', 'block_41');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    93 => '93',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Org - Sport - Small Collaborative Partnerships */
  $handler = $view->new_display('block', 'Org - Sport - Small Collaborative Partnerships', 'block_42');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Resources - Programme Guide */
  $handler = $view->new_display('block', 'Resources - Programme Guide', 'block_43');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Resources - Online Linguistic Support */
  $handler = $view->new_display('block', 'Resources - Online Linguistic Support', 'block_44');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Resources - Documents for Applicants */
  $handler = $view->new_display('block', 'Resources - Documents for Applicants', 'block_45');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    97 => '97',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Resources - Documents for Applicants - Erasmus Charter for */
  $handler = $view->new_display('block', 'Resources - Documents for Applicants - Erasmus Charter for', 'block_46');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    101 => '101',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Resources - Documents for Applicants - European Voluntary S */
  $handler = $view->new_display('block', 'Resources - Documents for Applicants - European Voluntary S', 'block_47');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    105 => '105',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Resources - Documents for Applicants - EVS Info Kit */
  $handler = $view->new_display('block', 'Resources - Documents for Applicants - EVS Info Kit', 'block_48');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    104 => '104',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Resources - Documents for Applicants - II Agreement */
  $handler = $view->new_display('block', 'Resources - Documents for Applicants - II Agreement', 'block_49');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    103 => '103',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Resources - Documents for Applicants - Learning Agreement */
  $handler = $view->new_display('block', 'Resources - Documents for Applicants - Learning Agreement', 'block_50');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['alter']['text'] = '[file:name] - [file:extension] - [node:title] - [field_library_file] - [field_library_file-fid] - [field_library_file-display] - [field_library_file-description]';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    100 => '100',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Resources - Documents for Applicants - Mobility Agreement */
  $handler = $view->new_display('block', 'Resources - Documents for Applicants - Mobility Agreement', 'block_51');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    102 => '102',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Resources - Documents for Applicants - Model Application Forms */
  $handler = $view->new_display('block', 'Resources - Documents for Applicants - Model Application Forms', 'block_52');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    99 => '99',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Resources - Documents for Applicants - Student Charter */
  $handler = $view->new_display('block', 'Resources - Documents for Applicants - Student Charter', 'block_53');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    106 => '106',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Resources - Platforms and networks */
  $handler = $view->new_display('block', 'Resources - Platforms and networks', 'block_54');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    98 => '98',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;

  /* Display: Resources - Contact */
  $handler = $view->new_display('block', 'Resources - Contact', 'block_55');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related files';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: library file */
  $handler->display->display_options['fields']['field_library_file']['id'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['table'] = 'field_data_field_library_file';
  $handler->display->display_options['fields']['field_library_file']['field'] = 'field_library_file';
  $handler->display->display_options['fields']['field_library_file']['label'] = '';
  $handler->display->display_options['fields']['field_library_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_library_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_library_file']['settings'] = array(
    'text' => '[file:name]',
  );
  $handler->display->display_options['fields']['field_library_file']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_library_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_library_file']['multi_type'] = 'ol';
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
    'document_library' => 'document_library',
  );
  /* Filter criterion: Content: Tags (field_document_library_terms) (translated) */
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['id'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['table'] = 'field_data_field_document_library_terms';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['field'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['value'] = array(
    68 => '68',
  );
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator_id'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['label'] = 'library_terms (field_document_library_terms) (translated)';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['operator'] = 'field_document_library_terms_tid_i18n_op';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['expose']['identifier'] = 'field_document_library_terms_tid_i18n';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['vocabulary'] = 'tags';
  $handler->display->display_options['filters']['field_document_library_terms_tid_i18n']['hierarchy'] = 1;
  $export['document_library'] = $view;

  $view = new view();
  $view->name = 'individuals';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'individuals';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_tab_plugin_style';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['style_options']['tab_field'] = 'title';
  $handler->display->display_options['style_options']['tab_type'] = 'pills';
  $handler->display->display_options['style_options']['justified'] = 0;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
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
    'opportunities_for_individuals' => 'opportunities_for_individuals',
  );
  /* Filter criterion: Content: individuals_level (field_individuals_level) */
  $handler->display->display_options['filters']['field_individuals_level_value']['id'] = 'field_individuals_level_value';
  $handler->display->display_options['filters']['field_individuals_level_value']['table'] = 'field_data_field_individuals_level';
  $handler->display->display_options['filters']['field_individuals_level_value']['field'] = 'field_individuals_level_value';
  $handler->display->display_options['filters']['field_individuals_level_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'individuals';
  $export['individuals'] = $view;

  $view = new view();
  $view->name = 'news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'news';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'List of all news';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'viewresults';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'viewresults';
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
  /* Sort criterion: Content: Date -  start date (field_events_date) */
  $handler->display->display_options['sorts']['field_events_date_value']['id'] = 'field_events_date_value';
  $handler->display->display_options['sorts']['field_events_date_value']['table'] = 'field_data_field_events_date';
  $handler->display->display_options['sorts']['field_events_date_value']['field'] = 'field_events_date_value';
  $handler->display->display_options['sorts']['field_events_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_events_date_value']['expose']['label'] = 'Date -  start date';
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'news';
  $export['news'] = $view;

  $view = new view();
  $view->name = 'resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'resources';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_tab_plugin_style';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['style_options']['tab_field'] = 'title';
  $handler->display->display_options['style_options']['tab_type'] = 'pills';
  $handler->display->display_options['style_options']['justified'] = 0;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
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
    'resources' => 'resources',
  );
  /* Filter criterion: Content: ressources level (field_ressources_level) */
  $handler->display->display_options['filters']['field_ressources_level_value']['id'] = 'field_ressources_level_value';
  $handler->display->display_options['filters']['field_ressources_level_value']['table'] = 'field_data_field_ressources_level';
  $handler->display->display_options['filters']['field_ressources_level_value']['field'] = 'field_ressources_level_value';
  $handler->display->display_options['filters']['field_ressources_level_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'resources';
  $export['resources'] = $view;

  $view = new view();
  $view->name = 'test';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Organisations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_tab_plugin_style';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['style_options']['tab_field'] = 'title';
  $handler->display->display_options['style_options']['tab_type'] = 'pills';
  $handler->display->display_options['style_options']['justified'] = 0;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
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
    'opportunities_for_organisations' => 'opportunities_for_organisations',
  );
  /* Filter criterion: Content: organisations_level (field_organisations_level) */
  $handler->display->display_options['filters']['field_organisations_level_value']['id'] = 'field_organisations_level_value';
  $handler->display->display_options['filters']['field_organisations_level_value']['table'] = 'field_data_field_organisations_level';
  $handler->display->display_options['filters']['field_organisations_level_value']['field'] = 'field_organisations_level_value';
  $handler->display->display_options['filters']['field_organisations_level_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'organisations';
  $export['test'] = $view;

  $view = new view();
  $view->name = 'updates';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Updates';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'type' => 'type',
    'created' => 'created',
  );
  $handler->display->display_options['row_options']['separator'] = '|';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h1>[title]</h1>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_news_abstract']['id'] = 'field_news_abstract';
  $handler->display->display_options['fields']['field_news_abstract']['table'] = 'field_data_field_news_abstract';
  $handler->display->display_options['fields']['field_news_abstract']['field'] = 'field_news_abstract';
  $handler->display->display_options['fields']['field_news_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_news_abstract']['alter']['max_length'] = '375';
  $handler->display->display_options['fields']['field_news_abstract']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_news_abstract']['element_label_colon'] = FALSE;
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_calls_abstract']['id'] = 'field_calls_abstract';
  $handler->display->display_options['fields']['field_calls_abstract']['table'] = 'field_data_field_calls_abstract';
  $handler->display->display_options['fields']['field_calls_abstract']['field'] = 'field_calls_abstract';
  $handler->display->display_options['fields']['field_calls_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_calls_abstract']['alter']['max_length'] = '375';
  $handler->display->display_options['fields']['field_calls_abstract']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_calls_abstract']['element_label_colon'] = FALSE;
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_events_abstract']['id'] = 'field_events_abstract';
  $handler->display->display_options['fields']['field_events_abstract']['table'] = 'field_data_field_events_abstract';
  $handler->display->display_options['fields']['field_events_abstract']['field'] = 'field_events_abstract';
  $handler->display->display_options['fields']['field_events_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_events_abstract']['alter']['max_length'] = '375';
  $handler->display->display_options['fields']['field_events_abstract']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_events_abstract']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
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
    'calls' => 'calls',
    'events' => 'events',
    'news' => 'news',
  );

  /* Display: Home - L - Text */
  $handler = $view->new_display('block', 'Home - L - Text', 'block');
  $export['updates'] = $view;

  $view = new view();
  $view->name = 'updates_images';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Updates images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: images */
  $handler->display->display_options['fields']['field_news_images']['id'] = 'field_news_images';
  $handler->display->display_options['fields']['field_news_images']['table'] = 'field_data_field_news_images';
  $handler->display->display_options['fields']['field_news_images']['field'] = 'field_news_images';
  $handler->display->display_options['fields']['field_news_images']['label'] = '';
  $handler->display->display_options['fields']['field_news_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_images']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: images */
  $handler->display->display_options['fields']['field_calls_images']['id'] = 'field_calls_images';
  $handler->display->display_options['fields']['field_calls_images']['table'] = 'field_data_field_calls_images';
  $handler->display->display_options['fields']['field_calls_images']['field'] = 'field_calls_images';
  $handler->display->display_options['fields']['field_calls_images']['label'] = '';
  $handler->display->display_options['fields']['field_calls_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calls_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_calls_images']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_events_images']['id'] = 'field_events_images';
  $handler->display->display_options['fields']['field_events_images']['table'] = 'field_data_field_events_images';
  $handler->display->display_options['fields']['field_events_images']['field'] = 'field_events_images';
  $handler->display->display_options['fields']['field_events_images']['label'] = '';
  $handler->display->display_options['fields']['field_events_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_events_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_events_images']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
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
    'calls' => 'calls',
    'events' => 'events',
    'news' => 'news',
  );

  /* Display: Home - L - Image */
  $handler = $view->new_display('block', 'Home - L - Image', 'block');
  $export['updates_images'] = $view;

  $view = new view();
  $view->name = 'updates_images_right';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Updates images right';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: images */
  $handler->display->display_options['fields']['field_news_images']['id'] = 'field_news_images';
  $handler->display->display_options['fields']['field_news_images']['table'] = 'field_data_field_news_images';
  $handler->display->display_options['fields']['field_news_images']['field'] = 'field_news_images';
  $handler->display->display_options['fields']['field_news_images']['label'] = '';
  $handler->display->display_options['fields']['field_news_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_images']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: images */
  $handler->display->display_options['fields']['field_calls_images']['id'] = 'field_calls_images';
  $handler->display->display_options['fields']['field_calls_images']['table'] = 'field_data_field_calls_images';
  $handler->display->display_options['fields']['field_calls_images']['field'] = 'field_calls_images';
  $handler->display->display_options['fields']['field_calls_images']['label'] = '';
  $handler->display->display_options['fields']['field_calls_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calls_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_calls_images']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_events_images']['id'] = 'field_events_images';
  $handler->display->display_options['fields']['field_events_images']['table'] = 'field_data_field_events_images';
  $handler->display->display_options['fields']['field_events_images']['field'] = 'field_events_images';
  $handler->display->display_options['fields']['field_events_images']['label'] = '';
  $handler->display->display_options['fields']['field_events_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_events_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_events_images']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
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
    'calls' => 'calls',
    'events' => 'events',
    'news' => 'news',
  );

  /* Display: Home - R - Image */
  $handler = $view->new_display('block', 'Home - R - Image', 'block');
  $export['updates_images_right'] = $view;

  $view = new view();
  $view->name = 'updates_right';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Updates right';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'type' => 'type',
    'created' => 'created',
  );
  $handler->display->display_options['row_options']['separator'] = '|';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h1>[title]</h1>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_news_abstract']['id'] = 'field_news_abstract';
  $handler->display->display_options['fields']['field_news_abstract']['table'] = 'field_data_field_news_abstract';
  $handler->display->display_options['fields']['field_news_abstract']['field'] = 'field_news_abstract';
  $handler->display->display_options['fields']['field_news_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_news_abstract']['alter']['max_length'] = '375';
  $handler->display->display_options['fields']['field_news_abstract']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_news_abstract']['element_label_colon'] = FALSE;
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_calls_abstract']['id'] = 'field_calls_abstract';
  $handler->display->display_options['fields']['field_calls_abstract']['table'] = 'field_data_field_calls_abstract';
  $handler->display->display_options['fields']['field_calls_abstract']['field'] = 'field_calls_abstract';
  $handler->display->display_options['fields']['field_calls_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_calls_abstract']['alter']['max_length'] = '375';
  $handler->display->display_options['fields']['field_calls_abstract']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_calls_abstract']['element_label_colon'] = FALSE;
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_events_abstract']['id'] = 'field_events_abstract';
  $handler->display->display_options['fields']['field_events_abstract']['table'] = 'field_data_field_events_abstract';
  $handler->display->display_options['fields']['field_events_abstract']['field'] = 'field_events_abstract';
  $handler->display->display_options['fields']['field_events_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_events_abstract']['alter']['max_length'] = '375';
  $handler->display->display_options['fields']['field_events_abstract']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_events_abstract']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
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
    'calls' => 'calls',
    'events' => 'events',
    'news' => 'news',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Home - R - Text */
  $handler = $view->new_display('block', 'Home - R - Text', 'block');
  $export['updates_right'] = $view;

  $view = new view();
  $view->name = 'valor_projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Valor Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'valor_project' => 'valor_project',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['valor_projects'] = $view;

  $view = new view();
  $view->name = 'view_all_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'View all events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'List of all events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'viewresults';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'viewresults';
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
  /* Sort criterion: Content: Date -  start date (field_events_date) */
  $handler->display->display_options['sorts']['field_events_date_value']['id'] = 'field_events_date_value';
  $handler->display->display_options['sorts']['field_events_date_value']['table'] = 'field_data_field_events_date';
  $handler->display->display_options['sorts']['field_events_date_value']['field'] = 'field_events_date_value';
  $handler->display->display_options['sorts']['field_events_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_events_date_value']['expose']['label'] = 'Date -  start date';
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
    'events' => 'events',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'events';
  $export['view_all_events'] = $view;

  return $export;
}
