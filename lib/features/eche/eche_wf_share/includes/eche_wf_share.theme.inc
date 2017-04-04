<?php
/**
 * @file
 * eche_wf_share.theme.inc
 */

/**
 * Tabs on my submissions page.
 */
function theme_eche_wf_share_my_submissions_tabs($variables) {

  global $user;

  $counter = new EcheWfUserShareCount($user->uid);
  $count = $counter->get_share_count();

  $counter_html = '';
  if ($count > 0) {
    $counter_html = '<span class="notification-count notification-count--top-right">' . $count . '</span>';
  }

  $items[] = array(
    'data' => l(t('My submissions'), 'user/my-submissions'),
    'class' => array($_GET['q'] == 'user/my-submissions' ? 'active' : ''),
  );

  $items[] = array(
    'data' => l(t('Results shared with me !counter', array('!counter' => $counter_html)), 'user/shared-with-me',
      array('html' => TRUE)),
    'class' => array($_GET['q'] == 'user/shared-with-me' ? 'active' : ''),
  );

  return theme('item_list', array(
    'items' => $items,
    'attributes' => array('class' => array('nav nav-pills nav-pills--large nav-pills--arrows')),
  ));
}
