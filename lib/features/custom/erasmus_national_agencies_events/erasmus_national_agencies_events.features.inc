<?php

/**
 * @file
 * erasmus_national_agencies_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function erasmus_national_agencies_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function erasmus_national_agencies_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function erasmus_national_agencies_events_node_info() {
  $items = array(
    'agenda_na_events' => array(
      'name' => t('Agenda NA-Events'),
      'base' => 'node_content',
      'description' => t('This content type host the agenda related the DG EAC Erasmus+ National Agencies event. This events are linked with field-specific sessions: Higher Education, School Education, Adult Education, Vocacional Education and Youth).'),
      'has_title' => '1',
      'title_label' => t('Event/Conference name'),
      'help' => '',
    ),
    'na_events_pages' => array(
      'name' => t('NA-Events pages'),
      'base' => 'node_content',
      'description' => t('General informative pages for NA-Events'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'speakers_na_events' => array(
      'name' => t('Speakers NA-Events'),
      'base' => 'node_content',
      'description' => t('This content type store the information related Speakers for the DG EAC Erasmus+ National Agencies event. This content generates taxonomy to be implemented within the Agenda NA-Events content type.'),
      'has_title' => '1',
      'title_label' => t('Speaker (First Name + Last Name)'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
