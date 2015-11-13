<?php
/**
 * @file
 * Template.php Erasmus Plus - CMAE - DG EAC.
 */

/**
 * Implements template_preprocess_HOOK().
 */
function erasmus_preprocess_html(&$variables) {
	$settings['erasmus']['videohome_youtube_id'] = theme_get_setting('videohome_youtube_id');
	drupal_add_js($settings, 'setting');
	drupal_add_js(drupal_get_path('theme', 'erasmus') . '/scripts/videohome.js', array(
		'scope' => 'footer',
	));

}

/**
 * Implement template_preprocess_om_maximenu_submenu().
 */
function erasmus_preprocess_om_maximenu_submenu(&$variables) {
  global $base_url;
  $empty = '';
  $variables['base_url'] = $base_url;
  global $language;
  $variables['language'] = $language;
  $variables['namesite'] = t('Erasmus+');
  $variables['facebook'] = l($empty, "https://www.facebook.com/EUErasmusPlusProgramme", array('attributes' => array('class' => 'icon facebook')));
  $variables['twitter'] = l($empty, "https://twitter.com/EUErasmusPlus", array('attributes' => array('class' => 'icon twitter')));
  $variables['iconnewsletter'] = l($empty, "https://ec.europa.eu/coreservices/mailing/index.cfm?controller=register&action=index&serviceid=1756&pk_campaign=NewErasmus&pk_kwd=NewsletterDesktop",
    array(
      'attributes' => array(
        'class' => 'fa fa-newspaper-o',
      ),
    ));
  $variables['newsletterdesktop'] = l(t('Newsletter'), "https://ec.europa.eu/coreservices/mailing/index.cfm?controller=register&action=index&serviceid=1756&pk_campaign=NewErasmus&pk_kwd=NewsletterDesktop",
    array(
      'attributes' => array(
        'class' => 'newsletter',
      ),
    ));
  $variables['newslettermobile'] = l(t('Newsletter'), "https://ec.europa.eu/coreservices/mailing/index.cfm?controller=register&action=index&serviceid=1756&pk_campaign=NewErasmus&pk_kwd=NewsletterDesktop",
    array(
      'attributes' => array(
        'class' => 'nav-tool-expand',
        'data-expand' => 'mobile-nav-newsletter',
      ),
    ));
  $variables['searchlink'] = l(t('Search'), $base_url . "/search/site",
    array(
      'attributes' => array(
        'class' => 'nav-tool-expand',
        'data-expand' => 'mobile-nav-newsletter',
      ),
    ));
  $variables['lang'] = l(t('English'), '',
    array(
      'fragment' => 'tablang',
      'external' => TRUE,
      'attributes' => array(
        'class' => 'nav-tool-expand',
        'data-expand' => 'mobile-nav-lg',
      ),
    ));
  $variables['langintro'] = t('The site is currently only available in English, other languages will be available later.');
  $variables['langlink'] = l(t('The previous version'), "http://ec.europa.eu/programmes/erasmus-plus/index_en.htm&pk_campaign=NewErasmus&pk_kwd=LinkToOldVersion", array('attributes' => array('class' => 'linklanguage')));
  $variables['langsummary'] = t('(available in all languages) has been archived and will be taken offline on 01/01/2016.');
  $variables['eventlink'] = l(t('Events'), "events", array('attributes' => array('class' => 'linklanguage')));
  $variables['callslink'] = l(t('Calls'), "calls-for-proposals-tenders", array('attributes' => array('class' => 'linklanguage')));
  $variables['newslink'] = l(t('News'), "news", array('attributes' => array('class' => 'linklanguage')));
	$variables['nav_ico'] = theme('image', array(
		'path' => '/images/mobile-nav-ico.svg',
  ));
	$variables['flat_ec_logo'] = theme('image', array(
		'path' => '/images/mobile-flat-ec-logo.svg',
  ));
	$variables['logo_ce_en'] = theme('image', array(
		'path' => '/images/logo_ce-en.svg',
  ));
}

/**
 * Implements template_preprocess_page().
 */
function erasmus_preprocess_page(&$variables) {
  global $base_url;
  $variables['base_url'] = $base_url;
  global $language;
  $variables['is_newlayoutr'] = FALSE;
  $variables['language'] = $language;
  $variables['abouttitle'] = t('About');
  $variables['aboutsubtitle'] = t("Erasmus+ is the EU's programme to support education, training, youth and sport in Europe. Its budget of €14.7 billion will provide opportunities for over 4 million Europeans to study, train gain experience, and volunteers abroad.");
  $variables['individualstitle'] = t('Opportunities for individuals');
  $variables['individualssubtitle'] = t("Erasmus+ has opportunities for people of all ages, helping them develop and share knowledge and experience at institutions and organisations in different countries");
  $variables['organisationstitle'] = t('Opportunities for organisations');
  $variables['organisationssubtitle'] = t("Erasmus+ has opportunities for a wide range of organisations including universities, education and training providers, think thanks, research organisations, and private businesses.");
  $variables['resourcestitle'] = t('Resources');
  $variables['resourcessubtitle'] = t("Key tools and documents for organisations and individuals that you'll need to get started with Erasmus+");
  $variables['contacttitle'] = t('Contact');
  $variables['contactsubtitle'] = t("For any questions not answered in the Programme Guide, you can contact National Agencies, National Offices or the European Commission.");
  $variables['modallefttitlelineone'] = t('Changing lives,');
  $variables['modallefttitlelinetwo'] = t('opening minds');
  $variables['modalrighttext'] = t('Over the past few months, we have been working very hard on a complete overhaul to make our site easier to navigate, more user-friendly and mobile-compatible');
  $variables['modalclose'] = t('Explore the new site');
  $variables['submenu'] = t('Opportunities');
  $variables['submenuabout'] = t('About');
  $variables['submenuresources'] = t('Resources');
  $variables['contactsub'] = t('Contact points');
  $variables['modalnewsletter'] = l(t('Subscribe to our newsletter'), "https://ec.europa.eu/coreservices/mailing/index.cfm?controller=register&action=index&serviceid=1756&pk_campaign=SubscribeNewsletter&pk_kwd=Modal",
    array(
      'attributes' => array(
        'class' => 'link-modal',
        'align' => 'center',
      ),
    ));
  $variables['$menunewsletter'] = l(t('Subscribe to our newsletter'), "https://ec.europa.eu/coreservices/mailing/index.cfm?controller=register&action=index&serviceid=1756&pk_campaign=SubscribeNewsletter&pk_kwd=Modal",
    array(
      'attributes' => array(
        'class' => 'link-modal',
        'align' => 'center',
      ),
    ));
  $variables['updatestitle'] = t('Updates');
  $variables['allevents'] = l(t('All events'), "events", array('attributes' => array('class' => 'link-more-white-blue')));
  $variables['allcalls'] = l(t('All calls'), "calls-for-proposals-tenders", array('attributes' => array('class' => 'link-more-white-blue')));
  $variables['allnews'] = l(t('All news'), "news", array('attributes' => array('class' => 'link-more-white-blue')));

  if (isset($variables['node'])) {
    $node = $variables['node'];
    if ($node->type == 'opportunities_for_individuals' || $node->type == 'document_library' || $node->type == 'opportunities_for_organisations' || $node->type == 'resources') {
      $variables['colheightortwelve'] = 'col-lg-8';
    }
    else {
      $variables['colheightortwelve'] = 'col-lg-12';
    }
    $variables['is_newlayoutr'] = $node->type == 'opportunities_for_individuals' || $node->type == 'document_library' || $node->type == 'opportunities_for_organisations' || $node->type == 'resources';
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
}
