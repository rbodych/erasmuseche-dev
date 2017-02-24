<?php

/**
 * @file
 * Page.php.
 *
 * PHP version 5
 *
 * @category Production
 *
 * @package ErasmusCore/Theme
 *
 * @author EAC WEB <EAC-LIST-C4@nomail.ec.europa.eu>
 *
 * @copyright 2016 European-Commission
 *
 * @license http://ec.europa.eu Europa
 * @link NA
 *
 * Ec_resp's theme implementation to display a single Drupal page.
 */

/**
 * Implements theme_select().
 */
function erasmus_30year_anniversary_select($variables) {
  $element = $variables['element'];
  element_set_attributes($element, array('id', 'name', 'size'));
  _form_set_class($element, array('form-select'));

  if ($element['#id'] == 'edit-country') {
    if (count($element['#value']) > 1) {
      $element['#value'] = '';
    }
    return '<select' . drupal_attributes($element['#attributes']) . '>' . _erasmus_30year_anniversary_form_select_options($element) . '</select>';
  }
  else {
    return '<select' . drupal_attributes($element['#attributes']) . '>' . form_select_options($element) . '</select>';
  }
}

/**
 * Implement custom select_options functionality for country select.
 */
function _erasmus_30year_anniversary_form_select_options($element, $choices = NULL) {
  if (!isset($choices)) {
    $choices = $element['#options'];
  }
  // array_key_exists() accommodates the rare event where.
  // $element['#value'] is NULL.
  // isset() fails in this situation.
  $value_valid = isset($element['#value']) || array_key_exists('#value', $element);
  $value_is_array = $value_valid && is_array($element['#value']);
  $options = '';
  foreach ($choices as $key => $choice) {
    if (is_array($choice)) {
      $options .= '<optgroup label="' . check_plain($key) . '">';
      $options .= form_select_options($element, $choice);
      $options .= '</optgroup>';
    }
    elseif (is_object($choice)) {
      $options .= form_select_options($element, $choice->option);
    }
    else {
      $key = (string) $key;
      if ($value_valid && (!$value_is_array && (string) $element['#value'] === $key || ($value_is_array && in_array($key, $element['#value'])))) {
        $selected = ' selected="selected"';
      }
      else {
        $selected = '';
      }
      $options .= '<option class="' .
        drupal_strtolower(drupal_clean_css_identifier($choice)) .
        '" value="' . check_plain($key) . '"' . $selected . '>'
        . check_plain($choice) . '</option>';
    }
  }
  return $options;
}

/**
 * Implements theme_field_collection_view().
 */
function erasmus_30year_anniversary_field_collection_view($variables) {
  $element = $variables['element'];
  $fc_item = $element['entity']['field_collection_item'];
  $fc_item = array_shift($fc_item);
  if (isset($fc_item) && isset($fc_item['field_30ya_contentrow_type'][0]['#markup'])) {
    $disable_auto_columns
      = $fc_item['field_30ya_disable_auto_columns']['#items'][0]['value'];
    if ($disable_auto_columns) {
      $disable_auto_columns = '';
    }
    else {
      $disable_auto_columns = 'enable-auto-columns';
    }
    if (!empty($fc_item['field_30ya_media_thumb'])) {
      $big_uri = $fc_item['field_30ya_contentrow_media'][0]['file']['#item']['uri'];
      $big_uri = file_create_url($big_uri);
      $media = _erasmus_30_year_anniversary_page_popup_media_thumb($big_uri, $fc_item['field_30ya_media_thumb'][0]['file']['#item']['uri']);
      $media = _erasmus_30_year_anniversary_page_add_full_screen_link($media);
    }
    if (isset($fc_item['field_30ya_media_poster'])) {
      $poster = $fc_item['field_30ya_media_poster'];
      if (!empty($poster)) {
        $poster = image_style_url('erasmus_30_year_video_poster_640_370', $poster['#items'][0]['file']->uri);
        $fc_item['field_30ya_contentrow_media'][0]['file']['#files'][0]['poster'] = $poster;
      }
    }
    if (empty($media)) {
      $media = render($fc_item['field_30ya_contentrow_media']);
    }

    $element['#children'] = theme('field_collection_item__' . str_replace('-', '_', $fc_item['field_30ya_contentrow_type'][0]['#markup']),
      [
        'text' => render($fc_item['field_30ya_contentrow_richtext']),
        'title_field' => render($fc_item['title_field']),
        'media' => $media,
        'type' => $fc_item['field_30ya_contentrow_type'][0]['#markup'],
        'disable_auto_columns' => $disable_auto_columns,
      ]
    );
  }
  return $element['#children'];
}

/**
 * Returns HTML for displaying an HTML5 <video> tag.
 *
 * @param array $variables
 *   An associative array containing:
 *   - file: Associative array of file data, which must include "uri".
 *   - controls: Boolean indicating whether or not controls should be displayed.
 *   - autoplay: Boolean indicating whether or not the video should start
 *     playing automatically.
 *   - loop: Boolean indicating whether or not the video should loop.
 *   - muted: Boolean indicating whether or not the sound should be muted.
 *   - width: Width, in pixels, of the video player.
 *   - height: Height, in pixels, of the video player.
 *
 * @ingroup themeable
 */
function erasmus_30year_anniversary_file_entity_file_video($variables) {
  $files = $variables['files'];
  $output = '';

  $video_attributes = array();
  if ($variables['controls']) {
    $video_attributes['controls'] = 'controls';
  }
  if ($variables['autoplay']) {
    $video_attributes['autoplay'] = 'autoplay';
  }
  if ($variables['loop']) {
    $video_attributes['loop'] = 'loop';
  }
  if ($variables['muted']) {
    $video_attributes['muted'] = 'muted';
  }
  if ($variables['width']) {
    $video_attributes['width'] = $variables['width'];
  }
  if ($variables['height']) {
    $video_attributes['height'] = $variables['height'];
  }
  if (!empty($variables['preload'])) {
    $video_attributes['preload'] = $variables['preload'];
  }
  if (isset($variables['files'][0]['poster']) && !empty($variables['files'][0]['poster'])) {
    $video_attributes['poster'] = $variables['files'][0]['poster'];
  }

  $output .= '<video' . drupal_attributes($video_attributes) . '>';
  foreach ($files as $file) {
    $source_attributes = array(
      'src' => file_create_url($file['uri']),
      'type' => $file['filemime'],
    );
    $output .= '<source' . drupal_attributes($source_attributes) . ' />';
  }
  $output .= '</video>';
  return $output;
}
