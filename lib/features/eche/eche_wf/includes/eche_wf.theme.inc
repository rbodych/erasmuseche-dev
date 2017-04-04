<?php
/**
 * @file
 * eche_wf.theme.inc
 */

/**
 * Report selection tabs.
 */
function theme_eche_wf_report_tabs($variables) {

  $output = '';
  $url = eche_wf_report_url($variables['nid'], $variables['sid']);
  $output .= l(t('Overview'), $url, array('attributes' => array('class' => array('tabs__item'))));

  $url = 'node/' . $variables['nid'] . '/submission/' . $variables['sid'] . '/report';
  $output .= l(t('Detailed'), $url, array('attributes' => array('class' => array('tabs__item'))));

  return '<div class="tabs">' . $output . '</div>';
}

/**
 * Stars widget.
 */
function theme_eche_wf_stars_widget(&$variables) {

  $stars = array();
  for ($x = 1; $x <= 3; $x++) {
    $stars[$x] = '<span class="stars__item"><i class="icon icon--star"></i></span>';
  }
  return '<span class="stars stars--' . $variables['stars'] . ' ' . $variables['class'] . '">' . implode('',
      array_reverse($stars)) . '</span>';
}
