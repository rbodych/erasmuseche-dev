<?php
/**
 * @file
 * eche_wf.meta.inc
 */

/**
 * Load meta from DB per node.
 */
function eche_wf_meta_load_all($nid, $attach_data = FALSE) {
  $results = db_query('SELECT * FROM {eche_wf_component_meta} WHERE nid = :nid', array(':nid' => $nid));
  $data = array();
  foreach ($results as $row) {
    foreach ($row as $column_name => $column_data) {
      if (eche_wf_meta_is_serialized($column_data)) {
        $column_data = unserialize($column_data);
      }
      if ($attach_data) {
        if ($column_name == 'case_studies') {
          $column_data = node_load_multiple($column_data, array(), TRUE);
        }
      }
      $data[$row->cid][$column_name] = $column_data;
    }
  }
  return $data;
}

/**
 * Load meta from DB per node and question.
 */
function eche_wf_meta_load($nid, $cid, $attach_data = FALSE) {
  $results = db_query('SELECT * FROM {eche_wf_component_meta} WHERE nid = :nid AND cid = :cid', array(
    ':nid' => $nid,
    ':cid' => $cid,
  ));
  $data = array();
  foreach ($results as $row) {
    foreach ($row as $column_name => $column_data) {
      if (eche_wf_meta_is_serialized($column_data)) {
        $data[$column_name] = unserialize($column_data);
      }
      else {
        $data[$column_name] = $column_data;
      }
    }
  }
  return $data;
}

/**
 * Save meta into DB.
 */
function eche_wf_meta_save($nid, $cid, $answers, $case_studies, $category, $rectors_question) {
  // @codingStandardsIgnoreStart
  db_query(
    'INSERT INTO {eche_wf_component_meta} (nid, cid, answers, case_studies, category, rectors_question)
     VALUES (:nid, :cid, :answers, :case_studies, :category, :rectors_question)
     ON DUPLICATE KEY UPDATE answers=:answers, case_studies=:case_studies, category=:category, rectors_question=:rectors_question;',
    array(
      ':nid' => $nid,
      ':cid' => $cid,
      ':answers' => serialize($answers),
      ':case_studies' => serialize($case_studies),
      ':category' => $category,
      ':rectors_question' => $rectors_question,
    )
  );
  // @codingStandardsIgnoreEnd
}

/**
 * Returns weights per rector's question.
 */
function eche_wf_get_answer_weights($node) {

  $weights = array();
  $grouped = array();
  foreach ($node->webform['components'] as $component) {
    if ($component['type'] == 'select' && !empty($component['#meta']['answers'])) {
      foreach ($component['#meta']['answers'] as $answer) {
        $grouped[$component['#meta']['rectors_question']][$answer['priority']] = (!empty($grouped[$component['#meta']['rectors_question']][$answer['priority']]) ? $grouped[$component['#meta']['rectors_question']][$answer['priority']] : 0) + 1;
      }
    }
  }

  foreach (eche_wf_utils_get_rectors_questions() as $rectors_question => $value) {
    $weights[$rectors_question] = array(
      'high' => !empty($grouped[$rectors_question]['high']) ? 50 / $grouped[$rectors_question]['high'] : 0,
      'regular' => !empty($grouped[$rectors_question]['regular']) ? 50 / $grouped[$rectors_question]['regular'] : 0,
    );
  }

  return $weights;
}

/**
 * Calculate rector's questions score for the submission.
 */
function eche_wf_calculate_rectors_questions_scores($node, $submission) {
  $weights = eche_wf_get_answer_weights($node);

  foreach (eche_wf_utils_get_rectors_questions() as $key => $value) {
    $rectors_questions_scores[$key] = 0;
  }

  foreach ($submission->data as $cid => $answer_ids) {
    $options = _webform_select_options_from_text($node->webform['components'][$cid]['extra']['items']);

    foreach ($options as $option_key => $option) {

      if (in_array($option_key,
          $answer_ids) && !empty($node->webform['components'][$cid]['#meta']['rectors_question'])
      ) {
        $meta = $node->webform['components'][$cid]['#meta'];

        if (isset($weights[$meta['rectors_question']][$meta['answers'][$option_key]['priority']])) {
          $weight = $weights[$meta['rectors_question']][$meta['answers'][$option_key]['priority']];

          $rectors_questions_scores[$meta['rectors_question']] += $weight;
        }
      }
    }
  }

  foreach ($rectors_questions_scores as $question => $score) {
    if ($score > 100) {
      $score = 100;
    }
    // @codingStandardsIgnoreStart
    db_query(
      'INSERT INTO {eche_wf_rectors_questions_scores} (sid, rectors_question, score)
       VALUES (:sid, :rectors_question, :score)
       ON DUPLICATE KEY UPDATE rectors_question=:rectors_question, score=:score',
      array(
        ':sid' => $submission->sid,
        ':rectors_question' => $question,
        ':score' => $score,
      )
    );
    // @codingStandardsIgnoreEnd
  }

  return $rectors_questions_scores;
}

/**
 * Save rector's questions score for the submission.
 */
function eche_wf_save_rectors__questions_scores($node, $submission) {
  $rectors_questions_scores = array();
  return $rectors_questions_scores;
}
