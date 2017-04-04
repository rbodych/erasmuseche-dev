<?php
/**
 * @file
 * eche_core.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function eche_core_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-about-eche.
  $menus['menu-about-eche'] = array(
    'menu_name' => 'menu-about-eche',
    'title' => 'About eche',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-eche-navigation.
  $menus['menu-eche-navigation'] = array(
    'menu_name' => 'menu-eche-navigation',
    'title' => 'Eche navigation',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatable
  // Included for use with string extractors like potx.
  t('About eche');
  t('Eche navigation');

  return $menus;
}
