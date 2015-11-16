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
