<?php
/**
 * @file
 * Theme-settings.php.
 *
 * PHP version 5
 *
 * @category Production
 *
 * @package ErasmusCore/Theme
 *
 * @author EAC WEB <EAC-LIST-C4@nomail.ec.europa.eu>
 *
 * @copyright 2015 European-Commission
 *
 * @license http://ec.europa.eu Europa
 * @link NA
 *
 * Theme setting callbacks for the erasmus theme.
 */

/**
 * Implements hook_form_FORM_ID_alter() for system_theme_settings().
 */
function erasmus_form_system_theme_settings_alter(&$form, &$form_state) {
  $form['videohome_youtube_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Video home Youtube ID'),
    '#default_value' => theme_get_setting('videohome_youtube_id'),
  );
}

/**
 * Helper function that inserts sample content into empty regions.
 */
function erasmus_preprocess_page(&$variables) {
  if (!empty($variables['node']) && !empty($variables['node']->type)) {
    $variables['theme_hook_suggestions'][] = 'page__node__' . $variables['node']->type;
  }
}
