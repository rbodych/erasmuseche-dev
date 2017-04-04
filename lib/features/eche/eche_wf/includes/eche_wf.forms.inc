<?php
/**
 * @file
 * eche_wf.forms.inc
 */

/**
 * Form builder; Provide the form for adding conditionals to a webform node.
 */
function eche_wf_recommendations_form($form, &$form_state, $menu, $component) {

  module_load_include('inc', 'webform', 'components/select');

  $form = array('#tree' => TRUE);
  $r = eche_wf_meta_load($component['nid'], $component['cid']);

  $form['nid'] = array(
    '#type' => 'value',
    '#value' => $component['nid'],
  );

  $form['cid'] = array(
    '#type' => 'value',
    '#value' => $component['cid'],
  );

  if (in_array($component['type'], eche_wf_recommendations_supported_component_types())) {

    $options = _webform_select_options_from_text($component['extra']['items']);

    foreach ($options as $key => $option) {

      $form['options'][$key] = array(
        '#type' => 'fieldset',
        '#title' => "$option",
        '#collapsed' => TRUE,
        '#collapsible' => TRUE,
      );

      $form['options'][$key]['value'] = array(
        '#type' => 'value',
        '#value' => $key,
      );

      $form['options'][$key]['type'] = array(
        '#type' => 'value',
        '#value' => $component['type'],
      );

      $form['options'][$key]['text'] = array(
        '#title' => t('Recommendation for this value'),
        '#type' => 'text_format',
        '#default_value' => !empty($r['answers'][$key]['text']['value']) ? $r['answers'][$key]['text']['value'] : '',
        '#format' => !empty($r['answers'][$key]['text']['format']) ? $r['answers'][$key]['text']['format'] : 'full_html',
      );

      $form['options'][$key]['priority'] = array(
        '#title' => t('Priority'),
        '#type' => 'select',
        '#options' => eche_wf_weights(),
        '#default_value' => !empty($r['answers'][$key]['priority']) ? $r['answers'][$key]['priority'] : '',
      );

    }

  }

  $form['common'] = array(
    '#type' => 'fieldset',
    '#title' => t('Common'),
    '#collapsed' => TRUE,
    '#collapsible' => TRUE,
  );

  $form['common']['category'] = array(
    '#title' => t('Category'),
    '#type' => 'select',
    '#required' => TRUE,
    '#options' => eche_wf_question_categories(),
    '#default_value' => !empty($r['category']) ? $r['category'] : NULL,
  );

  $form['common']['rectors_question'] = array(
    '#title' => t("Rector's question"),
    '#type' => 'select',
    '#empty_option' => t('None'),
    '#options' => eche_wf_utils_get_rectors_questions(),
    '#default_value' => !empty($r['rectors_question']) ? $r['rectors_question'] : NULL,
  );

  // Factsheets attachment table.
  $data = array();
  $key = 'common';

  if (!empty($form_state['values']['options'])) {
    if (!empty($form_state['values']['common']['factsheets']['values'])) {
      $data = $form_state['values']['common']['factsheets']['values'];
    }
    // Sort the rows.
    uasort($data, '_eche_wf_recommendations_form_weight_arraysort');
  }
  elseif (!empty($r['case_studies'])) {
    foreach ($r['case_studies'] as $case_study) {
      $data[] = array('factsheet' => $case_study, 'weight' => 0);
    }
  }

  $form['common']['factsheets'] = array(
    '#title' => t('Attached case studies'),
    '#type' => 'fieldset',
    // Set up the wrapper so that AJAX will be able to replace the fieldset.
    '#prefix' => '<div id="factsheets-fieldset-wrapper--' . $key . '">',
    '#suffix' => '</div>',
  );

  $rows = array();
  $row_elements = array();

  // Iterate through each database result.
  foreach ($data as $i => $item) {

    $rows[$i] = array(

      'data' => array(

        // Cell for the cross drag&drop element.
        array('class' => array('entry-cross')),

        // Weight item for the tabledrag.
        array(
          'data' => array(
            '#type' => 'weight',
            '#title' => t('Weight'),
            '#title_display' => 'invisible',
            '#default_value' => $item['weight'],
            '#parents' => array('common', 'factsheets', 'values', $i, 'weight'),
            '#attributes' => array(
              'class' => array('entry-order-weight', 'no-select2'),
            ),
            '#delta' => 100,
          ),
        ),

        array(
          'data' => array(
            '#parents' => array(
              'common',
              'factsheets',
              'values',
              $i,
              'factsheet',
            ),
            '#type' => 'select',
            '#title' => t('Case study'),
            '#options' => eche_wf_get_factsheets_available(),
            '#default_value' => !empty($item['factsheet']) ? $item['factsheet'] : '',
            '#title_display' => 'invisible',
            '#attributes' => array(
              'class' => array('no-select2!'),
            ),
          ),
        ),

        array(
          'data' => array(
            '#parents' => array('common', 'factsheets', 'values', $i, 'remove'),
            '#title_display' => 'invisible',
            '#type' => 'submit',
            '#value' => t('X'),
            '#name' => 'remove_' . $key,
            '#submit' => array('eche_wf_factsheet_remove_submit'),
            '#ajax' => array(
              'callback' => 'eche_wf_factsheet_remove_callback',
              'wrapper' => 'factsheets-fieldset-wrapper--' . $key,
              'parameters' => array('key' => $key, 'num' => $i),
            ),
          ),
        ),

      ),

      'class' => array('draggable'),
    );

    // Build rows of the form elements in the table.
    $row_elements[$i] = array(
      'weight' => &$rows[$i]['data'][1]['data'],
      'factsheet' => &$rows[$i]['data'][2]['data'],
      'remove' => &$rows[$i]['data'][3]['data'],
    );
  }

  // Add the table to the form.
  $form['common']['factsheets']['table'] = array(
    '#theme' => 'table',
    // The row form elements need to be processed and build,
    // therefore pass them as element children.
    'elements' => $row_elements,
    '#header' => array(
      // We need two empty columns for the weigth field and the cross.
      array('data' => NULL, 'colspan' => 2),
      t('Case study'),
      t('Remove'),
    ),
    '#rows' => $rows,
    '#empty' => t('There are no entries available.'),
    '#attributes' => array('id' => 'entry-order--' . $key),
  );

  drupal_add_tabledrag('entry-order--' . $key, 'order', 'sibling', 'entry-order-weight');

  $form['common']['factsheets']['factsheets_add'] = array(
    '#type' => 'submit',
    '#name' => 'add_more_' . $key,
    '#value' => t('Add one more'),
    '#submit' => array('eche_wf_factsheet_add_more_submit'),
    // See the examples in ajax_example.module for more details on the
    // properties of #ajax.
    '#ajax' => array(
      'callback' => 'eche_wf_factsheet_add_more_callback',
      'wrapper' => 'factsheets-fieldset-wrapper--' . $key,
      'parameters' => array('key' => $key),
    ),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}

/**
 * Validation callback for eche_wf_recommendations_form().
 */
function eche_wf_recommendations_form_validate($form, &$form_state) {
  // Only way to get our value if not passed.
  // @codingStandardsIgnoreStart
  if (!empty($form_state['input']['common']['factsheets'])) {
    $form_state['values']['common']['factsheets'] = $form_state['input']['common']['factsheets'];
  }
  // @codingStandardsIgnoreEnd
}

/**
 * Helper function for sorting entry weights.
 */
function _eche_wf_recommendations_form_weight_arraysort($a, $b) {
  if (isset($a['weight']) && isset($b['weight'])) {
    return $a['weight'] < $b['weight'] ? -1 : 1;
  }
  return 0;
}

/**
 * Submit handler for the "add-one-more" button.
 *
 * Increments the max counter and causes a rebuild.
 */
function eche_wf_factsheet_add_more_submit($form, &$form_state) {

  $form_state['values']['common']['factsheets']['values'][] = array(
    'factsheet' => '',
    'weight' => 100,
  );

  $form_state['rebuild'] = TRUE;
}

/**
 * Callback for both ajax-enabled buttons.
 *
 * Selects and returns the fieldset with the names in it.
 */
function eche_wf_factsheet_add_more_callback($form, $form_state) {
  return $form['common']['factsheets'];
}

/**
 * Submit handler for the "remove" button.
 *
 * Increments the max counter and causes a rebuild.
 */
function eche_wf_factsheet_remove_submit($form, &$form_state) {
  $params = $form_state['triggering_element']['#ajax']['parameters'];
  unset($form_state['values']['common']['factsheets']['values'][$params['num']]);
  $form_state['rebuild'] = TRUE;
}

/**
 * Callback for both ajax-enabled buttons.
 *
 * Selects and returns the fieldset with the names in it.
 */
function eche_wf_factsheet_remove_callback($form, $form_state) {
  return $form['common']['factsheets'];
}

/**
 * Submit handler for webform_conditionals_form().
 */
function eche_wf_recommendations_form_submit($form, &$form_state) {
  $case_studies = array();
  if (!empty($form_state['values']['common']['factsheets']['values'])) {
    // Sort factsheets by weight.
    uasort($form_state['values']['common']['factsheets']['values'],
      '_eche_wf_recommendations_form_weight_arraysort');
    foreach ($form_state['values']['common']['factsheets']['values'] as $case_study) {
      $case_studies[] = $case_study['factsheet'];
    }
  }
  $answers = !empty($form_state['values']['options']) ? $form_state['values']['options'] : array();
  $category = $form_state['values']['common']['category'];
  $rectors_question = !empty($form_state['values']['common']['rectors_question']) ? $form_state['values']['common']['rectors_question'] : NULL;
  eche_wf_meta_save($form_state['values']['nid'], $form_state['values']['cid'], $answers, $case_studies,
    $category,
    $rectors_question);
}

/**
 * Form builder; Provide the form for adding conditionals to a webform node.
 */
function eche_wf_rq_meta_form($form, &$form_state, $menu, $component) {

  module_load_include('inc', 'webform', 'components/select');

  $form = array('#tree' => TRUE);
  $meta = new EcheWfRqMeta($component['nid'], $component['cid']);
  $r = $meta->load();

  $form['nid'] = array(
    '#type' => 'value',
    '#value' => $component['nid'],
  );

  $form['cid'] = array(
    '#type' => 'value',
    '#value' => $component['cid'],
  );

  $options = eche_wf_rq_webform_select_options_from_text($component['extra']['items']);
  $conditions = array(
    'all' => t('All'),
    'at_least' => t('At least'),
  );

  $star_options = array(
    3 => t('Three stars'),
    2 => t('Two stars'),
    1 => t('One star'),
  );

  $form['stars'] = array(
    '#type' => 'fieldset',
    '#tree' => TRUE,
  );

  foreach ($star_options as $key => $label) {
    $form['stars'][$key] = array(
      '#title' => $label,
      '#type' => 'fieldset',
    );

    $form['stars'][$key]['ticked'] = array(
      '#type' => 'fieldset',
    );

    $form['stars'][$key]['ticked']['condition'] = array(
      '#title' => t('Condition'),
      '#type' => 'select',
      '#options' => $conditions,
      '#default_value' => !empty($r['meta']['stars'][$key]['ticked']['condition']) ? $r['meta']['stars'][$key]['ticked']['condition'] : array(),
    );

    $form['stars'][$key]['ticked']['values'] = array(
      '#title' => t('Questions that should be selected by user to get') . $label,
      '#type' => 'checkboxes',
      '#options' => $options,
      '#default_value' => !empty($r['meta']['stars'][$key]['ticked']['values']) ? $r['meta']['stars'][$key]['ticked']['values'] : array(),
    );

    $form['stars'][$key]['not_ticked'] = array(
      '#type' => 'fieldset',
    );

    $form['stars'][$key]['not_ticked']['condition'] = array(
      '#title' => t('Condition'),
      '#type' => 'select',
      '#options' => $conditions,
      '#default_value' => !empty($r['meta']['stars'][$key]['not_ticked']['condition']) ? $r['meta']['stars'][$key]['not_ticked']['condition'] : array(),
    );

    $form['stars'][$key]['not_ticked']['values'] = array(
      '#title' => t('Questions that should <b>NOT</b> be selected by user to get') . $label,
      '#type' => 'checkboxes',
      '#options' => $options,
      '#default_value' => !empty($r['meta']['stars'][$key]['not_ticked']['values']) ? $r['meta']['stars'][$key]['not_ticked']['values'] : array(),
    );

  }

  $form['text'] = array(
    '#title' => t('Text:'),
    '#type' => 'text_format',
    '#default_value' => !empty($r['meta']['text']['value']) ? $r['meta']['text']['value'] : '',
    '#format' => !empty($r['meta']['text']['format']) ? $r['meta']['text']['format'] : 'full_html',
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}

/**
 * Eche_wf_rq_meta_form submit callback.
 */
function eche_wf_rq_meta_form_submit($form, &$form_state) {

  $meta = new EcheWfRqMeta($form_state['values']['nid'], $form_state['values']['cid']);

  foreach ($form_state['values']['stars'] as $id => $star) {
    foreach ($star as $type => $letters) {
      $form_state['values']['stars'][$id][$type]['values'] = array_filter($letters['values']);
    }
  }

  $data = array(
    'stars' => $form_state['values']['stars'],
    'text' => $form_state['values']['text'],
  );

  $meta->save($data);
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function eche_wf_form_webform_submission_delete_form_alter(&$form, &$form_state) {
  // Override page title.
  drupal_set_title(t('Delete submission'));
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function eche_wf_form_webform_client_form_alter(&$form, &$form_state, $form_id) {
  if (!isset($form['#node']->webform['nid'])) {
    return;
  }

  $form['actions']['#attributes']['class'] = array('text-right');
  $form['actions']['previous']['#value'] = '<span class="icon icon--arrow-left"></span>' . t('Previous page');
  $form['actions']['previous']['#attributes']['class'] = array('btn--primary btn--lg');
  $form['actions']['next']['#value'] = t('Next page') . '<span class="icon icon--arrow-right"></span>';
  $form['actions']['next']['#attributes']['class'] = array('btn--primary btn--lg');
  $form['actions']['submit']['#value'] = t('Finish') . '<span class="icon icon--arrow-right"></span>';
  $form['actions']['submit']['#attributes']['class'] = array('btn--primary btn--lg');
}
