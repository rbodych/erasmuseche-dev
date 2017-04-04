<?php
/**
 * @file
 * eche_case_study.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function eche_case_study_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eche_resources';
  $context->description = '';
  $context->tag = 'ECHE';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'eche/resources' => 'eche/resources',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-resources_header' => array(
          'module' => 'boxes',
          'delta' => 'resources_header',
          'region' => 'eche_pre_content',
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
  $export['eche_resources'] = $context;

  return $export;
}
