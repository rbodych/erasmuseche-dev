<?php
/**
 * @file
 * Admin form.
 */

/**
 * Admin form.
 */
function erasmus_30ya_core_admin() {
  $form = [];
  $form['story'] = [
    '#type' => 'fieldset',
    '#title' => t('Story settings (Monthly theme)'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  ];
  $form['mail'] = [
    '#type' => 'fieldset',
    '#title' => t('Mail settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  ];
  $form['social'] = [
    '#type' => 'fieldset',
    '#title' => t('Social settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  ];
  $form['general'] = [
    '#type' => 'fieldset',
    '#title' => t('General settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  ];
  $monthly_themes = _erasmus_30ya_core_admin_get_monthly_themes();
  $form['story']['erasmus_30ya_core_current_theme'] = [
    '#type' => 'select',
    '#title' => t('Current monthly theme'),
    '#options' => $monthly_themes,
    '#default_value' => variable_get('erasmus_30ya_core_current_theme', ''),
    '#required' => TRUE,
  ];
  $form['mail']['erasmus_30ya_core_share_story_mail_to'] = [
    '#type' => 'textfield',
    '#title' => t('Share story TO email address'),
    '#default_value' => variable_get('erasmus_30ya_core_share_story_mail_to', ''),
    '#required' => TRUE,
  ];
  $form['mail']['erasmus_30ya_core_share_story_mail_from'] = [
    '#type' => 'textfield',
    '#title' => t('Share story FROM email address'),
    '#default_value' => variable_get('erasmus_30ya_core_share_story_mail_from', ''),
    '#required' => TRUE,
  ];
  $form['social']['erasmus_30ya_core_hashtag'] = [
    '#type' => 'textfield',
    '#title' => t('Hashtag'),
    '#default_value' => variable_get('erasmus_30ya_core_hashtag', 'ErasmusPlus'),
    '#required' => TRUE,
  ];
  $form['social']['erasmus_30ya_core_twitter_url'] = [
    '#type' => 'textfield',
    '#title' => t('Twitter url'),
    '#default_value' => variable_get('erasmus_30ya_core_twitter_url',
    'https://twitter.com/EUErasmusPlus'),
    '#required' => TRUE,
  ];
  $form['social']['erasmus_30ya_core_facebook_url'] = [
    '#type' => 'textfield',
    '#title' => t('Facebook url'),
    '#default_value' => variable_get('erasmus_30ya_core_facebook_url',
    'https://www.facebook.com/EUErasmusPlusProgramme/'),
    '#required' => TRUE,
  ];
  $twitterConfig = [
    'consumer_secret' => 'Twitter Consumer secret',
    'consumer_key' => 'Twitter conumser key',
    'access_token' => 'Twitter access token',
    'access_token_secret' => 'Twitter access token secret',
    'twitter_get_api_url' => 'Twitter API url',
  ];
  foreach ($twitterConfig as $tw_conf => $tw_conf_name) {
    $form['social']['erasmus_30ya_core_tw_' . $tw_conf] = [
      '#type' => 'textfield',
      '#title' => $tw_conf_name,
      '#default_value' => variable_get('erasmus_30ya_core_tw_' . $tw_conf, FALSE),
    ];
  }
  $fbConfig = [
    'page_id' => 'Facebook page id',
    'app_id' => 'Facebook app id',
    'app_secret' => 'Facebook app secret',
  ];
  foreach ($fbConfig as $fb_conf => $fb_conf_name) {
    $form['social']['erasmus_30ya_core_fb_' . $fb_conf] = [
      '#type' => 'textfield',
      '#title' => $fb_conf_name,
      '#default_value' => variable_get('erasmus_30ya_core_fb_' . $fb_conf, '630809920303095'),
    ];
  }
  $form['general']['erasmus_30ya_core_hide_share_story'] = [
    '#type' => 'checkbox',
    '#title' => t('Hide share story'),
    '#default_value' => variable_get('erasmus_30ya_core_hide_share_story', FALSE),
  ];
  return system_settings_form($form);
}

/**
 * Retrieve all monthly theme options.
 */
function _erasmus_30ya_core_admin_get_monthly_themes() {
  $vocabulary
    = taxonomy_vocabulary_machine_name_load('erasmus_30_year_anniversary_monthly_themes');
  $tree = taxonomy_get_tree($vocabulary->vid);
  $terms = [];
  foreach ($tree as $term) {
    $terms[$term->tid] = $term->name;
  }
  return $terms;
}
