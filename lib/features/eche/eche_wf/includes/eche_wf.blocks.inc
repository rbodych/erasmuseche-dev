<?php
/**
 * @file
 * eche_wf.blocks.inc
 */

/**
 * Implements hook_block_info().
 */
function eche_wf_block_info() {
  $blocks['start_sa_button'] = array(
    'info' => t('Start self-assessment'),
    'cache' => DRUPAL_NO_CACHE,
  );
  $blocks['complete_selfasses'] = array(
    'info' => t('Complete the self-assessment'),
    'cache' => DRUPAL_NO_CACHE,
  );
  return $blocks;
}

/**
 * Implements hook_block_view().
 */
function eche_wf_block_view($delta = '') {

  $block = array();

  switch ($delta) {
    case 'start_sa_button':
      $block['content'] = array(
        '#markup' => eche_wf_start_sa_button(),
      );
      break;

    case 'complete_selfasses':
      $block['content'] = array(
        '#markup' => eche_wf_complete_the_self_assessment(),
      );
      break;
  }
  return $block;
}

/**
 * Creates block element for form.
 *
 * @return string
 *    Html block.
 */
function eche_wf_complete_the_self_assessment() {
  $html = "";
  $node = menu_get_object();

  if (eche_wf_node_is_self_assesment($node) || eche_wf_node_is_rectors_quiz($node)) {
    $html = '<div class="form-item webform-component webform-component-markup"><p>Complete the self-assessment below by ticking the appropriate box located next to each sub-statement. At the end of the self-assessment, your results will be displayed alongside relevant case material / good practice examples.</p><br /></div>';
  }

  return $html;
}
