<?php
/**
 * @file
 * Helper file.
 */

/**
 * Will count the participants and add them.
 */
function _erasmus_30_year_anniversary_event_count_participants_per_country($view) {
  $allowed_nodes = [];
  $currentCountry = $view->exposed_raw_input['country'];
  $query = db_select('field_data_field_30ya_country', 'u')
    ->fields('u', array('entity_id'))
    ->condition('u.field_30ya_country_tid', $currentCountry);
  $result = $query->execute();
  foreach ($result as $record) {
    $allowed_nodes[] = $record->entity_id;
  }
  $participants = 0;
  $events = 0;
  foreach ($allowed_nodes as $node) {
    $query = db_select('field_data_field_30ya_expected_participants', 'u')
      ->fields('u', array('field_30ya_expected_participants_value'))
      ->condition('u.entity_id', $node);
    $result = $query->execute();
    foreach ($result as $record) {
      $participants += $record->field_30ya_expected_participants_value;
    }
    $query_event = db_select('node', 'n')
      ->condition('n.type', 'erasmus_30ya_event')
      ->condition('n.nid', $node)
      ->condition('n.status', 1);
    $events += $query_event->countQuery()->execute()->fetchField();
  }
  return theme('erasmus_30_year_anniversary_event_header',
    [
      'countries' => NULL,
      'events' => number_format($events, 0, ',', ' '),
      'participants' => number_format($participants, 0, ',', ' '),
      'label' => t('Search results:'),
    ]
  );
}

/**
 * Counts all the events and participants of all events.
 */
function _erasmus_30_year_anniversary_event_retrieve_global_event_block_content() {
  $participants = 0;
  $query = db_select('field_data_field_30ya_expected_participants', 'u')
    ->fields('u', array('field_30ya_expected_participants_value'));
  $result = $query->execute();
  foreach ($result as $record) {
    $participants += $record->field_30ya_expected_participants_value;
  }

  $query_event = db_select('node', 'n')
    ->condition('n.type', 'erasmus_30ya_event')
    ->condition('n.status', 1);
  $amount_of_events = $query_event->countQuery()->execute()->fetchField();

  return theme('erasmus_30_year_anniversary_event_header',
    [
      'countries' => '33',
      'events' => number_format($amount_of_events, 0, ',', ' '),
      'participants' => number_format($participants, 0, ',', ' '),
      'label' => t('Total results:'),
    ]
  );
}
