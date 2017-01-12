<?php
/**
 * @file
 * erasmus_30_year_anniversary_newsletter.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function erasmus_30_year_anniversary_newsletter_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'erasmus_30_years_anniversary_campaign_newsletter';
  $context->description = '';
  $context->tag = 'Erasmus 30 year';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'anniversary/newsletter' => 'anniversary/newsletter',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-26' => array(
          'module' => 'block',
          'delta' => '26',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Erasmus 30 year');
  $export['erasmus_30_years_anniversary_campaign_newsletter'] = $context;

  return $export;
}
