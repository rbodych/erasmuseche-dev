<?php
/**
 * @file
 * eche_user.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function eche_user_taxonomy_default_vocabularies() {
  return array(
    'higher_education_institutions' => (object) array(
      'name' => 'Higher Education Institutions',
      'machine_name' => 'higher_education_institutions',
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
