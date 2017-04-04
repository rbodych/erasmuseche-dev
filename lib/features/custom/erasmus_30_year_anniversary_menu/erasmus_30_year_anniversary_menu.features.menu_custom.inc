<?php
/**
 * @file
 * erasmus_30_year_anniversary_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function erasmus_30_year_anniversary_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-erasmus-30.
  $menus['menu-erasmus-30'] = array(
    'menu_name' => 'menu-erasmus-30',
    'title' => 'Erasmus 30',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-erasmus-30---footer.
  $menus['menu-erasmus-30---footer'] = array(
    'menu_name' => 'menu-erasmus-30---footer',
    'title' => 'Erasmus 30 - Footer',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Erasmus 30');
  t('Erasmus 30 - Footer');

  return $menus;
}
