<?php

/**
 * @file
 * erasmus_national_agencies_events.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function erasmus_national_agencies_events_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'na-events-minisite';
  $context->description = 'NA-Events Minisite (General)';
  $context->tag = 'NA-Events Minisite';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'agenda_na_events' => 'agenda_na_events',
        'na_events_pages' => 'na_events_pages',
        'speakers_na_events' => 'speakers_na_events',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'om_maximenu-om-maximenu-2' => array(
          'module' => 'om_maximenu',
          'delta' => 'om-maximenu-2',
          'region' => 'content_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('NA-Events Minisite');
  t('NA-Events Minisite (General)');
  $export['na-events-minisite'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'na-events-minisite-agenda';
  $context->description = 'NA-Events Minisite (Agenda)';
  $context->tag = 'NA-Events Minisite';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'agenda_na_events' => 'agenda_na_events',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-speaker_na_events_agenda_-block' => array(
          'module' => 'views',
          'delta' => 'speaker_na_events_agenda_-block',
          'region' => 'sidebar_right',
          'weight' => '-10',
        ),
        'views-map_na_events_agenda_-block' => array(
          'module' => 'views',
          'delta' => 'map_na_events_agenda_-block',
          'region' => 'sidebar_right',
          'weight' => '-9',
        ),
      ),
    ),
    'debug' => array(
      'debug' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('NA-Events Minisite');
  t('NA-Events Minisite (Agenda)');
  $export['na-events-minisite-agenda'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'na-events-minisite-agenda-days';
  $context->description = 'NA-Events Minisite (Agenda - days)';
  $context->tag = 'NA-Events Minisite';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'na-events/events' => 'na-events/events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-na_events_days_' => array(
          'module' => 'quicktabs',
          'delta' => 'na_events_days_',
          'region' => 'content',
          'weight' => '-10',
        ),
        'print_ui-print-links' => array(
          'module' => 'print_ui',
          'delta' => 'print-links',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('NA-Events Minisite');
  t('NA-Events Minisite (Agenda - days)');
  $export['na-events-minisite-agenda-days'] = $context;

  return $export;
}
