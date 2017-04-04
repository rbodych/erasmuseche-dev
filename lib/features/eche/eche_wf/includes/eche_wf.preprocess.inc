<?php
/**
 * @file
 * eche_wf.preprocess.inc
 */

/**
 * Implements hook_preprocess_node().
 */
function eche_wf_preprocess_node(&$vars) {
  if ($vars['view_mode'] == 'simple_teaser') {
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__simple_teaser';
  }
}

/**
 * Prepare for theming of the webform submission confirmation.
 */
function eche_wf_preprocess_webform_confirmation(&$vars) {
  drupal_goto(eche_wf_report_url($vars['node']->nid, $vars['sid']));
  drupal_set_message(t('Thank you, your submission has been received.'));
}

/**
 * Prepare data for eche_wf_report theme.
 */
function template_preprocess_eche_wf_report(&$vars) {
}

/**
 * Prepare data for eche_wf_report_overview theme.
 */
function template_preprocess_eche_wf_report_overview(&$vars) {
}

/**
 * Prepare data for eche_wf_rq_report theme.
 */
function template_preprocess_eche_wf_rq_report(&$vars) {

  $header = '<div class="results__heading">';
  $header .= '<div class="results__heading-label">' . t('Overview') . '</div>';
  $header .= '<div class="results__heading-label results__heading-label--right">' . t('Your performance') . '</div>';
  $header .= '<div class="results__heading-label results__heading-label--right">' . t("Your institution's performance") . '</div>';
  $header .= '</div>';

  $rows = '';

  foreach ($vars['data'] as $values) {

    if (isset($values['#iro_average_score'])) {
      $iro_average_score = $values['#iro_average_score'];
    }
    else {
      $iro_average_score = 0;
    }

    if (isset($values['#stars_number'])) {
      $stars_number = $values['#stars_number'];
    }
    else {
      $stars_number = 0;
    }

    $eche_wf_stars_widget = theme('eche_wf_stars_widget', array(
      'stars' => $stars_number,
      'class' => 'stars--bright',
    ));
    $rows .= '<label class="results__label">';
    $rows .= '<span class="results__label-description">' . $values['#title'] . '</span>';
    $rows .= '<span class="results__rating">' . $eche_wf_stars_widget . '</span>';
    $rows .= '<span class="results__rating">' . theme('eche_wf_stars_widget',
        array('stars' => $iro_average_score)) . '</span>';
    $rows .= '</label>';
  }

  $vars['answers_table'] = '<div class="results">' . $header . $rows . '</div>';
}

/**
 * Prepare data for eche_wf_rq_report_pdf theme.
 */
function template_preprocess_eche_wf_rq_report_pdf(&$vars) {
  $header = array();
  $header[] = array('data' => t('Overview'), 'class' => 'left');
  $header[] = t('Your performance');
  $header[] = t('Your institution\'s performance');

  $rows = array();

  foreach ($vars['data'] as $values) {

    if (isset($values['#iro_average_score'])) {
      $iro_average_score = $values['#iro_average_score'];
    }
    else {
      $iro_average_score = 0;
    }

    if (isset($values['#stars_number'])) {
      $stars_number = $values['#stars_number'];
    }
    else {
      $stars_number = 0;
    }
    $rows[] = array(
      $values['#title'],
      array('data' => $stars_number, 'class' => 'star-number'),
      array('data' => $iro_average_score, 'class' => 'star-number'),
    );
  }

  $vars['answers_table'] = theme('table', array(
    'header' => $header,
    'rows' => $rows,
  ));
}
