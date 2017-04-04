<?php
/**
 * @file
 * eche_wf_invite.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function eche_wf_invite_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'invite members'.
  $permissions['invite members'] = array(
    'name' => 'invite members',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'regular user' => 'regular user',
    ),
    'module' => 'eche_wf_invite',
  );

  return $permissions;
}
