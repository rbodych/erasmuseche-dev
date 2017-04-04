<?php
/**
 * @file
 * eche_sa.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eche_sa_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'self_assessment_submissions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'webform_submissions';
  $view->human_name = 'Self assessment submissions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My submissions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    32 => '32',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'submitted' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'submission-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There is no submissions on the list.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Webform submissions: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Webform submissions: Sid */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sid']['separator'] = '';
  /* Field: Webform submissions: Self-assesment type */
  $handler->display->display_options['fields']['self_assesment_type']['id'] = 'self_assesment_type';
  $handler->display->display_options['fields']['self_assesment_type']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['self_assesment_type']['field'] = 'self_assesment_type';
  $handler->display->display_options['fields']['self_assesment_type']['label'] = '';
  $handler->display->display_options['fields']['self_assesment_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['self_assesment_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['self_assesment_type']['element_default_classes'] = FALSE;
  /* Field: User: Higher Education Institution */
  $handler->display->display_options['fields']['field_user_hei']['id'] = 'field_user_hei';
  $handler->display->display_options['fields']['field_user_hei']['table'] = 'field_data_field_user_hei';
  $handler->display->display_options['fields']['field_user_hei']['field'] = 'field_user_hei';
  $handler->display->display_options['fields']['field_user_hei']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_hei']['label'] = '';
  $handler->display->display_options['fields']['field_user_hei']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_hei']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_hei']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_hei']['settings'] = array(
    'link' => 0,
  );
  /* Field: Webform submissions: Completed */
  $handler->display->display_options['fields']['completed']['id'] = 'completed';
  $handler->display->display_options['fields']['completed']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['completed']['field'] = 'completed';
  $handler->display->display_options['fields']['completed']['label'] = '';
  $handler->display->display_options['fields']['completed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['completed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['completed']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['completed']['date_format'] = 'ec_date_format';
  $handler->display->display_options['fields']['completed']['second_date_format'] = 'ec_date_format';
  /* Field: Webform submissions: Delete link */
  $handler->display->display_options['fields']['delete_submission']['id'] = 'delete_submission';
  $handler->display->display_options['fields']['delete_submission']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['delete_submission']['field'] = 'delete_submission';
  $handler->display->display_options['fields']['delete_submission']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_submission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_submission']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_submission']['text'] = '';
  $handler->display->display_options['fields']['delete_submission']['access_check'] = 1;
  /* Field: Webform submissions: View results */
  $handler->display->display_options['fields']['view_report_link']['id'] = 'view_report_link';
  $handler->display->display_options['fields']['view_report_link']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['view_report_link']['field'] = 'view_report_link';
  $handler->display->display_options['fields']['view_report_link']['label'] = '';
  $handler->display->display_options['fields']['view_report_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_report_link']['alter']['path'] = '[view_report_link]';
  $handler->display->display_options['fields']['view_report_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_report_link']['element_default_classes'] = FALSE;
  /* Field: Webform submissions: Share results link */
  $handler->display->display_options['fields']['share_submission_link']['id'] = 'share_submission_link';
  $handler->display->display_options['fields']['share_submission_link']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['share_submission_link']['field'] = 'share_submission_link';
  $handler->display->display_options['fields']['share_submission_link']['label'] = '';
  $handler->display->display_options['fields']['share_submission_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['share_submission_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['share_submission_link']['element_default_classes'] = FALSE;
  /* Field: Webform submissions: Download results link */
  $handler->display->display_options['fields']['download_submission_link']['id'] = 'download_submission_link';
  $handler->display->display_options['fields']['download_submission_link']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['download_submission_link']['field'] = 'download_submission_link';
  $handler->display->display_options['fields']['download_submission_link']['label'] = '';
  $handler->display->display_options['fields']['download_submission_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['download_submission_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['download_submission_link']['element_default_classes'] = FALSE;
  /* Field: DELETE */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'DELETE';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<i class="icon icon--bin"></i>';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[nid]/submission/[sid]/delete?destination=my-submissions';
  $handler->display->display_options['fields']['nothing_1']['alter']['alt'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['link_class'] = 'submission-item__action';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="submission-item__left">
<div class="submission-item__title">
Self-assessment type: [self_assesment_type]
</div>
<div class="submission-item__meta">
[completed]
</div>
<div class="submission-item__link">
[share_submission_link] 
</div>
</div>
<div class="submission-item__actions">
[view_report_link]
[download_submission_link]
[nothing_1]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['uid_current']['expose']['label'] = 'Is the logged in user';
  $handler->display->display_options['filters']['uid_current']['expose']['operator'] = 'uid_current_op';
  $handler->display->display_options['filters']['uid_current']['expose']['identifier'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['expose']['required'] = TRUE;
  /* Filter criterion: Webform submissions: Submitted */
  $handler->display->display_options['filters']['submitted']['id'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['filters']['submitted']['field'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['operator'] = 'between';
  $handler->display->display_options['filters']['submitted']['exposed'] = TRUE;
  $handler->display->display_options['filters']['submitted']['expose']['operator_id'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['label'] = 'Submission date';
  $handler->display->display_options['filters']['submitted']['expose']['operator'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'listing--numbered';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Webform submissions: Submitted */
  $handler->display->display_options['sorts']['submitted']['id'] = 'submitted';
  $handler->display->display_options['sorts']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['sorts']['submitted']['field'] = 'submitted';
  $handler->display->display_options['sorts']['submitted']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'user/my-submissions';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Results shared with me';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'listing--numbered';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Webform submissions: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Submission shares: Shared with */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'eche_wf_shares';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Webform submissions: Sid */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sid']['separator'] = '';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_firstname']['id'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['fields']['field_firstname']['field'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_firstname']['label'] = '';
  $handler->display->display_options['fields']['field_firstname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_firstname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_firstname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_firstname']['type'] = 'text_plain';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_lastname']['id'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['fields']['field_lastname']['field'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_lastname']['label'] = '';
  $handler->display->display_options['fields']['field_lastname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lastname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lastname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lastname']['type'] = 'text_plain';
  /* Field: User: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_department']['label'] = '';
  $handler->display->display_options['fields']['field_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_department']['element_default_classes'] = FALSE;
  /* Field: Webform submissions: Completed */
  $handler->display->display_options['fields']['completed']['id'] = 'completed';
  $handler->display->display_options['fields']['completed']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['completed']['field'] = 'completed';
  $handler->display->display_options['fields']['completed']['label'] = '';
  $handler->display->display_options['fields']['completed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['completed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['completed']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['completed']['date_format'] = 'ec_date_format';
  $handler->display->display_options['fields']['completed']['second_date_format'] = 'ec_date_format';
  /* Field: User: Higher Education Institution */
  $handler->display->display_options['fields']['field_user_hei']['id'] = 'field_user_hei';
  $handler->display->display_options['fields']['field_user_hei']['table'] = 'field_data_field_user_hei';
  $handler->display->display_options['fields']['field_user_hei']['field'] = 'field_user_hei';
  $handler->display->display_options['fields']['field_user_hei']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_user_hei']['label'] = '';
  $handler->display->display_options['fields']['field_user_hei']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_hei']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_hei']['alter']['text'] = '[field_user_hei] / ';
  $handler->display->display_options['fields']['field_user_hei']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_hei']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_hei']['settings'] = array(
    'link' => 0,
  );
  /* Field: Webform submissions: Self-assesment type */
  $handler->display->display_options['fields']['self_assesment_type']['id'] = 'self_assesment_type';
  $handler->display->display_options['fields']['self_assesment_type']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['self_assesment_type']['field'] = 'self_assesment_type';
  $handler->display->display_options['fields']['self_assesment_type']['label'] = '';
  $handler->display->display_options['fields']['self_assesment_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['self_assesment_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['self_assesment_type']['element_default_classes'] = FALSE;
  /* Field: Submission shares: Was submission read? */
  $handler->display->display_options['fields']['is_read']['id'] = 'is_read';
  $handler->display->display_options['fields']['is_read']['table'] = 'eche_wf_shares';
  $handler->display->display_options['fields']['is_read']['field'] = 'is_read';
  $handler->display->display_options['fields']['is_read']['label'] = '';
  $handler->display->display_options['fields']['is_read']['exclude'] = TRUE;
  $handler->display->display_options['fields']['is_read']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['is_read']['element_default_classes'] = FALSE;
  /* Field: Webform submissions: View results */
  $handler->display->display_options['fields']['view_report_link']['id'] = 'view_report_link';
  $handler->display->display_options['fields']['view_report_link']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['view_report_link']['field'] = 'view_report_link';
  $handler->display->display_options['fields']['view_report_link']['label'] = '';
  $handler->display->display_options['fields']['view_report_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_report_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_report_link']['element_default_classes'] = FALSE;
  /* Field: Webform submissions: Download results link */
  $handler->display->display_options['fields']['download_submission_link']['id'] = 'download_submission_link';
  $handler->display->display_options['fields']['download_submission_link']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['download_submission_link']['field'] = 'download_submission_link';
  $handler->display->display_options['fields']['download_submission_link']['label'] = '';
  $handler->display->display_options['fields']['download_submission_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['download_submission_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['download_submission_link']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="submission-item__left">
<div class="submission-item__title">
[field_firstname] [field_lastname] <span>([field_user_hei] [field_department])</span>[is_read]
</div>
<div class="submission-item__subtitle">
<strong>Self-assessment type:</strong> [self_assesment_type]
</div>
<div class="submission-item__meta">
<div>[completed]</div>
</div>
</div>
<div class="submission-item__actions">
[view_report_link]
[download_submission_link]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Submission shares: Share date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'eche_wf_shares';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid_1';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 1;
  /* Filter criterion: Realname: Name */
  $handler->display->display_options['filters']['realname']['id'] = 'realname';
  $handler->display->display_options['filters']['realname']['table'] = 'realname';
  $handler->display->display_options['filters']['realname']['field'] = 'realname';
  $handler->display->display_options['filters']['realname']['relationship'] = 'uid';
  $handler->display->display_options['filters']['realname']['group'] = 1;
  $handler->display->display_options['filters']['realname']['exposed'] = TRUE;
  $handler->display->display_options['filters']['realname']['expose']['operator_id'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['label'] = 'By colleague name';
  $handler->display->display_options['filters']['realname']['expose']['operator'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['identifier'] = 'realname';
  $handler->display->display_options['filters']['realname']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Webform submissions: Submitted */
  $handler->display->display_options['filters']['submitted']['id'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['filters']['submitted']['field'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['operator'] = 'between';
  $handler->display->display_options['filters']['submitted']['group'] = 1;
  $handler->display->display_options['filters']['submitted']['exposed'] = TRUE;
  $handler->display->display_options['filters']['submitted']['expose']['operator_id'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['label'] = 'Submission date';
  $handler->display->display_options['filters']['submitted']['expose']['operator'] = 'submitted_op';
  $handler->display->display_options['filters']['submitted']['expose']['identifier'] = 'submitted';
  $handler->display->display_options['filters']['submitted']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'user/shared-with-me';
  $export['self_assessment_submissions'] = $view;

  return $export;
}
