<?php
/**
 * @file
 * eche_wf_invite.blocks.inc
 */

/**
 * Implements hook_block_info().
 */
function eche_wf_invite_block_info() {
  $blocks['invite_button'] = array(
    'info' => t('Invite members button'),
    'cache' => DRUPAL_NO_CACHE,
  );
  return $blocks;
}

/**
 * Implements hook_block_view().
 */
function eche_wf_invite_block_view($delta = '') {

  $block = array();

  switch ($delta) {
    case 'invite_button':
      $block['content'] = array(
        '#markup' => eche_wf_invite_button(),
      );
      break;
  }
  return $block;
}
