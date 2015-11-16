<?php
/**
 * @file
 * erasmus_core.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function erasmus_core_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'programme_guide_importer';
  $feeds_importer->config = array(
    'name' => 'Programme Guide Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'HtmlImportFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm HTM',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'HtmlImportParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'HtmlImportProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'content',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'footnotes',
            'target' => 'field_footnotes',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'book_id',
            'target' => 'field_publication_parent:nid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'programme_guide_attached_pages',
      ),
    ),
    'content_type' => 'programme_guide',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['programme_guide_importer'] = $feeds_importer;

  return $export;
}
