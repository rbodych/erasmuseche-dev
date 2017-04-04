<?php

/**
 * @file
 * Holds functionality about core pages.
 */

// @codingStandardsIgnoreStart
/**
 * Create "About" page programmatic.
 */
function eche_core_create_about_page() {
  $type = 'eche';
  $query = db_select('node', 'n');
  $query->fields('n');
  $query->condition('n.title', 'About');
  $query->condition('n.type', $type);
  $result = $query->execute();
  $node = new stdClass();
  if ($result->rowCount() == 1) {

    foreach ($result as $r) {
      $node = node_load($r->nid);
    }

  }
  elseif ($result->rowCount() >= 2) {
    foreach ($result as $r) {
      $node = node_delete($r->nid);
    }
    $node = new stdClass();
    $node->type = $type;
    node_object_prepare($node);
  }
  elseif ($result->rowCount() == 0) {
    $node = new stdClass();
    $node->type = $type;
    node_object_prepare($node);
  }

  $node->path = array('alias' => 'eche/about');

  $hecharteren = "https://ec.europa.eu/ploteus/search/site?f%5B0%5D=im_field_entity_type%3A97";
  $searchurl = "/sites/erasmusplus/files/files/resources/he-charter_en.pdf";
  $erasmuscharterhighereducationen = "http://ec.europa.eu/programmes/erasmus-plus/resources/documents-for-applicants/erasmus-charter-higher-education_en";
  $node_data = (object) array(

    'uid' => '1',
    'title' => 'About',
    'log' => '',
    'status' => '1',
    'comment' => '1',
    'promote' => '0',
    'sticky' => '0',

    'nid' => '261',
    'type' => 'eche',
    'language' => 'en',
    'created' => '1477955533',
    'changed' => '1482312353',
    'tnid' => '0',
    'translate' => '0',

    'revision_timestamp' => '1482312353',
    'revision_uid' => '1',
    'body' => array(
      'en' => array(
        array(
          'value' => "<h2>About the ECHE</h2><p>The <a href=\"'.$hecharteren.'\">'.$hecharteren.'</a></div>\r\n         </div>",
          'summary' => '',
          'format' => 'eche_custom_text_format',
          'safe_value' => "<h2>About the ECHE</h2><p>The <a href=\"'.$searchurl.'\">Erasmus Charter for Higher Education (ECHE)</a> provides the general quality framework for European and international cooperation activities a higher education institution may carry out within Erasmus+. The award of an ECHE is a pre-requisite for all higher education institutions located in a Programme country and willing to participate in learning mobility of individuals and/or cooperation for innovation and good practices under Erasmus+. For more information, please visit: <a href=\"'.$erasmuscharterhighereducationen.'\">'.$erasmuscharterhighereducationen.'</a></p><div class=\"link-box\">\n           <div class=\"link-box__icon\"><i class=\"icon icon--link\"></i></div>\n           <div class=\"link-box__item\">Erasmus+ quality framework: <a href=\"http://ec.europa.eu/education/opportunities/higher-education/quality-framework_en.htm\">http://ec.europa.eu/education/opportunities/higher-education/quality-framework_en.htm</a></div>\n           <div class=\"link-box__item\">ECTS website: <a href=\"http://ec.europa.eu/education/ects/ects_en.htm\">http://ec.europa.eu/education/ects/ects_en.htm</a></div>\n           <div class=\"link-box__item\">Diploma Supplement: <a href=\"http://ec.europa.eu/education/tools/diploma-supplement_en.htm\">http://ec.europa.eu/education/tools/diploma-supplement_en.htm</a></div>\n           <div class=\"link-box__item\">Quality and relevance in HE: <a href=\"http://ec.europa.eu/education/policy/higher-education/quality-relevance_en.htm\">http://ec.europa.eu/education/policy/higher-education/quality-relevance_en.htm</a></div>\n           <div class=\"link-box__item\">European Qualifications Framework: <a href=\"https://ec.europa.eu/ploteus/search/site?f%5B0%5D=im_field_entity_type%3A97\">https://ec.europa.eu/ploteus/search/site?f%5B0%5D=im_field_entity_type%3A97</a></div>\n         </div>",
          'safe_summary' => '',
        ),
      ),
    ),
    'field_machine_name' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'eche_about',
          'format' => NULL,
          'safe_value' => 'eche_about',
        ),
      ),
    ),
    'translations' => (object) array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_type' => 'node',
    'rdf_mapping' => array(
      'rdftype' => array(
        'sioc:Item',
        'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          'dc:date',
          'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'path' => array(

      'alias' => 'eche/about',
      'language' => LANGUAGE_NONE,
    ),
    'cid' => '0',
    'last_comment_timestamp' => '1477955533',
    'last_comment_name' => NULL,
    'last_comment_uid' => '1',
    'comment_count' => '0',
    'name' => 'fpfis-admin',
    'picture' => '0',
    'data' => 'a:1:{s:7:"contact";i:1;}',
    'print_html_display' => 1,
    'print_html_display_comment' => 0,
    'print_html_display_urllist' => 1,
    'print_mail_display' => 1,
    'print_mail_display_comment' => 0,
    'print_mail_display_urllist' => 1,
    'print_pdf_display' => 1,
    'print_pdf_display_comment' => 0,
    'print_pdf_display_urllist' => 1,
    'print_pdf_size' => '',
    'print_pdf_orientation' => '',
    'menu' => NULL,
    'node_export_drupal_version' => '7',
  );

  foreach ($node_data as $k => $v) {
    $node->$k = $v;
  }

  $node->type = $type;
  // Save the node.
  node_save($node);

}

/**
 * Create "Video Tutorials" page programmatically.
 */
function eche_core_create_video_turorials_page() {
  $type = 'eche';
  $query = db_select('node', 'n');
  $query->fields('n');
  $query->condition('n.title', 'Video Tutorials');
  $query->condition('n.type', $type);
  $result = $query->execute();
  $node = new stdClass();

  if ($result->rowCount() == 1) {

    foreach ($result as $r) {
      $node = node_load($r->nid);
    }

  }
  elseif ($result->rowCount() >= 2) {

    foreach ($result as $r) {
      $node = node_delete($r->nid);
    }

    $node = new stdClass();
    $node->type = $type;
    node_object_prepare($node);

  }
  elseif ($result->rowCount() == 0) {
    $node = new stdClass();
    $node->type = $type;
    node_object_prepare($node);
  }

  $node->path = array('alias' => 'eche/video-tutorials');

  $node_data = (object) array(
    'uid' => '1',
    'title' => 'Video Tutorials',
    'status' => '1',
    'comment' => '0',
    'promote' => '0',
    'sticky' => '0',
    'language' => 'en',
    'body' => array(
      'en' => array(),
    ),

    'print_html_display' => 1,
    'print_html_display_comment' => 0,
    'print_html_display_urllist' => 1,
    'print_mail_display' => 1,
    'print_mail_display_comment' => 0,
    'print_mail_display_urllist' => 1,
    'print_pdf_display' => 1,
    'print_pdf_display_comment' => 0,
    'print_pdf_display_urllist' => 1,

  );
  $node->type = $type;
  foreach ($node_data as $k => $v) {
    $node->$k = $v;
  }

  // Save the node.
  node_save($node);

}

/**
 * Create "Homepage - about" page programmatically.
 */
function eche_core_create_homepage_about_page() {
  $type = 'eche';
  $query = db_select('node', 'n');
  $query->fields('n');
  $query->condition('n.title', 'Homepage - about');
  $query->condition('n.type', $type);
  $result = $query->execute();
  $node = new stdClass();

  if ($result->rowCount() == 1) {

    foreach ($result as $r) {
      $node = node_load($r->nid);
    }

  }
  elseif ($result->rowCount() >= 2) {

    foreach ($result as $r) {
      $node = node_delete($r->nid);
    }

    $node = new stdClass();
    $node->type = $type;
    node_object_prepare($node);

  }
  elseif ($result->rowCount() == 0) {
    $node = new stdClass();
    $node->type = $type;
    node_object_prepare($node);
  }

  $node->path = array('alias' => 'eche/homepage-about');

  $node_data = (object) array(
    'uid' => '1',
    'title' => 'Homepage - about',
    'status' => '1',
    'comment' => '0',
    'promote' => '0',
    'sticky' => '0',
    'language' => 'en',
    'body' => array(
      'en' => array(),
    ),
    'field_machine_name' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'homepage_about',
          'format' => NULL,
          'safe_value' => 'homepage_about',
        ),
      ),
    ),

    'print_html_display' => 1,
    'print_html_display_comment' => 0,
    'print_html_display_urllist' => 1,
    'print_mail_display' => 1,
    'print_mail_display_comment' => 0,
    'print_mail_display_urllist' => 1,
    'print_pdf_display' => 1,
    'print_pdf_display_comment' => 0,
    'print_pdf_display_urllist' => 1,

  );
  $node->type = $type;
  foreach ($node_data as $k => $v) {
    $node->$k = $v;
  }

  // Save the node.
  node_save($node);

}

/**
 * Create "Homepage - intro content" page programmatically.
 */
function eche_core_create_homepage_intro_content_page() {
  $type = 'eche';
  $query = db_select('node', 'n');
  $query->fields('n');
  $query->condition('n.title', 'Homepage - intro content');
  $query->condition('n.type', $type);
  $result = $query->execute();
  $node = new stdClass();

  if ($result->rowCount() == 1) {

    foreach ($result as $r) {
      $node = node_load($r->nid);
    }

  }
  elseif ($result->rowCount() >= 2) {

    foreach ($result as $r) {
      $node = node_delete($r->nid);
    }

    $node = new stdClass();
    $node->type = $type;
    node_object_prepare($node);

  }
  elseif ($result->rowCount() == 0) {
    $node = new stdClass();
    $node->type = $type;
    node_object_prepare($node);
  }

  $node->path = array('alias' => 'eche/homepage-intro-content');

  $node_data = (object) array(
    'uid' => '1',
    'title' => 'Homepage - intro content',
    'status' => '1',
    'comment' => '0',
    'promote' => '0',
    'sticky' => '0',
    'language' => 'en',
    'body' => array(
      'en' => array(),
    ),
    'field_machine_name' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'homepage_intro_content',
          'format' => NULL,
          'safe_value' => 'homepage_intro_content',
        ),
      ),
    ),

    'print_html_display' => 1,
    'print_html_display_comment' => 0,
    'print_html_display_urllist' => 1,
    'print_mail_display' => 1,
    'print_mail_display_comment' => 0,
    'print_mail_display_urllist' => 1,
    'print_pdf_display' => 1,
    'print_pdf_display_comment' => 0,
    'print_pdf_display_urllist' => 1,

  );
  $node->type = $type;
  foreach ($node_data as $k => $v) {
    $node->$k = $v;
  }

  // Save the node.
  node_save($node);

}

/**
 * Create "Homepage - Intro" page programmatically.
 */
function eche_core_create_homepage_intro_page() {
  $type = 'eche';
  $query = db_select('node', 'n');
  $query->fields('n');
  $query->condition('n.title', 'Homepage - Intro');
  $query->condition('n.type', $type);
  $result = $query->execute();
  $node = new stdClass();

  if ($result->rowCount() == 1) {

    foreach ($result as $r) {
      $node = node_load($r->nid);
    }

  }
  elseif ($result->rowCount() >= 2) {

    foreach ($result as $r) {
      $node = node_delete($r->nid);
    }

    $node = new stdClass();
    $node->type = $type;
    node_object_prepare($node);

  }
  elseif ($result->rowCount() == 0) {
    $node = new stdClass();
    $node->type = $type;
    node_object_prepare($node);
  }

  $node->path = array('alias' => 'eche/homepage-intro');

  $node_data = (object) array(
    'uid' => '1',
    'title' => 'Homepage - Intro',
    'status' => '1',
    'comment' => '0',
    'promote' => '0',
    'sticky' => '0',
    'language' => 'en',
    'body' => array(
      'en' => array(),
    ),
    'field_machine_name' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'homepage_intro',
          'format' => NULL,
          'safe_value' => 'homepage_intro',
        ),
      ),
    ),
    'print_html_display' => 1,
    'print_html_display_comment' => 0,
    'print_html_display_urllist' => 1,
    'print_mail_display' => 1,
    'print_mail_display_comment' => 0,
    'print_mail_display_urllist' => 1,
    'print_pdf_display' => 1,
    'print_pdf_display_comment' => 0,
    'print_pdf_display_urllist' => 1,

  );
  $node->type = $type;
  foreach ($node_data as $k => $v) {
    $node->$k = $v;
  }

  // Save the node.
  node_save($node);

}
// @codingStandardsIgnoreEnd
