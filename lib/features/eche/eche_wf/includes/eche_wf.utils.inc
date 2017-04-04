<?php
/**
 * @file
 * eche_wf.utils.inc
 */

/**
 * Check if data is serialized.
 */
function eche_wf_meta_is_serialized($data) {
  // If it isn't a string, it isn't serialized.
  if (!is_string($data)) {
    return FALSE;
  }
  $data = trim($data);
  if ('N;' == $data) {
    return TRUE;
  }
  if (!preg_match('/^([adObis]):/', $data, $badions)) {
    return FALSE;
  }
  switch ($badions[1]) {
    case 'a':
    case 'O':
    case 's':
      if (preg_match("/^{$badions[1]}:[0-9]+:.*[;}]\$/s", $data)) {
        return TRUE;
      }
      break;

    case 'b':
    case 'i':
    case 'd':
      if (preg_match("/^{$badions[1]}:[0-9.E-]+;\$/", $data)) {
        return TRUE;
      }
      break;

  }
  return FALSE;
}

/**
 * Calculate question's score depending on answered questions and their value.
 */
function eche_wf_utils_calculate_question_submission_score($answer_ids, $question_meta) {
  $points = eche_wf_weights('key_points');
  $score = 0;
  foreach ($answer_ids as $answer_id) {
    if (!empty($question_meta['answers'][$answer_id]['priority'])) {
      $priority_points = $points[$question_meta['answers'][$answer_id]['priority']];
      $score += $priority_points;
    }
  }
  return $score;
}

/**
 * Prepare meta data for export.
 */
function eche_wf_utils_prepare_meta_for_export($nid) {
  if (eche_wf_node_is_self_assesment($nid)) {
    $meta = eche_wf_meta_load_all($nid);
  }
  elseif (eche_wf_node_is_rectors_quiz($nid)) {
    $m = new EcheWfRqMeta($nid, NULL);
    $meta = $m->loadAll();
  }

  foreach ($meta as &$item) {
    unset($item['nid']);
  }
  return $meta;
}

/**
 * Prepare meta data for import.
 */
function eche_wf_utils_prepare_meta_for_import($nid, $import_text) {
  $meta = [];
  php_eval('$meta = ' . $import_text . ';');
  foreach ($meta as &$item) {
    $item['nid'] = $nid;
  }
  return $meta;
}

/**
 * Returns self-assesment webform.
 */
function eche_wf_utils_get_self_assesment() {
  return node_load(variable_get('eche_wf_self_assesment_form_nid', NULL));
}

/**
 * Returns Rector's quiz webform.
 */
function eche_wf_utils_get_rectors_quiz() {
  return node_load(variable_get('eche_wf_rectors_form_nid', NULL));
}

/**
 * Returns Rector's quiz webform.
 */
function eche_wf_utils_get_rectors_questions($as_options = TRUE) {
  $questions = array();
  $quiz = node_load(variable_get('eche_wf_rectors_form_nid', NULL));
  if (!empty($quiz)) {
    foreach ($quiz->webform['components'] as $component) {
      if ($component['type'] == 'optionsmarkup') {
        $label = $component['name'];
        if ($as_options) {
          $label = $component['form_key'] . ': ' . $component['name'];
        }
        $questions[$component['form_key']] = $label;
      }
    }
  }
  return $questions;
}

/**
 * Checks whether the current node is self assesment.
 */
function eche_wf_node_is_self_assesment($node) {
  $nid = is_object($node) ? $node->nid : $node;
  return $nid == variable_get('eche_wf_self_assesment_form_nid', NULL);
}

/**
 * Checks whether the current node is rector's quiz.
 */
function eche_wf_node_is_rectors_quiz($node) {
  $nid = is_object($node) ? $node->nid : $node;
  return $nid == variable_get('eche_wf_rectors_form_nid', NULL);
}

/**
 * Return report's initial url.
 */
function eche_wf_report_url($nid, $sid) {
  return 'node/' . $nid . '/submission/' . $sid . '/report-overview';
}

/**
 * Select options from the text.
 */
function eche_wf_rq_webform_select_options_from_text($items) {
  $options = _webform_select_options_from_text($items);
  $filtered_options = array();
  foreach ($options as $key => $option) {
    $filtered_options[$key] = preg_replace('#<h3>(.*?)<\/h3>#i', '', $option);
  }
  return $filtered_options;
}
