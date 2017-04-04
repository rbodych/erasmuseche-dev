<?php
/**
 * @file
 * eche_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function eche_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create eche content'.
  $permissions['create eche content'] = array(
    'name' => 'create eche content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any eche content'.
  $permissions['delete any eche content'] = array(
    'name' => 'delete any eche content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own eche content'.
  $permissions['delete own eche content'] = array(
    'name' => 'delete own eche content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any eche content'.
  $permissions['edit any eche content'] = array(
    'name' => 'edit any eche content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own eche content'.
  $permissions['edit own eche content'] = array(
    'name' => 'edit own eche content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
