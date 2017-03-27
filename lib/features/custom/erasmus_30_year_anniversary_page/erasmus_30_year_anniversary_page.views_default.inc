<?php
/**
 * @file
 * erasmus_30_year_anniversary_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function erasmus_30_year_anniversary_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'monthly_themes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Monthly Themes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Monthly Themes';
  $handler->display->display_options['css_class'] = 'monthly-themes';
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Field: Media */
  $handler->display->display_options['fields']['field_30ya_contentrow_media_1']['id'] = 'field_30ya_contentrow_media_1';
  $handler->display->display_options['fields']['field_30ya_contentrow_media_1']['table'] = 'field_data_field_30ya_contentrow_media';
  $handler->display->display_options['fields']['field_30ya_contentrow_media_1']['field'] = 'field_30ya_contentrow_media';
  $handler->display->display_options['fields']['field_30ya_contentrow_media_1']['label'] = '';
  $handler->display->display_options['fields']['field_30ya_contentrow_media_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_30ya_contentrow_media_1']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_30ya_contentrow_media_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_30ya_contentrow_media_1']['alter']['preserve_tags'] = '<img>  <h2> <ul> <li>';
  $handler->display->display_options['fields']['field_30ya_contentrow_media_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_30ya_contentrow_media_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_30ya_contentrow_media_1']['settings'] = array(
    'file_view_mode' => 'preview',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
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
    'erasmus_30_year_anniversary_page' => 'erasmus_30_year_anniversary_page',
  );
  /* Filter criterion: Content: In the Spotlight (field_30ya_in_the_spotlight) */
  $handler->display->display_options['filters']['field_30ya_in_the_spotlight_value']['id'] = 'field_30ya_in_the_spotlight_value';
  $handler->display->display_options['filters']['field_30ya_in_the_spotlight_value']['table'] = 'field_data_field_30ya_in_the_spotlight';
  $handler->display->display_options['filters']['field_30ya_in_the_spotlight_value']['field'] = 'field_30ya_in_the_spotlight_value';
  $handler->display->display_options['filters']['field_30ya_in_the_spotlight_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['monthly_themes'] = $view;

  return $export;
}
