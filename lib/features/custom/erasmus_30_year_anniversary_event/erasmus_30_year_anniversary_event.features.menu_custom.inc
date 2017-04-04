<?php
/**
 * @file
 * erasmus_30_year_anniversary_event.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function erasmus_30_year_anniversary_event_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-erasmus-30---events.
  $menus['menu-erasmus-30---events'] = array(
    'menu_name' => 'menu-erasmus-30---events',
    'title' => 'Erasmus 30 - Events',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Erasmus 30 - Events');

  return $menus;
}
