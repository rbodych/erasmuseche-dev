<?php
/**
 * @file
 * erasmus_30_year_anniversary_hero.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function erasmus_30_year_anniversary_hero_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'erasmus_30_year_anniversary_heroes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Erasmus+ 30 year anniversary: Heroes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Discover Erasmus+';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = 'hero-list';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Entity translation: Body: translated */
  $handler->display->display_options['fields']['body_et']['id'] = 'body_et';
  $handler->display->display_options['fields']['body_et']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_et']['field'] = 'body_et';
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_30ya_hero_video']['id'] = 'field_30ya_hero_video';
  $handler->display->display_options['fields']['field_30ya_hero_video']['table'] = 'field_data_field_30ya_hero_video';
  $handler->display->display_options['fields']['field_30ya_hero_video']['field'] = 'field_30ya_hero_video';
  $handler->display->display_options['fields']['field_30ya_hero_video']['label'] = '';
  $handler->display->display_options['fields']['field_30ya_hero_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_30ya_hero_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_30ya_hero_video']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Entity translation: SRT: translated */
  $handler->display->display_options['fields']['field_30ya_hero_video_srt_et']['id'] = 'field_30ya_hero_video_srt_et';
  $handler->display->display_options['fields']['field_30ya_hero_video_srt_et']['table'] = 'field_data_field_30ya_hero_video_srt';
  $handler->display->display_options['fields']['field_30ya_hero_video_srt_et']['field'] = 'field_30ya_hero_video_srt_et';
  /* Field: Entity translation: Banner: translated */
  $handler->display->display_options['fields']['field_30ya_hero_banner_et']['id'] = 'field_30ya_hero_banner_et';
  $handler->display->display_options['fields']['field_30ya_hero_banner_et']['table'] = 'field_data_field_30ya_hero_banner';
  $handler->display->display_options['fields']['field_30ya_hero_banner_et']['field'] = 'field_30ya_hero_banner_et';
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
    'erasmus_30_year_anniversary_hero' => 'erasmus_30_year_anniversary_hero',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_30year_anniversary_discover_erasmus_heroes');
  $handler->display->display_options['path'] = 'discover-erasmusplus';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Discover Erasmus+';
  $handler->display->display_options['menu']['name'] = 'menu-erasmus-30';
  $export['erasmus_30_year_anniversary_heroes'] = $view;

  return $export;
}
