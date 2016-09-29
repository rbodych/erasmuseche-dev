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

/**
 * Form alter for dynamic theme variables.
 */
function erasmus_form_system_theme_settings_alter(&$form, &$form_state) {

  $form['abouttitle'] = array(
    '#type' => 'textfield',
    '#title' => t('abouttitle'),
    '#default_value' => theme_get_setting('abouttitle'),
    '#description' => t('Title for the about section.'),
  );
  $form['aboutsubtitle'] = array(
    '#type' => 'textfield',
    '#title' => t('aboutsubtitle'),
    '#default_value' => theme_get_setting('aboutsubtitle'),
    '#description' => t('Subtitle for the about section.'),
  );
  $form['individualstitle'] = array(
    '#type' => 'textfield',
    '#title' => t('individualstitle'),
    '#default_value' => theme_get_setting('individualstitle'),
    '#description' => t('Title for the individuals section.'),
  );
  $form['individualssubtitle'] = array(
    '#type' => 'textfield',
    '#title' => t('individualssubtitle'),
    '#default_value' => theme_get_setting('individualssubtitle'),
    '#description' => t('Subtitle for the individuals section.'),
  );
  $form['organisationstitle'] = array(
    '#type' => 'textfield',
    '#title' => t('organisationstitle'),
    '#default_value' => theme_get_setting('organisationstitle'),
    '#description' => t('Title for organisations section.'),
  );
  $form['organisationssubtitle'] = array(
    '#type' => 'textfield',
    '#title' => t('organisationssubtitle'),
    '#default_value' => theme_get_setting('organisationssubtitle'),
    '#description' => t('Subtitle for the organisations section.'),
  );
  $form['resourcestitle'] = array(
    '#type' => 'textfield',
    '#title' => t('resourcestitle'),
    '#default_value' => theme_get_setting('resourcestitle'),
    '#description' => t('Title for resources section.'),
  );
  $form['resourcessubtitle'] = array(
    '#type' => 'textfield',
    '#title' => t('resourcessubtitle'),
    '#default_value' => theme_get_setting('resourcessubtitle'),
    '#description' => t('Title for resources section.'),
  );
}
