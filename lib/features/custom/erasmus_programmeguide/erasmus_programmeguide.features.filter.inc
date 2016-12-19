<?php
/**
 * @file
 * erasmus_programmeguide.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function erasmus_programmeguide_filter_default_formats() {
  $formats = array();

  // Exported format: Programme Guide Editor.
  $formats['programme_guide_editor'] = (object) array(
    'format' => 'programme_guide_editor',
    'name' => 'Programme Guide Editor',
    'cache' => 0,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_footnotes' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'footnotes_collapse' => 0,
        ),
      ),
      'filter_tokens' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'video_filter' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'transliteration' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(
          'no_known_transliteration' => '?',
        ),
      ),
      'filter_autop' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(),
      ),
      'toolbox_sanitize' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -40,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
