<?php
/**
 * @file
 * erasmus_30_year_anniversary_story.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function erasmus_30_year_anniversary_story_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create erasmus_30_year_anniversary_stor content'.
  $permissions['create erasmus_30_year_anniversary_stor content'] = array(
    'name' => 'create erasmus_30_year_anniversary_stor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any erasmus_30_year_anniversary_stor content'.
  $permissions['delete any erasmus_30_year_anniversary_stor content'] = array(
    'name' => 'delete any erasmus_30_year_anniversary_stor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own erasmus_30_year_anniversary_stor content'.
  $permissions['delete own erasmus_30_year_anniversary_stor content'] = array(
    'name' => 'delete own erasmus_30_year_anniversary_stor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any erasmus_30_year_anniversary_stor content'.
  $permissions['edit any erasmus_30_year_anniversary_stor content'] = array(
    'name' => 'edit any erasmus_30_year_anniversary_stor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own erasmus_30_year_anniversary_stor content'.
  $permissions['edit own erasmus_30_year_anniversary_stor content'] = array(
    'name' => 'edit own erasmus_30_year_anniversary_stor content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
