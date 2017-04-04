<?php
/**
 * @file
 * Template.php.
 *
 * PHP version 5
 *
 * @category Production
 *
 * @package ErasmusCore/Theme
 *
 * @author EAC WEB <EAC-LIST-C4@nomail.ec.europa.eu>
 *
 * @copyright 2015 European-Commission
 *
 * @license http://ec.europa.eu Europa
 * @link NA
 *
 * Ec_resp's theme implementation to display a single Drupal page.
 */

/**
 * Implements template_preprocess_html().
 */
function erasmus_preprocess_html(&$variables) {
  $settings['erasmus']['videohome_youtube_id'] = theme_get_setting('videohome_youtube_id');
  drupal_add_js($settings, 'setting');
  drupal_add_js(
    drupal_get_path('theme', 'erasmus') . '/scripts/videohome.js', array(
      'scope' => 'footer',
    )
  );
}

/**
 * Process variables for om_maximenu_submenu.tpl.php.
 */
function erasmus_preprocess_om_maximenu_submenu(&$variables) {
  global $base_url;
  $path_to_theme = drupal_get_path('theme', 'erasmus');
  $empty = '';
  $variables['base_url'] = $base_url;
  global $language;
  $variables['language'] = $language;
  $variables['namesite'] = t('Erasmus+');
  $variables['facebook'] = l(
    $empty, "https://www.facebook.com/EUErasmusPlusProgramme",
    array('attributes' => array('class' => 'icon facebook'))
  );
  $variables['twitter'] = l(
    $empty, "https://twitter.com/EUErasmusPlus",
    array('attributes' => array('class' => 'icon twitter'))
  );
  $variables['gplus'] = l(
    $empty, "https://plus.google.com/communities/115077875344973792963",
    array('attributes' => array('class' => 'icon gplus'))
  );
  $title = $empty;
  $url = 'https://ec.europa.eu/coreservices/mailing/index.cfm';
  $options = array(
    'attributes' => array(
      'class' => 'fa fa-newspaper-o',
    ),
    'absolute' => TRUE,
    'query' => array(
      'controller' => 'register',
      'action' => 'index',
      'serviceid' => 1756,
      'pk_campaign' => 'NewErasmus',
      'pk_kwd' => 'NewsletterDesktop',
    ),
  );
  $variables['iconnewsletter'] = l($title, $url, $options);

  $title = t('Newsletter');
  $url = 'https://ec.europa.eu/coreservices/mailing/index.cfm';
  $options = array(
    'attributes' => array(
      'class' => 'newsletter',
    ),
    'absolute' => TRUE,
    'query' => array(
      'controller' => 'register',
      'action' => 'index',
      'serviceid' => 1756,
      'pk_campaign' => 'NewErasmus',
      'pk_kwd' => 'NewsletterDesktop',
    ),
  );
  $variables['newsletterdesktop'] = l($title, $url, $options);

  $title = t('Newsletter');
  $url = 'https://ec.europa.eu/coreservices/mailing/index.cfm';
  $options = array(
    'attributes' => array(
      'class' => 'nav-tool-expand',
      'data-expand' => 'mobile-nav-newsletter',
    ),
    'absolute' => TRUE,
    'query' => array(
      'controller' => 'register',
      'action' => 'index',
      'serviceid' => 1756,
      'pk_campaign' => 'NewErasmus',
      'pk_kwd' => 'NewsletterDesktop',
    ),
  );
  $variables['newslettermobile'] = l($title, $url, $options);

  $variables['searchlink'] = l(
    t('Search'), $base_url . "/search/site",
    array(
      'attributes' => array(
        'class' => 'nav-tool-expand',
        'data-expand' => 'mobile-nav-newsletter',
      ),
    )
  );
  $variables['lang'] = l(
    t('English'), '',
    array(
      'fragment' => 'tablang',
      'external' => TRUE,
      'attributes' => array(
        'class' => 'nav-tool-expand',
        'data-expand' => 'mobile-nav-lg',
      ),
    )
  );
  $variables['langintro'] = t(
    'The site is currently only available in English, 
    other languages will be available later.'
  );
  $variables['langlink'] = l(
    t('The previous version'), "http://ec.europa.eu/programmes
    /erasmus-plus/index_en.htm&pk_campaign=NewErasmus&pk_kwd=LinkToOldVersion",
    array('attributes' => array('class' => 'linklanguage'))
  );
  $variables['langsummary'] = t(
    '(available in all languages) has been archived 
    and will be taken offline on 01/01/2016.'
  );
  $variables['eventlink'] = l(
    t('Events'), 'all-events',
    array('attributes' => array('class' => array('linklanguage')))
  );
  $variables['callslink'] = l(
    t('Calls'), 'calls-for-proposals-tenders',
    array('attributes' => array('class' => array('linklanguage')))
  );
  $variables['newslink'] = l(
    t('News'), 'all-news', array(
      'attributes' => array(
        'class' => array('linklanguage'),
      ),
    )
  );
  $variables['nav_ico'] = theme(
    'image', array(
      'path' => $base_url . '/' . $path_to_theme . '/images/mobile-nav-ico.svg',
    )
  );
  $variables['flat_ec_logo'] = theme(
    'image', array(
      'path' => $base_url . '/' . $path_to_theme . '/images/mobile-flat-ec-logo.svg',
    )
  );
  $variables['logo_ce_en'] = theme(
    'image', array(
      'path' => $base_url . '/' . $path_to_theme . '/images/logo_ce-en.svg',
    )
  );
}

/**
 * Implements template_preprocess_page().
 */
function erasmus_preprocess_page(&$variables, $hook) {
  $header = drupal_get_http_header("status");
  if ($header == "404 Not Found") {
    $variables['theme_hook_suggestions'][] = 'page__404';
  }
  global $base_url;
  $variables['base_url'] = $base_url;
  global $language;
  $variables['is_newlayoutr'] = FALSE;
  $variables['language'] = $language;
  $variables['abouttitle'] = t('About');
  $variables['aboutsubtitle'] = t("Erasmus+ is the EU's programme to support education, training, youth and sport in Europe. Its budget of €14.7 billion will provide opportunities for over 4 million Europeans to study, train, gain experience, and volunteer abroad.");
  $variables['individualstitle'] = t('Opportunities for individuals');
  $variables['individualssubtitle'] = t('Erasmus+ has opportunities for people of all ages, helping them develop and share knowledge and experience at institutions and organisations in different countries');
  $variables['organisationstitle'] = t('Opportunities for organisations');
  $variables['organisationssubtitle'] = t('Erasmus+ has opportunities for a wide range of organisations including universities, education and training providers, think thanks, research organisations, and private businesses.');
  $variables['resourcestitle'] = t('Resources');
  $variables['resourcessubtitle'] = t("Key tools and documents for organisations and individuals that you\'ll need to get started with Erasmus+");
  $variables['contacttitle'] = t('Contact');
  $variables['contactsubtitle'] = t('For any questions not answered in the Programme Guide, you can contact National Agencies, National Offices or the European Commission.');
  $variables['submenu'] = t('Opportunities');
  $variables['submenuabout'] = t('About');
  $variables['submenuresources'] = t('Resources');
  $variables['contactsub'] = t('Contact points');
  $variables['modallefttitlelineone'] = t('Changing lives,');
  $variables['modallefttitlelinetwo'] = t('opening minds');
  $variables['modalrighttext'] = t(
    'Over the past few months, we have been working very hard on a 
        complete overhaul to make our site easier to navigate, 
        more user-friendly and mobile-compatible'
  );
  $variables['$menunewsletter'] = l(
    t('Subscribe to our newsletter'),
    "https://ec.europa.eu/coreservices/mailing/index.cfm?
        controller=register&action=index&serviceid=1756&pk_campaign=
        SubscribeNewsletter&pk_kwd=Modal",
    array(
      'attributes' => array(
        'class' => 'link-modal',
        'align' => 'center',
      ),
    )
  );

  $variables['modalclose'] = t('Explore the new site');

  $variables['modalnewsletter'] = l(
    t('Subscribe to our newsletter'),
    "https://ec.europa.eu/coreservices/mailing/index.cfm?controller=register&
    action=index&serviceid=1756&pk_campaign=SubscribeNewsletter&pk_kwd=Modal",
    array(
      'attributes' => array(
        'class' => 'link-modal',
        'align' => 'center',
      ),
    )
  );
  $variables['updatestitle'] = t('Updates');
  $variables['allevents'] = l(
    t('All events'),
    'all-events',
    array('attributes' => array('class' => array('link-more-white-blue')))
  );
  $variables['allcalls'] = l(
    t('All calls'), 'calls-for-proposals-tenders',
    array(
      'attributes' => array('class' => array('link-more-white-blue')),
    )
  );
  $variables['allnews'] = l(
    t('All news'), 'all-news',
    array(
      'attributes' => array(
        'class' => array(
          'link-more-white-blue',
          'another-class',
        ),
      ),
    )
  );
  if (isset($variables['node'])) {
    $node = $variables['node'];
    if ($node->type == 'opportunities_for_individuals'
      || $node->type == 'document_library'
      || $node->type == 'opportunities_for_organisations'
      || $node->type == 'resources'
    ) {
      $variables['colheightortwelve'] = 'col-lg-8';
    }
    else {
      $variables['colheightortwelve'] = 'col-lg-12';
    }
    $variables['is_newlayoutr'] = $node->type == 'opportunities_for_individuals'
      || $node->type == 'document_library'
      || $node->type == 'opportunities_for_organisations'
      || $node->type == 'resources';
    if ($node->type == 'opportunities_for_individuals') {
      $variables['bgpage'] = 'individualsbg';
    }
    elseif ($node->type == 'opportunities_for_organisations') {
      $variables['bgpage'] = 'organisationsbg';
    }
    elseif ($node->type == 'resources') {
      $variables['bgpage'] = 'resources';
    }
    else {
      $variables['bgpage'] = 'frontbg';
    }
  }
  else {
    $variables['colheightortwelve'] = 'col-lg-12';
    $variables['bgpage'] = 'frontbg';
  }
  /* Add page tpl based on content type */
  if (isset($node) && $node->type == 'programme_guide') {
    $variables['theme_hook_suggestions'][] = 'page__' . $variables['node']->type;
    drupal_add_css(
      path_to_theme() . '/css/eac_erasmus_guide.css',
      'theme', 'all', TRUE
    );
  }
  else {
    drupal_add_css(
      path_to_theme() . '/css/erasmus.css',
      array('group' => CSS_SYSTEM + 200, 'preprocess' => FALSE),
      'theme', 'all', TRUE
    );
  }

  /* Erasmus 30 years */
  if (isset($node) && $node->type == '30_years_landing') {
    $variables['theme_hook_suggestions'][] = 'page__' . $variables['node']->type;
    drupal_add_css(
      path_to_theme() . '/css/eac_erasmus_30years.css',
      'theme', 'all', TRUE
    );
  }

}

/**
 * Implements template_preprocess_node().
 */
function erasmus_preprocess_node(&$variables) {
  $node = $variables['node'];
  if ($node->type == 'video_gallery') {
    $content = $variables['content'];
    if (isset($content['field_embed_code'])) {
      $variables['embed_code'] = $content['field_embed_code'][0]['#markup'];
    }
    if ($content['title_field']) {
      $variables['article_title'] = $content['title_field'][0]['#markup'];
    }
    if (isset($content['field_abstract'])) {
      $variables['abstract'] = $content['field_abstract'][0]['#markup'];
    }
    if ($content['body']) {
      $variables['body'] = $content['body'][0]['#markup'];
    }
  }
}

/**
 * Implements hook_preprocess_button().
 */
function erasmus_preprocess_button(&$vars) {
  $element = &$vars['element'];

  $element['#attributes']['type'] = 'submit';

  element_set_attributes($element, array('id', 'name', 'value'));

  $element['#attributes']['class'][] = 'btn btn-default';

  $element['#attributes']['class'][] = 'form-' . $element['#button_type'];

  $element['#attributes']['class'] = array_unique($element['#attributes']['class']);
}

/**
 * Overrides theme_button().
 */
function erasmus_button($variables) {
  $element = $variables['element'];

  $text = !empty($element['#hide_text']) ? '<span class="element-invisible">' . $element['#value'] . '</span>' : $element['#value'];

  if (!empty($element['#icon'])) {
    if ($element['#icon_position'] === 'before') {
      $text = $element['#icon'] . ' ' . $text;
    }
    elseif ($element['#icon_position'] === 'after') {
      $text .= ' ' . $element['#icon'];
    }
  }

  return '<button' . drupal_attributes($element['#attributes']) . '>' . $text . "</button>\n";
}

/**
 * Overrides theme_pager().
 */
function erasmus_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];
  $li_first = "";
  $li_last = "";
  global $pager_page_array, $pager_total;

  $pager_middle = ceil($quantity / 2);
  $pager_current = $pager_page_array[$element] + 1;
  $pager_first = $pager_current - $pager_middle + 1;
  $pager_last = $pager_current + $quantity - $pager_middle;
  $pager_max = $pager_total[$element];
  $i = $pager_first;

  $item_list_html = "";

  if ($pager_last > $pager_max) {
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }

  $pager_previous_text = (isset($tags[1]) ? $tags[1] : t('‹ previous'));
  $pager_next_text = (isset($tags[3]) ? $tags[3] : t('next ›'));
  $li_previous_array = array(
    'text' => $pager_previous_text,
    'element' => $element,
    'interval' => 1,
    'parameters' => $parameters,
  );
  $li_previous = theme('pager_previous', $li_previous_array);

  $li_next_array = array(
    'text' => $pager_next_text,
    'element' => $element,
    'interval' => 1,
    'parameters' => $parameters,
  );
  $li_next = theme('pager_next', $li_next_array);

  if ($pager_total[$element] > 1) {
    if ($li_first) {
      $items[] = array(
        'class' => array('pagination__item pagination__item--first'),
        'data' => $li_first,
      );
    }
    if ($li_previous) {
      $items[] = array(
        'class' => array('pagination__item pagination__item--previous'),
        'data' => $li_previous,
      );
    }
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $pager_previous_array_interval = ($pager_current - $i);
          $pager_previous_array = array(
            'text' => $i,
            'element' => $element,
            'interval' => $pager_previous_array_interval,
            'parameters' => $parameters,
          );
          $items[] = array(
            'class' => array('pagination__item'),
            'data' => theme('pager_previous', $pager_previous_array),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('pagination__item pagination__item--current'),
            'data' => $i,
          );
        }
        if ($i > $pager_current) {
          $pager_next_array = array(
            'text' => $i,
            'element' => $element,
            'interval' => ($i - $pager_current),
            'parameters' => $parameters,
          );
          $items[] = array(
            'class' => array('pagination__item'),
            'data' => theme('pager_next', $pager_next_array),
          );
        }
      }
      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
    }
    if ($li_next) {
      $items[] = array(
        'class' => array('pagination__item pagination__item--next'),
        'data' => $li_next,
      );
    }
    if ($li_last) {
      $items[] = array(
        'class' => array('pagination__item pagination__item--last'),
        'data' => $li_last,
      );
    }
    $item_list_array = array(
      'items' => $items,
      'attributes' => array('class' => array('pagination')),
    );
    $item_list_html = '<h2 class="element-invisible">' . t('Pages') . '</h2>' . theme('item_list', $item_list_array);
  }

  return $item_list_html;
}

/**
 * Replacement for theme_form_element().
 */
function erasmus_webform_element($variables) {
  $element = $variables['element'];

  $output = '<div ' . drupal_attributes($element['#wrapper_attributes']) . '>' . "\n";
  $prefix = isset($element['#field_prefix']) ? '<span class="field-prefix">' . webform_filter_xss($element['#field_prefix']) . '</span> ' : '';
  $suffix = isset($element['#field_suffix']) ? ' <span class="field-suffix">' . webform_filter_xss($element['#field_suffix']) . '</span>' : '';

  $above = !empty($element['#webform_component']['extra']['description_above']);
  $description = array(
    FALSE => '',
    TRUE => !empty($element['#description']) ? ' <div class="description">' . $element['#description'] . "</div>\n" : '',
  );

  switch ($element['#title_display']) {
    case 'inline':
      $output .= $description[$above];
      $description[$above] = '';
    case 'before':
    case 'invisible':

      $output .= ' ' . theme('form_element_label', $variables);
      $output .= ' ' . $prefix . $description[$above] . $element['#children'] . $suffix . "\n";
      break;

    case 'after':
      $output .= ' ' . $prefix . $description[$above] . $element['#children'] . $suffix;
      $output .= ' ' . theme('form_element_label', $variables) . "\n";
      break;

    case 'none':
    case 'attribute':
      $output .= ' ' . $prefix . $description[$above] . $element['#children'] . $suffix . "\n";
      break;
  }

  $output .= $description[!$above];
  $output .= "</div>\n";

  return $output;
}

/**
 * Replacement for theme_webform_view_messages().
 */
function erasmus_webform_view_messages($variables) {
  global $user;

  $node = $variables['node'];
  $page = $variables['page'];
  $submission_count = $variables['submission_count'];
  $user_limit_exceeded = $variables['user_limit_exceeded'];
  $total_limit_exceeded = $variables['total_limit_exceeded'];
  $allowed_roles = $variables['allowed_roles'];
  $closed = $variables['closed'];
  $cached = $variables['cached'];

  $type = 'warning';

  if ($closed) {
    $message = t('Submissions for this form are closed.');
  }
  elseif ($node->webform['confidential'] && user_is_logged_in()) {
    $message = t('This form is confidential. You must <a href="!url">Log out</a> to submit it.',
      array('!url' => url('/user/logout', array('query' => array('destination' => request_uri())))));
  }
  elseif (array_search(TRUE, $allowed_roles) === FALSE && $user->uid != 1) {
    if (empty($allowed_roles)) {
      $message = t('Submissions for this form are closed.');
    }
    elseif ($user->uid == 0) {
      if (module_exists('ecas')) {
        $account_request_url = variable_get('ecas_account_request_url', ECAS_DEFAULT_ACCOUNT_REQUEST_URL);
        $login = url('ecas', array('absolute' => TRUE));
        $register = str_replace('%local_ecas_url%', $login, $account_request_url);
      }
      else {
        $login = url('user/login', array('query' => drupal_get_destination()));
        $register = url('user/register', array('query' => drupal_get_destination()));
      }

      if (variable_get('user_register', 1) == 0) {
        $message = t('You must <a href="!login">login</a> to view this form.', array('!login' => $login));
      }
      else {
        $message = t('You must <a href="!login">login</a> or <a href="!register">register</a> to view this form.',
          array('!login' => $login, '!register' => $register));
      }
    }
    else {
      $message = t('You do not have permission to view this form.');
      $type = 'error';
    }
  }
  elseif ($user_limit_exceeded && !$cached) {
    if ($node->webform['submit_interval'] == -1 && $node->webform['submit_limit'] > 1) {
      $message = t('You have submitted this form the maximum number of times (@count).',
        array('@count' => $node->webform['submit_limit']));
    }
    elseif ($node->webform['submit_interval'] == -1 && $node->webform['submit_limit'] == 1) {
      $message = t('You have already submitted this form.');
    }
    else {
      $message = t('You may not submit another entry at this time.');
    }
  }
  elseif ($total_limit_exceeded && !$cached) {
    if ($node->webform['total_submit_interval'] == -1 && $node->webform['total_submit_limit'] > 1) {
      $message = t('This form has received the maximum number of entries.');
    }
    else {
      $message = t('You may not submit another entry at this time.');
    }
  }
  if ($submission_count > 0 && $node->webform['submit_notice'] == 1 && !$cached) {
    if (empty($message)) {
      $message = t('You have already submitted this form.');
      $type = 'status';
    }
    $message .= ' ' . t('<a href="!url">View your previous submissions</a>.',
        array('!url' => url('node/' . $node->nid . '/submissions')));
  }
  if ($node->nid == variable_get('eche_wf_self_assesment_form_nid')) {
    if (isset($_POST['details']['page_num']) && $_POST['details']['page_num'] < 1) {
      if ($page && isset($message)) {
        drupal_set_message($message, $type, FALSE);
      }
    }
  }
  elseif ($node->nid == variable_get('eche_wf_rectors_form_nid')) {
    if (isset($_POST['details']['page_num']) && $_POST['details']['page_num'] < 1) {
      if ($page && isset($message)) {
        drupal_set_message($message, $type, FALSE);
      }
    }
  }
  else {
    if ($page && isset($message)) {
      drupal_set_message($message, $type, FALSE);
    }
  }
}

/**
 * Returns HTML for a checkbox form element.
 *
 * @param array $variables
 *   An associative array containing:
 *   - element: An associative array containing the properties of the element.
 *     Properties used: #id, #name, #attributes, #checked, #return_value.
 *
 * @ingroup themeable
 * 
 * @return string label will be returned
 */
function erasmus_checkbox($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'checkbox';
  // @codingStandardsIgnoreStart
  element_set_attributes($element, array('id','name','#return_value' => 'value',));
  // @codingStandardsIgnoreEnd
  if (!empty($element['#checked'])) {
    $element['#attributes']['checked'] = 'checked';
  }
  _form_set_class($element, array('form-checkbox'));

  return '<input' . drupal_attributes($element['#attributes']) . ' />';
}

/**
 * Format the text output for this component.
 */
function erasmus_webform_display_select($variables) {
  $element = $variables['element'];
  $options = array();
  foreach ($element['#options'] as $key => $value) {
    if (is_array($value)) {
      foreach ($value as $subkey => $subvalue) {
        $options[$subkey] = $subvalue;
      }
    }
    else {
      $options[$key] = $value;
    }
  }

  $items = array();
  if ($element['#multiple']) {
    foreach ((array) $element['#value'] as $option_value) {
      if ($option_value !== '') {
        if (isset($options[$option_value])) {
          $items[] = $element['#format'] == 'html' ? webform_filter_xss($options[$option_value]) : $options[$option_value];
        }
        else {
          $items[] = $element['#format'] == 'html' ? check_plain($option_value) : $option_value;
        }
      }
    }
  }
  else {
    if (isset($element['#value'][0]) && $element['#value'][0] !== '') {
      if (isset($options[$element['#value'][0]])) {
        $items[] = $element['#format'] == 'html' ? webform_filter_xss($options[$element['#value'][0]]) : $options[$element['#value'][0]];
      }
      else {
        $items[] = $element['#format'] == 'html' ? check_plain($element['#value'][0]) : $element['#value'][0];
      }
    }
  }

  if ($element['#format'] == 'html') {
    $output = count($items) > 1 ? theme('item_list', array('items' => $items)) : (isset($items[0]) ? $items[0] : ' ');
  }
  else {
    if (count($items) > 1) {
      foreach ($items as $key => $item) {
        $items[$key] = ' - ' . $item;
      }
      $output = implode("\n", $items);
    }
    else {
      $output = isset($items[0]) ? $items[0] : ' ';
    }
  }

  return $output;
}

/**
 * Returns HTML for a form element label and required marker.
 *
 * Form element labels include the #title and a #required marker. The label is
 * associated with the element itself by the element #id. Labels may appear
 * before or after elements, depending on theme_form_element() and
 * #title_display.
 *
 * This function will not be called for elements with no labels, depending on
 * #title_display. For elements that have an empty #title and are not required,
 * this function will output no label (''). For required elements that have an
 * empty #title, this will output the required marker alone within the label.
 * The label will use the #id to associate the marker with the field that is
 * required. That is especially important for screenreader users to know
 * which field is required.
 *
 * @param array $variables
 *   An associative array containing:
 *   - element: An associative array containing the properties of the element.
 *     Properties used: #required, #title, #id, #value, #description.
 *
 * @ingroup themeable
 *
 * @return string label will be returned
 */
function erasmus_form_element_label($variables) {
  $node = menu_get_object();

  $element = $variables['element'];
  $t = get_t();
  if ((!isset($element['#title']) || $element['#title'] === '') && empty($element['#required'])) {
    return '';
  }
  $required = !empty($element['#required']) ? theme('form_required_marker', array('element' => $element)) : '';
  if (eche_wf_node_is_self_assesment($node)) {
    if (strpos($element['#title'], '|') !== FALSE) {
      $title_data = explode('|', $element['#title']);
      if (isset($title_data[1])) {
        $title = '<div class="question__number">' . $title_data[0] . '</div>' . filter_xss_admin($title_data[1]);
      }

    }
    else {
      $title = filter_xss_admin($element['#title']);
    }
  }
  else {
    $title = filter_xss_admin($element['#title']);
  }

  $attributes = array();
  if ($element['#title_display'] == 'after') {
    $attributes['class'] = 'option';
  }
  elseif ($element['#title_display'] == 'invisible') {
    $attributes['class'] = 'element-invisible';
  }

  if (!empty($element['#id'])) {
    $attributes['for'] = $element['#id'];
  }
  return ' <label' . drupal_attributes($attributes) . '>' . $t('!title !required',
      array('!title' => $title, '!required' => $required)) . "</label>\n";
}

/**
 * Wrapper function for the top navigation menu links.
 */
function erasmus_menu_tree__menu_eche_navigation(&$variables) {
  return '<ul class="nav-horizontal">' .
    $variables['tree'] .
    '</ul>';
}

/**
 * Wrapper function for the top navigation menu item.
 */
function erasmus_menu_link__menu_eche_navigation(&$variables) {
  $element = $variables['element'];
  $sub_menu = '';

  $element['#attributes']['class'][] = 'nav-horizontal__item';
  $element['#localized_options']['attributes']['class'][] = 'nav-horizontal__link';

  if ($element['#below']) {
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] == 1)) {
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
      $element['#title'] .= ' <span class="caret"></span>';
      $element['#attributes']['class'][] = 'dropdown';
      $element['#localized_options']['html'] = TRUE;

      $element['#localized_options']['attributes']['data-target'] = '#';
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
      $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    }
  }

  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
  // @codingStandardsIgnoreFile
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  // @codingStandardsIgnoreFile
  return '<li' . drupal_attributes($element ['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
  
}

/**
 * Wrapper function for the top navigation menu links.
 */
function erasmus_menu_tree__menu_eche_user_menu(&$variables) {
  return '<ul class="nav-horizontal">' .
    $variables['tree'] .
    '</ul>';
}

/**
 * Wrapper function for the top navigation menu item.
 */
function erasmus_menu_link__menu_eche_user_menu(&$variables) {
  $element = $variables['element'];
  $sub_menu = '';

  $element['#attributes']['class'][] = 'nav-horizontal__item nav-horizontal__item--primary';
  $element['#localized_options']['attributes']['class'][] = 'nav-horizontal__link nav-horizontal__link--primary';

  if ($element['#below']) {
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] == 1)) {
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
      $element['#title'] .= ' <span class="caret"></span>';
      $element['#attributes']['class'][] = 'dropdown';
      $element['#localized_options']['html'] = TRUE;

      $element['#localized_options']['attributes']['data-target'] = '#';
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
      $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    }
  }

  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
  // @codingStandardsIgnoreFile
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  // @codingStandardsIgnoreFile
  return '<li' . drupal_attributes($element ['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Wrapper function for the top navigation menu links.
 */
function erasmus_menu_tree__menu_about_eche(&$variables) {
  return '<ul class="nav-vertical">' .
    $variables['tree'] .
    '</ul>';
}

/**
 * Wrapper function for the top navigation menu item.
 */
function erasmus_menu_link__menu_about_eche(&$variables) {
  $element = $variables['element'];
  $sub_menu = '';

  $element['#attributes']['class'][] = 'nav-vertical__item';
  $element['#localized_options']['attributes']['class'][] = 'nav-vertical__link';

  if ($element['#below']) {
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] == 1)) {
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
      $element['#title'] .= ' <span class="caret"></span>';
      $element['#attributes']['class'][] = 'dropdown';
      $element['#localized_options']['html'] = TRUE;
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
      $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    }
  }

  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
  // @codingStandardsIgnoreStart
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element ['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
  // @codingStandardsIgnoreEnd
}
