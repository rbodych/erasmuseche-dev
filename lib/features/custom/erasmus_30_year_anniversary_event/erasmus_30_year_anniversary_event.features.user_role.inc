<?php
/**
 * @file
 * erasmus_30_year_anniversary_event.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function erasmus_30_year_anniversary_event_user_default_roles() {
  $roles = array();

  // Exported role: Erasmus+ 30 year anniversary: Event editor.
  $roles['Erasmus+ 30 year anniversary: Event editor'] = (object) array(
    'name' => 'Erasmus+ 30 year anniversary: Event editor',
    'weight' => 30,
  );

  return $roles;
}
