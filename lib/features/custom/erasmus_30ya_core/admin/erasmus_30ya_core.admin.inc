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
  $monthly_themes = _erasmus_30ya_core_admin_get_monthly_themes();
  for ($m=1; $m <= 12; $m++) {
    $month = date('F', mktime(0, 0 , 0, $m, 1, date('Y')));
    $var_name = 'e30ya_monthly_theme_' . drupal_strtolower($month);
    $form['story'][$var_name] = [
      '#type' => 'select',
      '#title' => t('Monthly theme: ' . $month),
      '#options' => $monthly_themes,
      '#default_value' => variable_get($var_name, ''),
      '#required' => TRUE,
    ];
  }
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