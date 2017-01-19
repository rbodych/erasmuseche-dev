<?php
/**
 * @file
 * erasmus_30_year_anniversary_hero.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function erasmus_30_year_anniversary_hero_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'erasmus_30_year_hero_homepage';
  $ds_view_mode->label = 'Erasmus+ 30 year: hero homepage';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['erasmus_30_year_hero_homepage'] = $ds_view_mode;

  return $export;
}
