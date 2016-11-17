<?php

/**
 * @file
 * erasmus_national_agencies_events.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function erasmus_national_agencies_events_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'day_1_monday_12_december_2016';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Day 1 - Monday 12 December 2016';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'day_1_na_events',
      'display' => 'block',
      'args' => '',
      'title' => 'Higher Education (international dimension)',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'day_1_na_events',
      'display' => 'block_2',
      'args' => '',
      'title' => 'Higher Education (intra-EU)',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'day_1_na_events',
      'display' => 'block_3',
      'args' => '',
      'title' => 'School Education',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'day_1_na_events',
      'display' => 'block_4',
      'args' => '',
      'title' => 'Adult Education',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'day_1_na_events',
      'display' => 'block_5',
      'args' => '',
      'title' => 'Vocational Education and Training',
      'weight' => '-96',
      'type' => 'view',
    ),
    5 => array(
      'vid' => 'timeline_na_events_agenda_day_1_',
      'display' => 'block_5',
      'args' => '',
      'title' => 'Youth',
      'weight' => '-95',
      'type' => 'view',
    ),
    6 => array(
      'vid' => 'day_1_na_events',
      'display' => 'block_7',
      'args' => '',
      'title' => 'Directors session',
      'weight' => '-94',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Excel';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Adult Education');
  t('Day 1 - Monday 12 December 2016');
  t('Directors session');
  t('Higher Education (international dimension)');
  t('Higher Education (intra-EU)');
  t('School Education');
  t('Vocational Education and Training');
  t('Youth');

  $export['day_1_monday_12_december_2016'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'day_2_tuesday_13_december_2016';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Day 2 - Tuesday 13 December 2016';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'day_2_na_events',
      'display' => 'block',
      'args' => '',
      'title' => 'Higher Education (international dimension)',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'day_2_na_events',
      'display' => 'block_2',
      'args' => '',
      'title' => 'Higher Education (intra-EU)',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'day_2_na_events',
      'display' => 'block_3',
      'args' => '',
      'title' => 'School Education',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'day_2_na_events',
      'display' => 'block_4',
      'args' => '',
      'title' => 'Adult Education',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'day_2_na_events',
      'display' => 'block_5',
      'args' => '',
      'title' => 'Vocational Education and Training',
      'weight' => '-96',
      'type' => 'view',
    ),
    5 => array(
      'vid' => 'day_2_na_events',
      'display' => 'block_5',
      'args' => '',
      'title' => 'Youth',
      'weight' => '-95',
      'type' => 'view',
    ),
    6 => array(
      'vid' => 'day_2_na_events',
      'display' => 'block_7',
      'args' => '',
      'title' => 'Directors session',
      'weight' => '-94',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Excel';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Adult Education');
  t('Day 2 - Tuesday 13 December 2016');
  t('Directors session');
  t('Higher Education (international dimension)');
  t('Higher Education (intra-EU)');
  t('School Education');
  t('Vocational Education and Training');
  t('Youth');

  $export['day_2_tuesday_13_december_2016'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'day_3_wednesday_14_december_2016';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Day 3 - Wednesday 14 December 2016';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'day_3_na_events',
      'display' => 'block',
      'args' => '',
      'title' => 'Higher Education (international dimension)',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'day_3_na_events',
      'display' => 'block_2',
      'args' => '',
      'title' => 'Higher Education (intra-EU)',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'day_3_na_events',
      'display' => 'block_3',
      'args' => '',
      'title' => 'School Education',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'day_3_na_events',
      'display' => 'block_5',
      'args' => '',
      'title' => 'Adult Education',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'day_3_na_events',
      'display' => 'block_4',
      'args' => '',
      'title' => 'Vocational Education and Training',
      'weight' => '-96',
      'type' => 'view',
    ),
    5 => array(
      'vid' => 'day_3_na_events',
      'display' => 'block_6',
      'args' => '',
      'title' => 'Youth',
      'weight' => '-95',
      'type' => 'view',
    ),
    6 => array(
      'vid' => 'day_3_na_events',
      'display' => 'block_7',
      'args' => '',
      'title' => 'Directors session',
      'weight' => '-94',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Excel';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Adult Education');
  t('Day 3 - Wednesday 14 December 2016');
  t('Directors session');
  t('Higher Education (international dimension)');
  t('Higher Education (intra-EU)');
  t('School Education');
  t('Vocational Education and Training');
  t('Youth');

  $export['day_3_wednesday_14_december_2016'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'day_4_thursday_15_december_2016';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Day 4 - Thursday 15 December 2016';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'day_4_na_events',
      'display' => 'block',
      'args' => '',
      'title' => 'Higher Education (international dimension)',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'day_4_na_events',
      'display' => 'block_2',
      'args' => '',
      'title' => 'Higher Education (intra-EU)',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'day_4_na_events',
      'display' => 'block_3',
      'args' => '',
      'title' => 'School Education',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'day_4_na_events',
      'display' => 'block_5',
      'args' => '',
      'title' => 'Adult Education',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'day_4_na_events',
      'display' => 'block_4',
      'args' => '',
      'title' => 'Vocational Education and Training',
      'weight' => '-96',
      'type' => 'view',
    ),
    5 => array(
      'vid' => 'day_4_na_events',
      'display' => 'block_6',
      'args' => '',
      'title' => 'Youth',
      'weight' => '-95',
      'type' => 'view',
    ),
    6 => array(
      'vid' => 'day_4_na_events',
      'display' => 'block_7',
      'args' => '',
      'title' => 'Directors session',
      'weight' => '-94',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Excel';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Adult Education');
  t('Day 4 - Thursday 15 December 2016');
  t('Directors session');
  t('Higher Education (international dimension)');
  t('Higher Education (intra-EU)');
  t('School Education');
  t('Vocational Education and Training');
  t('Youth');

  $export['day_4_thursday_15_december_2016'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'day_5_friday_16_december_2016';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Day 5 - Friday 16 December 2016';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'day_5_na_events',
      'display' => 'block',
      'args' => '',
      'title' => 'Higher Education (international dimension)',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'day_5_na_events',
      'display' => 'block_2',
      'args' => '',
      'title' => 'Higher Education (intra-EU)',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'day_5_na_events',
      'display' => 'block_3',
      'args' => '',
      'title' => 'School Education',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'day_5_na_events',
      'display' => 'block_5',
      'args' => '',
      'title' => 'Adult Education',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'day_5_na_events',
      'display' => 'block_4',
      'args' => '',
      'title' => 'Vocational Education and Training',
      'weight' => '-96',
      'type' => 'view',
    ),
    5 => array(
      'vid' => 'day_5_na_events',
      'display' => 'block_6',
      'args' => '',
      'title' => 'Youth',
      'weight' => '-95',
      'type' => 'view',
    ),
    6 => array(
      'vid' => 'day_5_na_events',
      'display' => 'block_7',
      'args' => '',
      'title' => 'Directors session',
      'weight' => '-94',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Excel';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Adult Education');
  t('Day 5 - Friday 16 December 2016');
  t('Directors session');
  t('Higher Education (international dimension)');
  t('Higher Education (intra-EU)');
  t('School Education');
  t('Vocational Education and Training');
  t('Youth');

  $export['day_5_friday_16_december_2016'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'na_events_days_';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'NA-Events (days)';
  $quicktabs->tabs = array(
    0 => array(
      'machine_name' => 'day_1_monday_12_december_2016',
      'title' => 'Day 1 (Mon 12/12)',
      'weight' => '-100',
      'type' => 'qtabs',
    ),
    1 => array(
      'machine_name' => 'day_2_tuesday_13_december_2016',
      'title' => 'Day 2 (Tue 13/12)',
      'weight' => '-99',
      'type' => 'qtabs',
    ),
    2 => array(
      'machine_name' => 'day_3_wednesday_14_december_2016',
      'title' => 'Day 3 (Wed 14/12)',
      'weight' => '-98',
      'type' => 'qtabs',
    ),
    3 => array(
      'machine_name' => 'day_4_thursday_15_december_2016',
      'title' => 'Day 4 (Thu 15/12)',
      'weight' => '-97',
      'type' => 'qtabs',
    ),
    4 => array(
      'machine_name' => 'day_5_friday_16_december_2016',
      'title' => 'Day 5 (Fri 16/12)',
      'weight' => '-96',
      'type' => 'qtabs',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Arrows';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Day 1 (Mon 12/12)');
  t('Day 2 (Tue 13/12)');
  t('Day 3 (Wed 14/12)');
  t('Day 4 (Thu 15/12)');
  t('Day 5 (Fri 16/12)');
  t('NA-Events (days)');

  $export['na_events_days_'] = $quicktabs;

  return $export;
}
