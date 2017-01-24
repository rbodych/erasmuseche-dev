<?php
/**
 * @file
 * erasmus_30_year_anniversary_menu.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function erasmus_30_year_anniversary_menu_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'erasmus_30_years_anniversary_campaign_global';
  $context->description = 'Erasmus 30 years - Campaign site global';
  $context->tag = 'Erasmus 30 years';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-erasmus-30' => array(
          'module' => 'menu',
          'delta' => 'menu-erasmus-30',
          'region' => 'featured',
          'weight' => '-8',
        ),
        'block-27' => array(
          'module' => 'block',
          'delta' => '27',
          'region' => 'featured',
          'weight' => '-7',
        ),
        'menu-menu-erasmus-30---footer' => array(
          'module' => 'menu',
          'delta' => 'menu-erasmus-30---footer',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Erasmus 30 years');
  t('Erasmus 30 years - Campaign site global');
  $export['erasmus_30_years_anniversary_campaign_global'] = $context;

  return $export;
}
