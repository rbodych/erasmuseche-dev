<?php
/**
 * @file
 * eche_wf_share.views.inc
 */

/**
 * Implements hook_views_data().
 */
function eche_wf_share_views_data() {
  $data = array();

  $data['webform_submissions']['share_submission_link'] = array(
    'title' => t('Share results link'),
    'help' => t('Share results link.'),
    'field' => array(
      'handler' => 'eche_wf_share_handler_share_submission_link',
    ),
  );

  $data['webform_submissions']['download_submission_link'] = array(
    'title' => t('Download results link'),
    'help' => t('Download results link.'),
    'field' => array(
      'handler' => 'eche_wf_share_handler_download_submission_link',
    ),
  );

  $data['webform_submissions']['self_assesment_type'] = array(
    'title' => t('Self-assesment type'),
    'help' => t('Self-assesment type.'),
    'field' => array(
      'handler' => 'eche_wf_share_handler_self_assesment_type',
    ),
  );

  $data['webform_submissions']['view_report_link'] = array(
    'title' => t('View results'),
    'help' => t('Report link.'),
    'field' => array(
      'handler' => 'eche_wf_share_handler_view_report_link',
    ),
  );

  $data['eche_wf_shares']['table']['group'] = t('Submission shares');

  $data['eche_wf_shares']['table']['base'] = array(
    'title' => t('Submission shares'),
    'help' => t('Contains submission share records.'),
  );

  // The ID field.
  $data['eche_wf_shares']['sid'] = array(
    'title' => t('Sid'),
    'help' => t('The submission ID of the submission.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'title' => t('Sid'),
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  // Created field.
  $data['eche_wf_shares']['timestamp'] = array(
    // The item it appears as on the UI.
    'title' => t('Share date'),
    // The help that appears on the UI.
    'help' => t('The date the submission was shared.'),
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  // Uid field.
  $data['eche_wf_shares']['uid'] = array(
    'title' => t('Author uid'),
    'help' => t('The user with whom content was shared'),
    'relationship' => array(
      'title' => t('Shared with'),
      'help' => t('Relate submission to the user with whom it was shared.'),
      'handler' => 'views_handler_relationship',
      'base' => 'users',
      'field' => 'uid',
      'label' => t('shared_with'),
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_user_name',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
    'field' => array(
      'handler' => 'views_handler_field_user',
    ),
  );

  // The ID field.
  $data['eche_wf_shares']['is_read'] = array(
    'title' => t('Was submission read?'),
    'help' => t('Was submission read.'),
    'field' => array(
      'handler' => 'eche_wf_share_handler_submission_is_read',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_field_boolean',
    ),
  );

  $data['eche_wf_shares']['table']['join'] = array(
    'webform_submissions' => array(
      'left_field' => 'sid',
      'field' => 'sid',
    ),
  );

  return $data;
}

/**
 * Implements hook_views_data_alter().
 */
function eche_wf_share_views_data_alter(&$data) {

  $data['webform_submissions']['eche_wf_shares'] = array(
    'title' => t('Shares of the given submission'),
    'help' => t('Shares of the given submission.'),
    'real field' => 'sid',
    'relationship' => array(
      'base' => 'eche_wf_shares',
      'base field' => 'sid',
      'handler' => 'views_handler_relationship',
      'label' => t('Shared submission'),
    ),
  );

}

/**
 * Implements hook_views_query_alter().
 */
function eche_wf_share_views_query_alter(&$view, &$query) {
  // (Example assuming a view with an exposed filter on node title.)
  // If the input for the title filter is a positive integer, filter against
  // node ID instead of node title.
  if ($view->name == 'self_assessment_submissions') {

    $query->where[] = array(
      'conditions' => array(
        array(
          'field' => 'webform_submissions.nid',
          'value' => array(
            variable_get('eche_wf_self_assesment_form_nid', 0),
            variable_get('eche_wf_rectors_form_nid', 0),
          ),
          'operator' => 'IN',
        ),
      ),
      'type' => 'custom',
    );

  }

}
