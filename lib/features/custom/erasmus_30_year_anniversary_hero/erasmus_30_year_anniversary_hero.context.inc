<?php
/**
 * @file
 * erasmus_30_year_anniversary_hero.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function erasmus_30_year_anniversary_hero_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'erasmus_30_years_anniversary_campaign_all_heroes';
  $context->description = '';
  $context->tag = 'Erasmus 30 years';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'erasmus_30_year_anniversary_hero' => 'erasmus_30_year_anniversary_hero',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'anniversary/discover-erasmusplus' => 'anniversary/discover-erasmusplus',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-5580fbbca9e66bf72f099f08b278c67d' => array(
          'module' => 'views',
          'delta' => '5580fbbca9e66bf72f099f08b278c67d',
          'region' => 'content_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Erasmus 30 years');
  $export['erasmus_30_years_anniversary_campaign_all_heroes'] = $context;

  return $export;
}
