<?php
/**
 * @file
 * erasmus_30_year_anniversary_story.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function erasmus_30_year_anniversary_story_taxonomy_default_vocabularies() {
  return array(
    'erasmus_30_year_anniversary_monthly_themes' => (object) array(
      'name' => 'Erasmus+ 30 year anniversary: Monthly themes',
      'machine_name' => 'erasmus_30_year_anniversary_monthly_themes',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
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
