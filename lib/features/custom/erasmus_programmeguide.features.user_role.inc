<?php
/**
 * @file
 * erasmus_programmeguide.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function erasmus_programmeguide_user_default_roles() {
  $roles = array();

  // Exported role: Programme Guide.
  $roles['Programme Guide'] = (object) array(
    'name' => 'Programme Guide',
    'weight' => 2,
  );

  return $roles;
}
