<?php
/**
 * @file
 * Admin form.
 */

/**
 * Admin form.
 */
function erasmus_30ya_core_admin() {
  $form = [];
  $form['story'] = [
    '#type' => 'fieldset',
    '#title' => t('Story settings (Monthly theme)'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  ];
  $form['mail'] = [
    '#type' => 'fieldset',
    '#title' => t('Mail settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  ];
  $form['social'] = [
    '#type' => 'fieldset',
    '#title' => t('Social settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  ];
  $monthly_themes = _erasmus_30ya_core_admin_get_monthly_themes();
  $form['story']['30ya_current_theme'] = [
    '#type' => 'select',
    '#title' => t('Current monthly theme'),
    '#options' => $monthly_themes,
    '#default_value' => variable_get('30ya_current_theme', ''),
    '#required' => TRUE,
  ];
  $form['mail']['share_story_mail_to'] = [
    '#type' => 'textfield',
    '#title' => t('Share story TO email address'),
    '#default_value' => variable_get('share_story_mail_to', ''),
    '#required' => TRUE,
  ];
  $form['mail']['share_story_mail_from'] = [
    '#type' => 'textfield',
    '#title' => t('Share story FROM email address'),
    '#default_value' => variable_get('share_story_mail_from', ''),
    '#required' => TRUE,
  ];
  $form['social']['e30ya_hashtag'] = [
    '#type' => 'textfield',
    '#title' => t('Hashtag'),
    '#default_value' => variable_get('e30ya_hashtag', 'ErasmusPlus'),
    '#required' => TRUE,
  ];
  return system_settings_form($form);
}

/**
 * Retrieve all monthly theme options.
 */
function _erasmus_30ya_core_admin_get_monthly_themes() {
  $vocabulary
    = taxonomy_vocabulary_machine_name_load('erasmus_30_year_anniversary_monthly_themes');
  $tree = taxonomy_get_tree($vocabulary->vid);
  $terms = [];
  foreach ($tree as $term) {
    $terms[$term->tid] = $term->name;
  }
  return $terms;
}
