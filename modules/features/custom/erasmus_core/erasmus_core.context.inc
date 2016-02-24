<?php
/**
 * @file
 * erasmus_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function erasmus_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'calls-sidebar';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'updates' => 'updates',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-updates-block_1' => array(
          'module' => 'views',
          'delta' => 'updates-block_1',
          'region' => 'sidebar_right',
          'weight' => '-10',
        ),
        'block-28' => array(
          'module' => 'block',
          'delta' => '28',
          'region' => 'sidebar_right',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['calls-sidebar'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'not_found_page_404';
  $context->description = '';
  $context->tag = 'Page 404';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        404 => '404',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-26' => array(
          'module' => 'block',
          'delta' => '26',
          'region' => 'content',
          'weight' => '-10',
        ),
        'nexteuropa_europa_search-nexteuropa_europa_search_form' => array(
          'module' => 'nexteuropa_europa_search',
          'delta' => 'nexteuropa_europa_search_form',
          'region' => 'content',
          'weight' => '-9',
        ),
        'block-27' => array(
          'module' => 'block',
          'delta' => '27',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Page 404');
  $export['not_found_page_404'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'programmeguide';
  $context->description = 'programme guide';
  $context->tag = 'theme';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'programme_guide_attached_pages' => 'programme_guide_attached_pages',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-14' => array(
          'module' => 'block',
          'delta' => '14',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('programme guide');
  t('theme');
  $export['programmeguide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'strategic_partnership';
  $context->description = '';
  $context->tag = 'relatedfiles';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/658' => 'node/658',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-document_library-block_26' => array(
          'module' => 'views',
          'delta' => 'document_library-block_26',
          'region' => 'therightcolumn',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('relatedfiles');
  $export['strategic_partnership'] = $context;

  return $export;
}
