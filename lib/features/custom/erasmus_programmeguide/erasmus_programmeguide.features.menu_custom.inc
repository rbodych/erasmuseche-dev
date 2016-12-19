<?php
/**
 * @file
 * erasmus_programmeguide.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function erasmus_programmeguide_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-books.
  $menus['menu-books'] = array(
    'menu_name' => 'menu-books',
    'title' => 'Books',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-programme-guide.
  $menus['menu-programme-guide'] = array(
    'menu_name' => 'menu-programme-guide',
    'title' => 'Programme guide',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Books');
  t('Programme guide');

  return $menus;
}
