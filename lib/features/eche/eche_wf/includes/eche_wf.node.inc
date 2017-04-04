<?php
/**
 * @file
 * eche_wf.node.inc
 */

/**
 * Implements hook_node_load().
 */
function eche_wf_node_load($nodes, $types) {

  if ($types[0] == 'webform') {

    foreach ($nodes as &$node) {

      // Attach meta data to webform component.
      if (eche_wf_node_is_self_assesment($node) || eche_wf_node_is_rectors_quiz($node)) {

        if (eche_wf_node_is_self_assesment($node)) {
          $meta = eche_wf_meta_load_all($node->nid, TRUE);

        }
        elseif (eche_wf_node_is_rectors_quiz($node)) {
          $m = new EcheWfRqMeta($node->nid, NULL);
          $meta = $m->loadAll();

        }

        foreach ($node->webform['components'] as &$component) {
          $component['#meta'] = array();

          if (!empty($meta[$component['cid']])) {
            $component['#meta'] = $meta[$component['cid']];
          }

        }

      }

      // On report pages, automatically numerate report questions
      // for self-assesment node.
      if (eche_wf_node_is_self_assesment($node) && (arg(0) == 'node' && arg(2) == 'submission' && arg(4) == 'report')) {
        $counter = 1;
        foreach ($node->webform['components'] as &$component) {
          if (in_array($component['type'], eche_wf_recommendations_supported_component_types())) {
            $component['name'] = $counter . ' ' . $component['name'];
            $options = _webform_select_options_from_text($component['extra']['items']);
            $new_options = array();
            $option_number = 1;
            foreach ($options as $key => $option) {
              $new_options[] = $key . '|' . $counter . '.' . $option_number . ' ' . $option;
              $option_number++;
            }
            $component['extra']['items'] = implode("\n", $new_options);
            $counter++;
          }
        }
      }

    }

  }
}

/**
 * Implements hook_node_delete().
 */
function eche_wf_node_delete($node) {
  db_delete('DELETE FROM {eche_wf_component_meta} WHERE nid = :nid', array(':nid' => $node->nid));
}

/**
 * Implements hook_node_view().
 */
function eche_wf_node_view($node, $view_mode, $langcode) {
  if ($view_mode == 'full' && $node->type == 'webform') {
    eche_wf_related_form_link_field($node);
    if (eche_wf_node_is_self_assesment($node) || eche_wf_node_is_rectors_quiz($node)) {
      global $user;

      $submission_count = webform_get_submission_count($node->nid, $user->uid);
      if ($submission_count > 0) {

        $message = t('You have already submitted this form.');
        $message .= ' ' . t('<a href="!url">View your previous submissions</a>.',
            array('!url' => url('user/my-submissions')));
        drupal_set_message($message);
      }

    }
  }
}

/**
 * Add related_form_link field.
 */
function eche_wf_related_form_link_field(&$node) {

  $title = '<h2 class="submission-info__title">' . $node->title . '</h2>';
  $link = '';
  $node->content['related_form_link'] = array(
    '#weight' => -10,
  );

  // Show the field only on the first page of the webform.
  if (empty($_POST['details'])) {
    if (eche_wf_node_is_self_assesment($node)) {
      $link = eche_wf_rectors_quiz_button();
    }
    elseif (eche_wf_node_is_rectors_quiz($node)) {
      $link = eche_wf_sa_button();
    }
  }

  $node->content['related_form_link']['#markup'] = '<div class="layout--content-boxed__header"><div class="submission-info">' . $title . $link . '</div></div>';

  if (isset($_POST['details']['page_num']) && $_POST['details']['page_num'] == 1) {

    $node->content['complete_selfassesment']['#markup'] = eche_wf_complete_the_self_assessment();
  }
}
