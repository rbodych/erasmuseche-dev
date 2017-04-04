<?php
/**
 * @file
 * eche_wf_share.blocks.inc
 */

/**
 * Implements hook_block_info().
 */
function eche_wf_share_block_info() {

  // This example comes from node.module.
  $blocks['my_submissions_tabs'] = array(
    'info' => t('My submissions: Tabs'),
    'cache' => DRUPAL_NO_CACHE,
  );

  return $blocks;
}

/**
 * Implements hook_block_view().
 */
function eche_wf_share_block_view($delta = '') {

  $block = array();

  switch ($delta) {
    case 'my_submissions_tabs':
      $block['content'] = array(
        '#prefix' => '<div class="section--pills-wrapper">',
        '#theme' => 'eche_wf_share_my_submissions_tabs',
        '#suffix' => '</div>',
      );
      break;
  }
  return $block;

}
