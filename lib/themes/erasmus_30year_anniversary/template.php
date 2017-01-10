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
    return '<select' . drupal_attributes($element['#attributes']) . '>' . erasmus_30year_anniversary_form_select_options($element) . '</select>';
  }
  else {
    return '<select' . drupal_attributes($element['#attributes']) . '>' . form_select_options($element) . '</select>';
  }
}

/**
 * Implements form_select_options().
 */
function erasmus_30year_anniversary_form_select_options($element, $choices = NULL) {
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
        . check_plain(t($choice)) . '</option>';
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
    $element['#children'] = theme('field_collection_item__' . str_replace('-', '_', $fc_item['field_30ya_contentrow_type'][0]['#markup']),
      [
        'text' => render($fc_item['field_30ya_contentrow_richtext']),
        'title_field' => render($fc_item['title_field']),
        'media' => render($fc_item['field_30ya_contentrow_media']),
        'type' => $fc_item['field_30ya_contentrow_type'][0]['#markup'],
      ]
    );
  } 
  return $element['#children'];
}
