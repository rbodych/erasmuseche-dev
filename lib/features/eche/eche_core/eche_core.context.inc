<?php
/**
 * @file
 * eche_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function eche_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eche_about';
  $context->description = '';
  $context->tag = 'ECHE';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'eche/about' => 'eche/about',
        'eche/video-tutorials' => 'eche/video-tutorials',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-about-eche' => array(
          'module' => 'menu',
          'delta' => 'menu-about-eche',
          'region' => 'eche_first_sidebar',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'eche',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('ECHE');
  $export['eche_about'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eche_homepage';
  $context->description = '';
  $context->tag = 'ECHE';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'eche' => 'eche',
        'eche_en' => 'eche_en',
        'content/eche_en' => 'content/eche_en',
        'eche_*' => 'eche_*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-eche_homepage_blocks-block' => array(
          'module' => 'views',
          'delta' => 'eche_homepage_blocks-block',
          'region' => 'eche_top_content',
          'weight' => '-10',
        ),
        'views-eche_homepage_blocks-block_2' => array(
          'module' => 'views',
          'delta' => 'eche_homepage_blocks-block_2',
          'region' => 'eche_bottom_content',
          'weight' => '-10',
        ),
        'views-eche_homepage_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'eche_homepage_blocks-block_1',
          'region' => 'eche_homepage_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('ECHE');
  $export['eche_homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eche_sitewide';
  $context->description = '';
  $context->tag = 'ECHE';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'case_study' => 'case_study',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'eche' => 'eche',
        'eche/*' => 'eche/*',
        'self-assesment' => 'self-assesment',
        'rectors-self-assesment' => 'rectors-self-assesment',
        'node/*/submission/*/report' => 'node/*/submission/*/report',
        'node/*/submission/*/report-overview' => 'node/*/submission/*/report-overview',
        'node/*/submission/*/combined' => 'node/*/submission/*/combined',
        'node/*/submission/*/delete' => 'node/*/submission/*/delete',
        'user/my-submissions' => 'user/my-submissions',
        'user/shared-with-me' => 'user/shared-with-me',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-eche-navigation' => array(
          'module' => 'menu',
          'delta' => 'menu-eche-navigation',
          'region' => 'eche_top_navigation',
          'weight' => '-10',
        ),
        'menu-menu-eche-user-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-eche-user-menu',
          'region' => 'eche_top_navigation',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('ECHE');
  $export['eche_sitewide'] = $context;

  return $export;
}
