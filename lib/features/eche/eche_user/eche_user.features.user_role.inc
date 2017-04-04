<?php
/**
 * @file
 * eche_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function eche_user_user_default_roles() {
  $roles = array();

  // Exported role: regular user.
  $roles['regular user'] = (object) array(
    'name' => 'regular user',
    'weight' => 5,
  );

  return $roles;
}
