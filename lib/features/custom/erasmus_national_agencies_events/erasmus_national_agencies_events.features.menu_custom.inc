<?php

/**
 * @file
 * erasmus_national_agencies_events.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function erasmus_national_agencies_events_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-agenda-na-events.
  $menus['menu-agenda-na-events'] = array(
    'menu_name' => 'menu-agenda-na-events',
    'title' => 'Agenda NA-Events',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-na-events-pages.
  $menus['menu-na-events-pages'] = array(
    'menu_name' => 'menu-na-events-pages',
    'title' => 'NA-Events pages',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-speaker-na-events.
  $menus['menu-speaker-na-events'] = array(
    'menu_name' => 'menu-speaker-na-events',
    'title' => 'Speaker NA-Events',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Agenda NA-Events');
  t('NA-Events pages');
  t('Speaker NA-Events');

  return $menus;
}
