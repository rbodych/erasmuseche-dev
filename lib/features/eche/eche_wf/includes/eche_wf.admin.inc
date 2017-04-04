<?php
/**
 * @file
 * eche_wf.admin.inc
 */

/**
 * Settings form of eche_wf module.
 */
function eche_wf_settings_form($form, &$form_state) {

  $options = db_query("SELECT nid, title FROM {node} WHERE type='webform'")->fetchAllKeyed();

  $form['eche_wf_self_assesment_form_nid'] = array(
    '#type' => 'select',
    '#title' => t('Self-assesment webform'),
    '#options' => $options,
    '#required' => TRUE,
    '#default_value' => variable_get('eche_wf_self_assesment_form_nid', NULL),
  );

  $form['eche_wf_rectors_form_nid'] = array(
    '#type' => 'select',
    '#title' => t('Rectors webform'),
    '#options' => $options,
    '#required' => TRUE,
    '#default_value' => variable_get('eche_wf_rectors_form_nid', NULL),
  );

  return system_settings_form($form);
}

/**
 * Export / Import meta page callback.
 */
function eche_wf_meta_import_export_page($webform) {

  $build = array();

  $build['export'] = array(
    'form' => drupal_get_form('eche_wf_meta_export_form', $webform),
  );

  $build['import'] = array(
    'form' => drupal_get_form('eche_wf_meta_import_form', $webform),
  );

  return $build;
}

/**
 * Export form callback.
 */
function eche_wf_meta_export_form($form, &$form_state, $webform) {

  module_load_include('inc', 'eche_wf_meta', 'includes/utility');

  $form = array();

  $form['export'] = array(
    '#title' => t('Export'),
    '#type' => 'fieldset',
  );

  $meta = eche_wf_utils_prepare_meta_for_export($webform->nid);
  $export = drupal_var_export($meta);

  $form['export']['text'] = array(
    '#type' => 'textarea',
    '#title' => t('Select webform meta to export'),
    '#value' => $export,
  );

  return $form;
}

/**
 * Import form callback.
 */
function eche_wf_meta_import_form($form, &$form_state, $webform) {

  $form = array();

  $form['webform'] = array(
    '#type' => 'value',
    '#value' => $webform,
  );

  $form['import'] = array(
    '#title' => t('Import'),
    '#type' => 'fieldset',
  );

  $form['import']['text'] = array(
    '#type' => 'textarea',
    '#title' => t('Put array to import'),
    '#required' => TRUE,
  );

  $form['import']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Import'),
  );

  return $form;
}

/**
 * Import form submit callback.
 */
function eche_wf_meta_import_form_submit($form, &$form_state) {
  $meta = eche_wf_utils_prepare_meta_for_import($form_state['values']['webform']->nid,
    $form_state['values']['text']);

  foreach ($meta as $item) {
    // Save meta depending on form's type.
    if (eche_wf_node_is_self_assesment($item['nid'])) {
      eche_wf_meta_save($item['nid'], $item['cid'], $item['meta'], $item['case_studies'],
        $item['category'], $item['rectors_question']);
    }
    elseif (eche_wf_node_is_rectors_quiz($item['nid'])) {
      $m = new EcheWfRqMeta($item['nid'], $item['cid']);
      $m->save($item['meta']);
    }
  }

  drupal_set_message(t('Import complete'));
}
