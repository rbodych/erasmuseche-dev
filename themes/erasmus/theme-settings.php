<?php

/**
 * @file
 * Theme setting callbacks for the erasmus theme.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * @param $form
 *   The form.
 * @param $form_state
 *   The form state.
 */
function erasmus_form_system_theme_settings_alter(&$form, &$form_state) {
  $form['videohome_youtube_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Video home Youtube ID'),
    '#default_value' => theme_get_setting('videohome_youtube_id'),
  );
}
