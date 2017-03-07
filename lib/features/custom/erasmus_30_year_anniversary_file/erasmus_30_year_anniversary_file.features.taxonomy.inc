<?php
/**
 * @file
 * erasmus_30_year_anniversary_file.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function erasmus_30_year_anniversary_file_taxonomy_default_vocabularies() {
  return array(
    'erasmus_30_year_anniversary_file_tags' => (object) array(
      'name' => 'Erasmus+ 30 year anniversary: File Tags',
      'machine_name' => 'erasmus_30_year_anniversary_file_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
      'entity_type' => 'taxonomy_vocabulary',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
