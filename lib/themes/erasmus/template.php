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
  $variables['aboutsubtitle'] = t("Erasmus+ is the EU's programme to support education, training, youth and sport in Europe. Its budget of €14.7 billion will provide opportunities for over 4 million Europeans to study, train gain experience, and volunteers abroad.");
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
