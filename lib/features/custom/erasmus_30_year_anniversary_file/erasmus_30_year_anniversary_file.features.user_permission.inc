<?php
/**
 * @file
 * erasmus_30_year_anniversary_file.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function erasmus_30_year_anniversary_file_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create erasmus_30_year_anniversary_file content'.
  $permissions['create erasmus_30_year_anniversary_file content'] = array(
    'name' => 'create erasmus_30_year_anniversary_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any erasmus_30_year_anniversary_file content'.
  $permissions['delete any erasmus_30_year_anniversary_file content'] = array(
    'name' => 'delete any erasmus_30_year_anniversary_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own erasmus_30_year_anniversary_file content'.
  $permissions['delete own erasmus_30_year_anniversary_file content'] = array(
    'name' => 'delete own erasmus_30_year_anniversary_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in erasmus_30_year_anniversary_file_tags'.
  $permissions['delete terms in erasmus_30_year_anniversary_file_tags'] = array(
    'name' => 'delete terms in erasmus_30_year_anniversary_file_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any erasmus_30_year_anniversary_file content'.
  $permissions['edit any erasmus_30_year_anniversary_file content'] = array(
    'name' => 'edit any erasmus_30_year_anniversary_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own erasmus_30_year_anniversary_file content'.
  $permissions['edit own erasmus_30_year_anniversary_file content'] = array(
    'name' => 'edit own erasmus_30_year_anniversary_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in erasmus_30_year_anniversary_file_tags'.
  $permissions['edit terms in erasmus_30_year_anniversary_file_tags'] = array(
    'name' => 'edit terms in erasmus_30_year_anniversary_file_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
