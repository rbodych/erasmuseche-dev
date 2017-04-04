<?php
/**
 * @file
 * eche_core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eche_core_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'eche_homepage_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ECHE Homepage blocks';
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
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'eche' => 'eche',
  );
  /* Filter criterion: Content: Machine name (field_machine_name) */
  $handler->display->display_options['filters']['field_machine_name_value']['id'] = 'field_machine_name_value';
  $handler->display->display_options['filters']['field_machine_name_value']['table'] = 'field_data_field_machine_name';
  $handler->display->display_options['filters']['field_machine_name_value']['field'] = 'field_machine_name_value';
  $handler->display->display_options['filters']['field_machine_name_value']['value'] = 'homepage_intro';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'intro';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'eche' => 'eche',
  );
  /* Filter criterion: Content: Machine name (field_machine_name) */
  $handler->display->display_options['filters']['field_machine_name_value']['id'] = 'field_machine_name_value';
  $handler->display->display_options['filters']['field_machine_name_value']['table'] = 'field_data_field_machine_name';
  $handler->display->display_options['filters']['field_machine_name_value']['field'] = 'field_machine_name_value';
  $handler->display->display_options['filters']['field_machine_name_value']['value'] = 'homepage_intro_content';
  $handler->display->display_options['block_description'] = 'intro content';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'eche' => 'eche',
  );
  /* Filter criterion: Content: Machine name (field_machine_name) */
  $handler->display->display_options['filters']['field_machine_name_value']['id'] = 'field_machine_name_value';
  $handler->display->display_options['filters']['field_machine_name_value']['table'] = 'field_data_field_machine_name';
  $handler->display->display_options['filters']['field_machine_name_value']['field'] = 'field_machine_name_value';
  $handler->display->display_options['filters']['field_machine_name_value']['value'] = 'homepage_about';
  $handler->display->display_options['block_description'] = 'about';
  $export['eche_homepage_blocks'] = $view;

  return $export;
}
