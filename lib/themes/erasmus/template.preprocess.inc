<?php
/**
 * @file
 * Template.preprocess.inc.
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
 * Implements Erasmus_Preprocess_html().
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
 * Implements Erasmus_Preprocess_Om_Maximenu_submenu().
 */
function erasmus_preprocess_om_maximenu_submenu(&$variables) {
  global $base_url;
  global $language;

  $empty = '';
  $variables['base_url'] = $base_url;
  $variables['language'] = $language;
  $variables['namesite'] = t('Erasmus+');
  $facebook = "https://www.facebook.com/EUErasmusPlusProgramme";
  $variables['facebook'] = l(
    $empty, $facebook,
    array('attributes' => array('class' => 'icon facebook'))
  );
  $twitter = "https://twitter.com/EUErasmusPlus";
  $variables['twitter'] = l(
    $empty, $twitter,
    array('attributes' => array('class' => 'icon twitter'))
  );
  $gplus = "https://plus.google.com/communities/115077875344973792963";
  $variables['gplus'] = l(
    $empty, $gplus,
    array('attributes' => array('class' => 'icon gplus'))
  );
  $iconnewsletter = "https://ec.europa.eu/coreservices/mailing/index.cfm?controller=register&action=index&serviceid=1756&pk_campaign=NewErasmus&pk_kwd=NewsletterDesktop";
  $variables['iconnewsletter'] = l(
    $empty, $iconnewsletter,
    array(
      'attributes' => array(
        'class' => 'fa fa-newspaper-o',
      ),
    )
  );
  $newsletterdesktop = "https://ec.europa.eu/coreservices/mailing/index.cfm?controller=register&action=index&serviceid=1756&pk_campaign=NewErasmus&pk_kwd=NewsletterDesktop";
  $variables['newsletterdesktop'] = l(
    t('Newsletter'),
    $newsletterdesktop,
    array(
      'attributes' => array(
        'class' => 'newsletter',
      ),
    )
  );
  $newslettermobile = "https://ec.europa.eu/coreservices/mailing/index.cfm?controller=register&action=index&serviceid=1756&pk_campaign=NewErasmus&pk_kwd=NewsletterDesktop";
  $variables['newslettermobile'] = l(
    t('Newsletter'),
    $newslettermobile,
    array(
      'attributes' => array(
        'class' => 'nav-tool-expand',
        'data-expand' => 'mobile-nav-newsletter',
      ),
    )
  );
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

  $langlink = "http://ec.europa.eu/programmes/erasmus-plus/index_en.htm&pk_campaign=NewErasmus&pk_kwd=LinkToOldVersion";
  $variables['langlink'] = l(
    t('The previous version'), $langlink,
    array('attributes' => array('class' => 'linklanguage'))
  );
  $variables['langsummary'] = t(
    '(available in all languages) has been archived 
        and will be taken offline on 01/01/2016.'
  );
  $attributes_link = array('class' => array('linklanguage'));
  $variables['eventlink'] = l(
    t('Events'), 'all-events',
    array('attributes' => $attributes_link)
  );
  $variables['callslink'] = l(
    t('Calls'), 'calls-for-proposals-tenders',
    array('attributes' => $attributes_link)
  );
  $variables['newslink'] = l(
    t('News'), 'all-news', array(
      'attributes' => $attributes_link,
    )
  );
  // @codingStandardsIgnoreFile
  $variables['nav_ico'] = theme(
    'image', array(
      'path' => $base_url . '/sites/all/themes/erasmus' . '/images/mobile-nav-ico.svg',
    )
  );
  // @codingStandardsIgnoreFile
  $variables['flat_ec_logo'] = theme(
    'image', array(
      'path' => $base_url . '/sites/all/themes/erasmus'
        . '/images/mobile-flat-ec-logo.svg',
    )
  );
  // @codingStandardsIgnoreFile
  $variables['logo_ce_en'] = theme(
    'image', array(
      'path' => $base_url . '/sites/all/themes/erasmus' . '/images/logo_ce-en.svg',
    )
  );
  

}

/**
 * Implements Erasmus_Preprocess_page().
 */
function erasmus_preprocess_page(&$variables) {
  global $base_url;
  global $language;

  $header = drupal_get_http_header("status");
  if ($header == "404 Not Found") {
    $variables['theme_hook_suggestions'][] = 'page__404';
  }

  $variables['base_url'] = $base_url;

  $variables['is_newlayoutr'] = FALSE;
  $variables['language'] = $language;
  $variables['abouttitle'] = t('About');
  $variables['aboutsubtitle'] = t(
    "Erasmus+ is the EU's programme to support education, training, 
        youth and sport in Europe. Its budget of €14.7 billion will 
        provide opportunities for over 4 million Europeans to study, 
        train gain experience, and volunteers abroad."
  );
  $variables['individualstitle'] = t('Opportunities for individuals');
  $variables['individualssubtitle'] = t(
    "Erasmus+ has opportunities for 
        people of all ages, helping them develop and share knowledge and 
        experience at institutions and organisations in different countries"
  );
  $variables['organisationstitle'] = t('Opportunities for organisations');
  $variables['organisationssubtitle'] = t(
    "Erasmus+ has opportunities for 
        a wide range of organisations including universities, education and 
        training providers, think thanks, research organisations, 
        and private businesses."
  );
  $variables['resourcestitle'] = t('Resources');
  $variables['resourcessubtitle'] = t(
    "Key tools and documents for organisations and individuals 
        that you'll need to get started with Erasmus+"
  );
  $variables['documentlibrarytitle'] = t('Document library');
  $variables['documentlibrarysubtitle'] = t(
    "The full texts of European legislation (Directives, 
        Regulations, Decisions etc…) and other official documents 
        (Communications etc…) are available from the EU's Eur-Lex website."
  );
  $variables['contacttitle'] = t('Contact');
  $variables['contactsubtitle'] = t(
    "For any questions not answered in the Programme Guide, 
        you can contact National Agencies, National Offices or 
        the European Commission."
  );
  $variables['modallefttitlelineone'] = t('Changing lives,');
  $variables['modallefttitlelinetwo'] = t('opening minds');
  $variables['modalrighttext'] = t(
    'Over the past few months, we have been working very hard on a 
        complete overhaul to make our site easier to navigate, 
        more user-friendly and mobile-compatible'
  );
  $variables['modalclose'] = t('Explore the new site');
  $variables['submenu'] = t('Opportunities');
  $variables['submenuabout'] = t('About');
  $variables['submenuresources'] = t('Resources');
  $variables['contactsub'] = t('Contact points');
  $modalnewsletter = "https://ec.europa.eu/coreservices/mailing/index.cfm?controller=register&action=index&serviceid=1756&pk_campaign=SubscribeNewsletter&pk_kwd=Modal";
  $variables['modalnewsletter'] = l(
    t('Subscribe to our newsletter'),
    $modalnewsletter,
    array(
      'attributes' => array(
        'class' => 'link-modal',
        'align' => 'center',
      ),
    )
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
  $variables['updatestitle'] = t('Updates');
  $variables['allevents'] = l(
    t('All events'),
    'all-events',
    array('attributes' => array('class' => array('link-more-white-blue')))
  );
  $variables['allcalls'] = l(t('All calls'), 'calls-for-proposals-tenders',
    array('attributes' => array('class' => array('link-more-white-blue'))));
  $variables['allnews'] = l(t('All news'), 'all-news',
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

  $current_path = current_path();
  if ($current_path == 'eche/resources'
    || $current_path == 'user/my-submissions'
    || $current_path == 'user/shared-with-me'
  ) {
    $variables['content_boxed'] = TRUE;
  }
}

/**
 * Implements Erasmus_Preprocess_node().
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
