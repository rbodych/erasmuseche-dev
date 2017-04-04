<?php
/**
 * @file
 * Template.menu.inc.
 *
 * PHP version 5
 *
 * @category Production
 *
 * @package ErasmusCore/Theme
 *
 * @author EAC WEB <EAC-LIST-C4@nomail.ec.europa.eu>
 *
 * @copyright 2015 European-Commission
 *
 * @license http://ec.europa.eu Europa
 * @link NA
 *
 * Ec_resp's theme implementation to display a single Drupal page.
 */

/**
 * Wrapper function for the top navigation menu links.
 */
function erasmus_menu_tree__menu_eche_navigation(&$variables) {
  return '<ul class="nav-horizontal">' .
    $variables['tree'] .
    '</ul>';
}

/**
 * Wrapper function for the top navigation menu item.
 */
function erasmus_menu_link__menu_eche_navigation(&$variables) {
  $element = $variables['element'];
  $sub_menu = '';
  $element['#attributes']['class'][] = 'nav-horizontal__item';
  $element['#localized_options']['attributes']['class'][] = 'nav-horizontal__link';

  if ($element['#below']) {
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] == 1)) {
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
      $element['#title'] .= ' <span class="caret"></span>';
      $element['#attributes']['class'][] = 'dropdown';
      $element['#localized_options']['html'] = TRUE;
      $element['#localized_options']['attributes']['data-target'] = '#';
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
      $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    }
  }
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }

  // @codingStandardsIgnoreFile
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  // @codingStandardsIgnoreFile
  return '<li' . drupal_attributes($element ['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Wrapper function for the top navigation menu links.
 */
function erasmus_menu_tree__menu_eche_user_menu(&$variables) {
  return '<ul class="nav-horizontal">' .
    $variables['tree'] .
    '</ul>';
}

/**
 * Wrapper function for the top navigation menu item.
 */
function erasmus_menu_link__menu_eche_user_menu(&$variables) {
  $element = $variables['element'];
  $sub_menu = '';
  $element['#attributes']['class'][] = 'nav-horizontal__item nav-horizontal__item--primary';
  $element['#localized_options']['attributes']['class'][] = 'nav-horizontal__link nav-horizontal__link--primary';

  if ($element['#below']) {
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] == 1)) {
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
      $element['#title'] .= ' <span class="caret"></span>';
      $element['#attributes']['class'][] = 'dropdown';
      $element['#localized_options']['html'] = TRUE;
      $element['#localized_options']['attributes']['data-target'] = '#';
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
      $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    }
  }

  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
  // @codingStandardsIgnoreFile
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  // @codingStandardsIgnoreFile
  return '<li' . drupal_attributes($element ['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Wrapper function for the top navigation menu links.
 */
function erasmus_menu_tree__menu_about_eche(&$variables) {
  return '<ul class="nav-vertical">' .
    $variables['tree'] .
    '</ul>';
}

/**
 * Wrapper function for the top navigation menu item.
 */
function erasmus_menu_link__menu_about_eche(&$variables) {
  $element = $variables['element'];
  $sub_menu = '';

  $element['#attributes']['class'][] = 'nav-vertical__item';
  $element['#localized_options']['attributes']['class'][] = 'nav-vertical__link';

  if ($element['#below']) {
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] == 1)) {
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
      $element['#title'] .= ' <span class="caret"></span>';
      $element['#attributes']['class'][] = 'dropdown';
      $element['#localized_options']['html'] = TRUE;
      $element['#localized_options']['attributes']['data-target'] = '#';
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
      $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    }
  }
  // @codingStandardsIgnoreStart
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
  // @codingStandardsIgnoreEnd
  // @codingStandardsIgnoreFile
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  // @codingStandardsIgnoreFile
  return '<li' . drupal_attributes($element ['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}
