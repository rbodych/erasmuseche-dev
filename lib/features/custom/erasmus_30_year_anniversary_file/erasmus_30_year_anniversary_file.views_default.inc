<?php
/**
 * @file
 * erasmus_30_year_anniversary_file.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function erasmus_30_year_anniversary_file_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'erasmus_30_year_anniversary_files';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Erasmus+ 30 year anniversary: Files';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Erasmus+ 30 year anniversary: Files';
  $handler->display->display_options['css_class'] = 'content-stripe blue-bg clearfix container';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_e30ya_file']['id'] = 'field_e30ya_file';
  $handler->display->display_options['fields']['field_e30ya_file']['table'] = 'field_data_field_e30ya_file';
  $handler->display->display_options['fields']['field_e30ya_file']['field'] = 'field_e30ya_file';
  $handler->display->display_options['fields']['field_e30ya_file']['label'] = '';
  $handler->display->display_options['fields']['field_e30ya_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_e30ya_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_e30ya_file']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'erasmus_30_year_anniversary_file' => 'erasmus_30_year_anniversary_file',
  );
  /* Filter criterion: Content: File tag (field_e30ya_file_tag) */
  $handler->display->display_options['filters']['field_e30ya_file_tag_tid']['id'] = 'field_e30ya_file_tag_tid';
  $handler->display->display_options['filters']['field_e30ya_file_tag_tid']['table'] = 'field_data_field_e30ya_file_tag';
  $handler->display->display_options['filters']['field_e30ya_file_tag_tid']['field'] = 'field_e30ya_file_tag_tid';
  $handler->display->display_options['filters']['field_e30ya_file_tag_tid']['value'] = array(
    256 => '256',
  );
  $handler->display->display_options['filters']['field_e30ya_file_tag_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_e30ya_file_tag_tid']['vocabulary'] = 'erasmus_30_year_anniversary_file_tags';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'en' => 'en',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_e30ya_files_toolkit');
  $handler->display->display_options['block_caching'] = '8';
  $export['erasmus_30_year_anniversary_files'] = $view;

  return $export;
}
