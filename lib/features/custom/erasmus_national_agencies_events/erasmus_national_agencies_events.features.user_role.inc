<?php

/**
 * @file
 * erasmus_national_agencies_events.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function erasmus_national_agencies_events_user_default_roles() {
  $roles = array();

  // Exported role: NA-Event Editor.
  $roles['NA-Event Editor'] = (object) array(
    'name' => 'NA-Event Editor',
    'weight' => 4,
  );

  // Exported role: NA-Event Viewer.
  $roles['NA-Event Viewer'] = (object) array(
    'name' => 'NA-Event Viewer',
    'weight' => 5,
  );

  return $roles;
}
