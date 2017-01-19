<?php
/**
 * @file
 * erasmus_30_year_anniversary_event.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function erasmus_30_year_anniversary_event_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create erasmus_30ya_event content'.
  $permissions['create erasmus_30ya_event content'] = array(
    'name' => 'create erasmus_30ya_event content',
    'roles' => array(
      'Erasmus+ 30 year anniversary: Event editor' => 'Erasmus+ 30 year anniversary: Event editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any erasmus_30ya_event content'.
  $permissions['delete any erasmus_30ya_event content'] = array(
    'name' => 'delete any erasmus_30ya_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own erasmus_30ya_event content'.
  $permissions['delete own erasmus_30ya_event content'] = array(
    'name' => 'delete own erasmus_30ya_event content',
    'roles' => array(
      'Erasmus+ 30 year anniversary: Event editor' => 'Erasmus+ 30 year anniversary: Event editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any erasmus_30ya_event content'.
  $permissions['edit any erasmus_30ya_event content'] = array(
    'name' => 'edit any erasmus_30ya_event content',
    'roles' => array(
      'Erasmus+ 30 year anniversary: Event editor' => 'Erasmus+ 30 year anniversary: Event editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own erasmus_30ya_event content'.
  $permissions['edit own erasmus_30ya_event content'] = array(
    'name' => 'edit own erasmus_30ya_event content',
    'roles' => array(
      'Erasmus+ 30 year anniversary: Event editor' => 'Erasmus+ 30 year anniversary: Event editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
