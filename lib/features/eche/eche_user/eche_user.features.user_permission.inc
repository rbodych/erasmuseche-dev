<?php
/**
 * @file
 * eche_user.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function eche_user_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  return $permissions;
}
