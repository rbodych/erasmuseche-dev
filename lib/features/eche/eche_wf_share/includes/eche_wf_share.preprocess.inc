<?php
/**
 * @file
 * eche_wf_share.preprocess.inc
 */

/**
 * Implements hook_preprocess_page().
 *
 * @see page.tpl.php
 */
function eche_wf_share_preprocess_page(&$variables) {
  if (user_is_logged_in()) {
    global $user;
    $counter = new EcheWfShareUserCount($user->uid);
    $variables['new_shares_count'] = $counter->getShareCount();
  }
}
