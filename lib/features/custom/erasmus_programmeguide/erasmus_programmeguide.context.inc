<?php
/**
 * @file
 * erasmus_programmeguide.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function erasmus_programmeguide_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'programme_guide';
  $context->description = 'Programme Guide';
  $context->tag = 'Programme Guide';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'programme_guide' => 'programme_guide',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'print_ui-print-links' => array(
          'module' => 'print_ui',
          'delta' => 'print-links',
          'region' => 'content_bottom1',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Programme Guide');
  $export['programme_guide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'programmeguide';
  $context->description = 'programme guide';
  $context->tag = 'theme';
  $context->conditions = array(
    'book' => array(
      'values' => array(
        'book-toc-276' => 'book-toc-276',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'print_ui-print-links' => array(
          'module' => 'print_ui',
          'delta' => 'print-links',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'print-print-top' => array(
          'module' => 'print',
          'delta' => 'print-top',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'print_mail-print_mail-top' => array(
          'module' => 'print_mail',
          'delta' => 'print_mail-top',
          'region' => 'content_bottom',
          'weight' => '-8',
        ),
        'print_pdf-print_pdf-top' => array(
          'module' => 'print_pdf',
          'delta' => 'print_pdf-top',
          'region' => 'content_bottom',
          'weight' => '-7',
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

  return $export;
}
