<?php
/**
 * @file
 * eche_user.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function eche_user_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-eche-user-menu.
  $menus['menu-eche-user-menu'] = array(
    'menu_name' => 'menu-eche-user-menu',
    'title' => 'Eche user menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Eche user menu');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');

  return $menus;
}
