<?php
/**
 * @file
 * eche_text_formats.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function eche_text_formats_filter_default_formats() {
  $formats = array();

  // Exported format: Custom text format.
  $formats['eche_custom_text_format'] = (object) array(
    'format' => 'eche_custom_text_format',
    'name' => 'Custom text format',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'media_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: HTML markup.
  $formats['eche_html_markup'] = (object) array(
    'format' => 'eche_html_markup',
    'name' => 'HTML markup',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <pre> <ul> <ol> <li> <dl> <dt> <dd> <div> <span> <section> <aside> <header> <footer> <table> <th> <tr> <tbody> <thead> <br> <h1> <h2> <h3> <h4> <h5> <h6> <p> <big>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
