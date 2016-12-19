<?php
/**
 * @file
 * erasmus_core.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function erasmus_core_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|calls|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'calls';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_calls_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'class-1',
        ),
      ),
    ),
    'field_calls_reference' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'class-1',
        ),
      ),
    ),
    'field_calls_deadline' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'class-1',
        ),
      ),
    ),
    'field_calls_documents' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'class-1',
        ),
      ),
    ),
    'field_calls_clarifications' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'class-1',
        ),
      ),
    ),
    'field_calls_status' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'class-1',
        ),
      ),
    ),
  );
  $export['node|calls|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|calls|viewresults';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'calls';
  $ds_fieldsetting->view_mode = 'viewresults';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'inline',
      'format' => 'ds_post_date_short',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_calls_abstract' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'class-searchcalls',
        ),
      ),
    ),
    'field_calls_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'class-searchcalls',
        ),
      ),
    ),
    'field_calls_reference' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_calls_deadline' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'class-searchcalls',
        ),
      ),
    ),
    'field_calls_status' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'class-searchcalls',
        ),
      ),
    ),
  );
  $export['node|calls|viewresults'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|events|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'events';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'valor' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'view_all_calls_buttons' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'class-1',
        ),
      ),
    ),
    'field_events_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'class-1',
        ),
      ),
    ),
    'field_events_venue' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'class-1',
        ),
      ),
    ),
    'field_events_report' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'class-1',
        ),
      ),
    ),
    'field_events_reference_documents' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'class-1',
        ),
      ),
    ),
    'field_events_presentations' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'class-1',
        ),
      ),
    ),
    'field_reading_materials' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'class-1',
        ),
      ),
    ),
    'field_events_photos' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|events|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|events|viewresults';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'events';
  $ds_fieldsetting->view_mode = 'viewresults';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'class-searchcalls',
        ),
      ),
    ),
    'field_events_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'class-searchcalls',
        ),
      ),
    ),
  );
  $export['node|events|viewresults'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Posted on:',
        ),
      ),
    ),
  );
  $export['node|news|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function erasmus_core_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'valor';
  $ds_field->label = 'Valor';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|valor_projects-block',
    'block_render' => '1',
  );
  $export['valor'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'valor_field';
  $ds_field->label = 'Valor Field';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['valor_field'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'view_all_calls';
  $ds_field->label = 'View all Calls button';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|b806b1a272fc2f91145cd69775c9e95f',
    'block_render' => '3',
  );
  $export['view_all_calls'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'view_all_calls_buttons';
  $ds_field->label = 'View all Events button';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|d603231cb1fc36b581747424a5d7e71f',
    'block_render' => '3',
  );
  $export['view_all_calls_buttons'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function erasmus_core_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|calls|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'calls';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_calls_type',
        1 => 'field_calls_deadline',
        2 => 'field_calls_status',
        3 => 'field_calls_reference',
        4 => 'field_calls_clarifications',
        5 => 'field_calls_documents',
      ),
      'right' => array(
        6 => 'field_calls_images',
        7 => 'field_calls_abstract',
        8 => 'body',
        9 => 'language',
      ),
    ),
    'fields' => array(
      'field_calls_type' => 'left',
      'field_calls_deadline' => 'left',
      'field_calls_status' => 'left',
      'field_calls_reference' => 'left',
      'field_calls_clarifications' => 'left',
      'field_calls_documents' => 'left',
      'field_calls_images' => 'right',
      'field_calls_abstract' => 'right',
      'body' => 'right',
      'language' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
      'left' => array(
        'class_left_call' => 'class_left_call',
      ),
      'right' => array(
        'class_right_call' => 'class_right_call',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|calls|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|calls|viewresults';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'calls';
  $ds_layout->view_mode = 'viewresults';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        1 => 'post_date',
        2 => 'field_calls_abstract',
      ),
      'right' => array(
        3 => 'field_calls_type',
        4 => 'field_calls_status',
        5 => 'field_calls_deadline',
        6 => 'field_calls_reference',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'post_date' => 'left',
      'field_calls_abstract' => 'left',
      'field_calls_type' => 'right',
      'field_calls_status' => 'right',
      'field_calls_deadline' => 'right',
      'field_calls_reference' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        'class_layout_search_call' => 'class_layout_search_call',
      ),
      'left' => array(
        'class_left_search_call' => 'class_left_search_call',
      ),
      'right' => array(
        'class_right_search_call' => 'class_right_search_call',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|calls|viewresults'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|events|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'events';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'language',
      ),
      'left' => array(
        1 => 'field_events_date',
        2 => 'field_events_venue',
        3 => 'field_events_presentations',
        4 => 'field_events_context',
        5 => 'field_events_summary',
      ),
      'right' => array(
        6 => 'field_events_images',
        7 => 'field_events_abstract',
        8 => 'body',
      ),
      'footer' => array(
        9 => 'field_events_find_out_more',
        10 => 'field_events_photos',
        11 => 'field_events_reference_documents',
        12 => 'field_events_report',
        13 => 'field_reading_materials',
      ),
    ),
    'fields' => array(
      'language' => 'header',
      'field_events_date' => 'left',
      'field_events_venue' => 'left',
      'field_events_presentations' => 'left',
      'field_events_context' => 'left',
      'field_events_summary' => 'left',
      'field_events_images' => 'right',
      'field_events_abstract' => 'right',
      'body' => 'right',
      'field_events_find_out_more' => 'footer',
      'field_events_photos' => 'footer',
      'field_events_reference_documents' => 'footer',
      'field_events_report' => 'footer',
      'field_reading_materials' => 'footer',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
      'left' => array(
        'class_left_call' => 'class_left_call',
      ),
      'right' => array(
        'class_right_call' => 'class_right_call',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|events|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|events|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'events';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'view_all_calls_buttons',
        5 => 'field_events_date',
        6 => 'field_events_venue',
        7 => 'field_events_presentations',
        8 => 'field_events_reference_documents',
        9 => 'field_reading_materials',
        10 => 'field_events_report',
      ),
      'left' => array(
        1 => 'field_events_summary',
        2 => 'body',
        3 => 'field_events_context',
        4 => 'field_events_find_out_more',
      ),
      'footer' => array(
        11 => 'field_events_photos',
        12 => 'valor',
      ),
    ),
    'fields' => array(
      'view_all_calls_buttons' => 'right',
      'field_events_summary' => 'left',
      'body' => 'left',
      'field_events_context' => 'left',
      'field_events_find_out_more' => 'left',
      'field_events_date' => 'right',
      'field_events_venue' => 'right',
      'field_events_presentations' => 'right',
      'field_events_reference_documents' => 'right',
      'field_reading_materials' => 'right',
      'field_events_report' => 'right',
      'field_events_photos' => 'footer',
      'valor' => 'footer',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
      'left' => array(
        'class_left_call' => 'class_left_call',
      ),
      'right' => array(
        'class_right_call' => 'class_right_call',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|events|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|events|viewresults';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'events';
  $ds_layout->view_mode = 'viewresults';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'right' => array(
        1 => 'field_events_date',
      ),
      'left' => array(
        2 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_events_date' => 'right',
      'body' => 'left',
    ),
    'limit' => array(
      'field_events_date' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'class_layout_search_call' => 'class_layout_search_call',
      ),
      'header' => array(
        'class_left_search_call' => 'class_left_search_call',
      ),
      'left' => array(
        'class_left_search_call' => 'class_left_search_call',
      ),
      'right' => array(
        'class_right_search_call' => 'class_right_search_call',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|events|viewresults'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'post_date',
        1 => 'body',
        2 => 'field_news_abstract',
      ),
    ),
    'fields' => array(
      'post_date' => 'header',
      'body' => 'header',
      'field_news_abstract' => 'header',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|news|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function erasmus_core_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'viewresults';
  $ds_view_mode->label = 'ViewResults';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['viewresults'] = $ds_view_mode;

  return $export;
}
