<?php
/**
 * @file
 * eche_wf.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function eche_wf_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eche_report_page';
  $context->description = '';
  $context->tag = 'ECHE';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*/submission/*/report*' => 'node/*/submission/*/report*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('ECHE');
  $export['eche_report_page'] = $context;

  return $export;
}
