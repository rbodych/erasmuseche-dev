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
  $context->tag = 'Programme Guide, Theme';
  $context->conditions = array(
    'book' => array(
      'values' => array(
        'book-toc-296' => 'book-toc-296',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-19' => array(
          'module' => 'block',
          'delta' => '19',
          'region' => 'header_right',
          'weight' => '-10',
        ),
        'om_maximenu-om-maximenu-2' => array(
          'module' => 'om_maximenu',
          'delta' => 'om-maximenu-2',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'block-13' => array(
          'module' => 'block',
          'delta' => '13',
          'region' => 'featured',
          'weight' => '-8',
        ),
        'easy_breadcrumb-easy_breadcrumb' => array(
          'module' => 'easy_breadcrumb',
          'delta' => 'easy_breadcrumb',
          'region' => 'featured',
          'weight' => '-7',
        ),
        'print_ui-print-links' => array(
          'module' => 'print_ui',
          'delta' => 'print-links',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'webform-client-block-387' => array(
          'module' => 'webform',
          'delta' => 'client-block-387',
          'region' => 'feedbackform',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Programme Guide, Theme');
  t('programme guide');
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
