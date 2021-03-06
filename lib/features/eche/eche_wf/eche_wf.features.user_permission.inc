<?php
/**
 * @file
 * eche_wf.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function eche_wf_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'regular user' => 'regular user',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'regular user' => 'regular user',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'administer webform revisions'.
  $permissions['administer webform revisions'] = array(
    'name' => 'administer webform revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'regular user' => 'regular user',
    ),
    'module' => 'webform_revisions',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'regular user' => 'regular user',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete webform revisions'.
  $permissions['delete webform revisions'] = array(
    'name' => 'delete webform revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'regular user' => 'regular user',
    ),
    'module' => 'webform_revisions',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit webform components'.
  $permissions['edit webform components'] = array(
    'name' => 'edit webform components',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'revert webform revisions'.
  $permissions['revert webform revisions'] = array(
    'name' => 'revert webform revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'regular user' => 'regular user',
    ),
    'module' => 'webform_revisions',
  );

  // Exported permission: 'view webform revisions'.
  $permissions['view webform revisions'] = array(
    'name' => 'view webform revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'regular user' => 'regular user',
    ),
    'module' => 'webform_revisions',
  );

  return $permissions;
}
