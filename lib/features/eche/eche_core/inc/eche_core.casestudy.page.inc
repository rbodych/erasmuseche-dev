<?php

/**
 * @file
 * Holds case study functionality.
 */

/**
 * Checks if page exist.
 *
 * @param string $title
 *    Title of page.
 * @param string $type
 *    Type of content.
 *
 * @return object
 *    Node object.
 */
function eche_core_case_study_check_if_page_exist($title, $type) {
  $node = new stdClass();
  if ($title != "" && $type != "") {
    $query = db_select('node', 'n');
    $query->fields('n');
    $query->condition('n.title', $title);
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
        node_delete($r->nid);
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

  }
  return $node;
}

/**
 * Create "The Erasmus Impacts Study" page programmatically.
 */
function eche_core_create_the_erasmus_impacts_study_page() {
  $title = 'The Erasmus Impacts Study: Effects of mobility on the skills and 
   employability of students and the internationalisation of higher 
   education institutions';
  $type = 'case_study';
  $node = eche_core_case_study_check_if_page_exist($title, $type);

  $node_data = (object) array(

    'uid' => '1',
    'title' => 'The Erasmus Impacts Study: Effects of mobility on the skills and employability of students and the internationalisation of higher education institutions',
    'log' => '',
    'status' => '1',
    'comment' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'case_study',
    'language' => 'en',
    'tnid' => '0',
    'translate' => '0',

    'body' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => "<p>There are many institutional examples of how information on mobility-related activities is gathered and utilised, and of the positive outcomes and impacts on participating HEIs, businesses, staff and students. The 2014 Erasmus Impact Study provides a comprehensive overview of the range of benefits delivered through Erasmus+ participation. The study illustrates the impact of Erasmus participation on skills, employability and internationalisation in student and staff bodies as well as in organisations. The Erasmus Impact Study consulted 75,000 students and alumni, of which almost three quarters studied or trained abroad, further to 5,000 staff, 1,000 higher education institutions and 650 employers.</p><p>The need to provide more opportunities for students to gain skills through studying or training abroad is discussed in the European Commission’s strategy for the modernisation of higher education. Currently, approximately 10% of EU students study or train abroad. According to recent figures from Eurostat, approximately 5% i.e. about 253,000 of the total 5.4 million students of the Erasmus-participating countries receive an Erasmus grant. To meet the goal of increasing the proportion of students studying aboard, Erasmus+ was launched in 2014 with a budget 40% higher than the previous programmes.</p><p>The Erasmus Impact Study highlights the diverse benefits of participation in the Erasmus and Erasmus+ programmes, showing that young people who study or train abroad not only gain knowledge in specific disciplines, but also strengthen key transversal skills which are highly valued by employers.</p><p>The study shows that 92% of employers are looking for personality traits boosted by the programme such as tolerance, confidence, problem-solving skills, curiosity, knowing one's strengths/weaknesses, and decisiveness when making a recruitment decision. Tests before and after exchange periods abroad reveal that Erasmus students show higher values for these personality traits, even before their exchange starts; by the time they come back, the difference in these values increases by 42% on average, compared with other students.</p><p>They can also expect faster career advancement; staff with international experience are given greater professional responsibility according to 64% of employers.</p><p>[[{\"fid\":\"16\",\"view_mode\":\"default\",\"fields\":{\"format\":\"default\",\"field_file_image_alt_text[und][0][value]\":\"\",\"field_file_image_title_text[und][0][value]\":\"\",\"field_caption[und][0][value]\":\"\"},\"type\":\"media\",\"link_text\":null,\"attributes\":{\"class\":\"media-element file-default\"}}]]</p><p>Erasmus students are half as likely to experience long-term unemployment compared with those who have not studied or trained abroad and, five years after graduation, their unemployment rate is 23% lower.</p><p>[[{\"fid\":\"15\",\"view_mode\":\"default\",\"fields\":{\"format\":\"default\",\"field_file_image_alt_text[und][0][value]\":\"\",\"field_file_image_title_text[und][0][value]\":\"\",\"field_caption[und][0][value]\":\"\"},\"type\":\"media\",\"link_text\":null,\"attributes\":{\"class\":\"media-element file-default\"}}]]</p><p>The report reveals that more than one in three Erasmus trainees is offered a position at the enterprise where they do their traineeship. Erasmus trainees are also more entrepreneurial than their stay-at-home counterparts: 1 in 10 has started their own company and more than 3 out of 4 plan to, or can imagine doing so.&nbsp;</p><p>[[{\"fid\":\"14\",\"view_mode\":\"default\",\"fields\":{\"format\":\"default\",\"field_file_image_alt_text[und][0][value]\":\"\",\"field_file_image_title_text[und][0][value]\":\"\",\"field_caption[und][0][value]\":\"\"},\"type\":\"media\",\"link_text\":null,\"attributes\":{\"class\":\"media-element file-default\"}}]]</p><p>Erasmus not only improves career prospects, it also offers students broader horizons and social links. 40% have changed their country of residence or work at least once since graduation, almost double the number of those who were not mobile during studies. While 93% of students with international experience can imagine living abroad in the future, this is the case for only 73% of those who stay in the same country during their studies. Former Erasmus students are also more likely to have transnational relationships: 33% of former Erasmus students have a partner of a different nationality, compared with 13% of those who stay home during their studies; 27% of Erasmus students meet their long-term partner while on Erasmus.</p><p>[[{\"fid\":\"13\",\"view_mode\":\"default\",\"fields\":{\"format\":\"default\",\"field_file_image_alt_text[und][0][value]\":\"\",\"field_file_image_title_text[und][0][value]\":\"\",\"field_caption[und][0][value]\":\"\"},\"type\":\"media\",\"link_text\":null,\"attributes\":{\"class\":\"media-element file-default\"}}]]</p><p>A majority of HEIs consider Erasmus to be the most relevant strategic asset of any educational programme offered to students. Of the various Erasmus actions, study mobility is considered the most important in relation to internationalisation by 83% of HEIs and for their international profile (80% of HEIs).</p><p>With regard to the impact of staff mobility, mobile staff had statistically significant higher values for five out of the six personality traits than non-mobile staff. More than 70% of the staff agreed that the most important aspect of their mobility was the increase in their knowledge of good practices and skills to the benefit of their home HEI. Of the academic staff, 81% observed beneficial effects on the quality of teaching and on multi-disciplinary and cross-organisational cooperation in teaching.</p>",
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => "<p>There are many institutional examples of how information on mobility-related activities is gathered and utilised, and of the positive outcomes and impacts on participating HEIs, businesses, staff and students. The 2014 Erasmus Impact Study provides a comprehensive overview of the range of benefits delivered through Erasmus+ participation. The study illustrates the impact of Erasmus participation on skills, employability and internationalisation in student and staff bodies as well as in organisations. The Erasmus Impact Study consulted 75,000 students and alumni, of which almost three quarters studied or trained abroad, further to 5,000 staff, 1,000 higher education institutions and 650 employers.</p>\n<p>The need to provide more opportunities for students to gain skills through studying or training abroad is discussed in the European Commission’s strategy for the modernisation of higher education. Currently, approximately 10% of EU students study or train abroad. According to recent figures from Eurostat, approximately 5% i.e. about 253,000 of the total 5.4 million students of the Erasmus-participating countries receive an Erasmus grant. To meet the goal of increasing the proportion of students studying aboard, Erasmus+ was launched in 2014 with a budget 40% higher than the previous programmes.</p>\n<p>The Erasmus Impact Study highlights the diverse benefits of participation in the Erasmus and Erasmus+ programmes, showing that young people who study or train abroad not only gain knowledge in specific disciplines, but also strengthen key transversal skills which are highly valued by employers.</p>\n<p>The study shows that 92% of employers are looking for personality traits boosted by the programme such as tolerance, confidence, problem-solving skills, curiosity, knowing one's strengths/weaknesses, and decisiveness when making a recruitment decision. Tests before and after exchange periods abroad reveal that Erasmus students show higher values for these personality traits, even before their exchange starts; by the time they come back, the difference in these values increases by 42% on average, compared with other students.</p>\n<p>They can also expect faster career advancement; staff with international experience are given greater professional responsibility according to 64% of employers.</p>\n<p></p><div class=\"media media-element-container media-default\"><div id=\"file-16\" class=\"file file-image file-image-png\">\n\n        <h2 class=\"element-invisible\"><a href=\"/en/file/141png\">14.1.png</a></h2>\n    \n  \n  <div class=\"content\">\n    <img class=\"media-element file-default\" typeof=\"foaf:Image\" src=\"http://eche.waat.eu/en/system/files/14.1.png\" alt=\"\" /><div class=\"field field-name-field-caption field-type-text field-label-hidden\"><div class=\"field-items\"><div class=\"field-item even\"></div></div></div>  </div>\n\n  \n</div>\n</div>\n<p>Erasmus students are half as likely to experience long-term unemployment compared with those who have not studied or trained abroad and, five years after graduation, their unemployment rate is 23% lower.</p>\n<p></p><div class=\"media media-element-container media-default\"><div id=\"file-15\" class=\"file file-image file-image-png\">\n\n        <h2 class=\"element-invisible\"><a href=\"/en/file/142png\">14.2.png</a></h2>\n    \n  \n  <div class=\"content\">\n    <img class=\"media-element file-default\" typeof=\"foaf:Image\" src=\"http://eche.waat.eu/en/system/files/14.2.png\" alt=\"\" /><div class=\"field field-name-field-caption field-type-text field-label-hidden\"><div class=\"field-items\"><div class=\"field-item even\"></div></div></div>  </div>\n\n  \n</div>\n</div>\n<p>The report reveals that more than one in three Erasmus trainees is offered a position at the enterprise where they do their traineeship. Erasmus trainees are also more entrepreneurial than their stay-at-home counterparts: 1 in 10 has started their own company and more than 3 out of 4 plan to, or can imagine doing so. </p>\n<p></p><div class=\"media media-element-container media-default\"><div id=\"file-14\" class=\"file file-image file-image-png\">\n\n        <h2 class=\"element-invisible\"><a href=\"/en/file/143png\">14.3.png</a></h2>\n    \n  \n  <div class=\"content\">\n    <img class=\"media-element file-default\" typeof=\"foaf:Image\" src=\"http://eche.waat.eu/en/system/files/14.3.png\" alt=\"\" /><div class=\"field field-name-field-caption field-type-text field-label-hidden\"><div class=\"field-items\"><div class=\"field-item even\"></div></div></div>  </div>\n\n  \n</div>\n</div>\n<p>Erasmus not only improves career prospects, it also offers students broader horizons and social links. 40% have changed their country of residence or work at least once since graduation, almost double the number of those who were not mobile during studies. While 93% of students with international experience can imagine living abroad in the future, this is the case for only 73% of those who stay in the same country during their studies. Former Erasmus students are also more likely to have transnational relationships: 33% of former Erasmus students have a partner of a different nationality, compared with 13% of those who stay home during their studies; 27% of Erasmus students meet their long-term partner while on Erasmus.</p>\n<p></p><div class=\"media media-element-container media-default\"><div id=\"file-13\" class=\"file file-image file-image-png\">\n\n        <h2 class=\"element-invisible\"><a href=\"/en/file/144png\">14.4.png</a></h2>\n    \n  \n  <div class=\"content\">\n    <img class=\"media-element file-default\" typeof=\"foaf:Image\" src=\"http://eche.waat.eu/en/system/files/14.4.png\" alt=\"\" /><div class=\"field field-name-field-caption field-type-text field-label-hidden\"><div class=\"field-items\"><div class=\"field-item even\"></div></div></div>  </div>\n\n  \n</div>\n</div>\n<p>A majority of HEIs consider Erasmus to be the most relevant strategic asset of any educational programme offered to students. Of the various Erasmus actions, study mobility is considered the most important in relation to internationalisation by 83% of HEIs and for their international profile (80% of HEIs).</p>\n<p>With regard to the impact of staff mobility, mobile staff had statistically significant higher values for five out of the six personality traits than non-mobile staff. More than 70% of the staff agreed that the most important aspect of their mobility was the increase in their knowledge of good practices and skills to the benefit of their home HEI. Of the academic staff, 81% observed beneficial effects on the quality of teaching and on multi-disciplinary and cross-organisational cooperation in teaching.</p>\n",
          'safe_summary' => '',
        ),
      ),
    ),
    'field_case_study_contact' => array(),
    'field_case_study_contact_email' => array(
      LANGUAGE_NONE => array(
        array(
          'email' => 'uwe.brandenburg@che-consult.de',
        ),
      ),
    ),
    'field_case_study_contact_name' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'Uwe Brandenburg, CHE Consult',
          'format' => NULL,
          'safe_value' => 'Uwe Brandenburg, CHE Consult',
        ),
      ),
    ),
    'field_case_study_country' => array(),
    'field_case_study_further_reading' => array(
      LANGUAGE_NONE => array(
        array(
          'url' => 'http://ec.europa.eu/education/library/study/2014/erasmus-impact_en.pdf',
          'title' => 'The Erasmus Impact Study ',
          'attributes' => array(),
        ),
      ),
    ),
    'field_case_study_org_type' => array(),
    'field_case_study_organisation' => array(),
    'field_case_study_introduction' => array(),
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

    'print_html_display' => 0,
    'print_html_display_comment' => 0,
    'print_html_display_urllist' => 0,
    'print_mail_display' => 0,
    'print_mail_display_comment' => 0,
    'print_mail_display_urllist' => 0,
    'print_pdf_display' => 1,
    'print_pdf_display_comment' => 0,
    'print_pdf_display_urllist' => 1,
    'print_pdf_size' => '',
    'print_pdf_orientation' => '',
    'path' => array(
      'alias' => 'case-study/erasmus-impacts-study-effects-mobility-skills-and-employability-students-and',
      'language' => 'en',
    ),
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
 * Create page programmatic.
 *
 * "Recognition of staff participating in Erasmus staff mobility
 * actions and international cooperation projects".
 */
function eche_core_create_recognition_of_staff_study_page() {
  $title = 'Recognition of staff participating in Erasmus staff mobility actions and international cooperation projects';
  $type = 'case_study';
  $node = eche_core_case_study_check_if_page_exist($title, $type);

  $node_data = new stdClass();

  $node_data = (object) array(
    'uid' => '1',
    'title' => 'Recognition of staff participating in Erasmus staff mobility actions and international cooperation projects',
    'log' => '',
    'status' => '1',
    'comment' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'case_study',
    'language' => 'en',
    'translate' => '0',
    'body' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '<p>The Erasmus+ programme is not only for students. It also supports the exchange and training of academic and administrative staff, and promotes various forms of international cooperation. Thereby, Erasmus+ plays an important role in the modernisation of higher education and helps open up education within Europe. Participation in international projects should also be seen as an important aspect for professional development and for the modernisation of a higher education institution and should, therefore, be considered a key component in staff evaluation and appraisal practices.</p><p>The Universitat Politècnica de València (UPV) in Spain was awarded a prize in the 2013 Erasmus Excellence awards in recognition of its management of staff mobility within the Erasmus programme. The practices of UPV were highlighted as “an excellent example of what can be achieved if staff mobility is used strategically to encourage and constantly improve teaching and learning quality".&nbsp;</p><p>UPV was officially recognised as a technical university in 1971. It currently encompasses 13 schools and faculties, located on three campuses with a student enrolment of about 34 thousand. The university employs around 2,400 teaching and research staff further to 1,500 administrative and services personnel. During the academic year of 2014/15, 179 UPV faculty members participated in the Erasmus+ Staff Mobility for Teaching, and a further 69 faculty members took part in the Erasmus+ Staff Mobility for Training. The university welcomed a similar number of incoming mobile staff from partner institutions.</p><p>UPV actively promotes international staff mobility through its central International Exchange Programmes Office, and international offices at each of the university’s schools and faculties. To incentivise participation, the university uses institutional funding to co-fund Erasmus+ staff mobility grants.</p><p>In addition, UPV recognises Erasmus+ staff mobility activities as part of their formal staff performance assessment. Lecturing / teaching at other universities, as well as participation in activities offered by other institutions, aimed at improving UPV’s teaching practice count towards staff members’ “Indicator of Teaching Activity” (IAD). The IAD is then combined with indicators for research and management performance to determine the overall staff performance level. In this way, participation in staff mobility can support the individual’s career progression.</p><p>UPV tracks all student and staff mobility in its general management system. The international managers at the central international office extract this information and use it to calculate an ‘internationalisation’ index for each school and faculty. The index incorporates several parameters including the number of students and staff participating in mobility activities, and the ratio of incoming to outgoing students. The resulting reports are circulated to the international relations managers at each school / faculty for comments and remarks, and the final versions shared with the Vice-deans of International Relations, the Director of Academic Exchanges, the Director of International Affairs and the Head of the Rector´s Office. In this way, insights gained feed into the university’s internationalisation policies and objectives, ensuring that these are aligned with the current situation. In addition, central, school, and faculty international offices hold monthly coordination meetings to exchange best practice and agree on a common approach to "developing internationalisation".</p><p>As students and staff return to UPV, they complete the Erasmus+ participant report provided by the European Commission, which gauges the participants’ levels of satisfaction with their experience and how well the mobility was organised. Going forward, the university is planning to exploit this data to measure the quality of participants’ experience at the various partner institutions, which can then serve to make decisions on boosting or ‘cutting’ mobility with certain partners (see the university’s previous system which it is now replacing with the information from the Erasmus+ participant reports: <a href="http://www.opii.upv.es/enlaces_internos/resultadosE421112.asp?pais=&amp;universidad">http://www.opii.upv.es/enlaces_internos/resultadosE421112.asp?pais=&amp;universidad</a>&nbsp;</p><p>This will also allow participants to directly propose improvements to the way mobility programmes are supported and managed by the International Exchange Programmes Office at UPV.</p><p>Erasmus staff mobility has led to the development of international joint projects in teaching and research at UPV, including an increase in double degrees. Recent examples of multi-national, multi-institutional initiatives kicked off through staff mobility activities include a project looking at the skills needed to succeed in the international work environment (a collaboration with universities in Finland, the UK and Poland), and a project on how to develop and assess the innovation competency (a collaboration with universities in Finland, Germany, the Netherlands, and the UK).&nbsp;</p>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => "<p>The Erasmus+ programme is not only for students. It also supports the exchange and training of academic and administrative staff, and promotes various forms of international cooperation. Thereby, Erasmus+ plays an important role in the modernisation of higher education and helps open up education within Europe. Participation in international projects should also be seen as an important aspect for professional development and for the modernisation of a higher education institution and should, therefore, be considered a key component in staff evaluation and appraisal practices.</p>\n<p>The Universitat Politècnica de València (UPV) in Spain was awarded a prize in the 2013 Erasmus Excellence awards in recognition of its management of staff mobility within the Erasmus programme. The practices of UPV were highlighted as “an excellent example of what can be achieved if staff mobility is used strategically to encourage and constantly improve teaching and learning quality\". </p>\n<p>UPV was officially recognised as a technical university in 1971. It currently encompasses 13 schools and faculties, located on three campuses with a student enrolment of about 34 thousand. The university employs around 2,400 teaching and research staff further to 1,500 administrative and services personnel. During the academic year of 2014/15, 179 UPV faculty members participated in the Erasmus+ Staff Mobility for Teaching, and a further 69 faculty members took part in the Erasmus+ Staff Mobility for Training. The university welcomed a similar number of incoming mobile staff from partner institutions.</p>\n<p>UPV actively promotes international staff mobility through its central International Exchange Programmes Office, and international offices at each of the university’s schools and faculties. To incentivise participation, the university uses institutional funding to co-fund Erasmus+ staff mobility grants.</p>\n<p>In addition, UPV recognises Erasmus+ staff mobility activities as part of their formal staff performance assessment. Lecturing / teaching at other universities, as well as participation in activities offered by other institutions, aimed at improving UPV’s teaching practice count towards staff members’ “Indicator of Teaching Activity” (IAD). The IAD is then combined with indicators for research and management performance to determine the overall staff performance level. In this way, participation in staff mobility can support the individual’s career progression.</p>\n<p>UPV tracks all student and staff mobility in its general management system. The international managers at the central international office extract this information and use it to calculate an ‘internationalisation’ index for each school and faculty. The index incorporates several parameters including the number of students and staff participating in mobility activities, and the ratio of incoming to outgoing students. The resulting reports are circulated to the international relations managers at each school / faculty for comments and remarks, and the final versions shared with the Vice-deans of International Relations, the Director of Academic Exchanges, the Director of International Affairs and the Head of the Rector´s Office. In this way, insights gained feed into the university’s internationalisation policies and objectives, ensuring that these are aligned with the current situation. In addition, central, school, and faculty international offices hold monthly coordination meetings to exchange best practice and agree on a common approach to \"developing internationalisation\".</p>\n<p>As students and staff return to UPV, they complete the Erasmus+ participant report provided by the European Commission, which gauges the participants’ levels of satisfaction with their experience and how well the mobility was organised. Going forward, the university is planning to exploit this data to measure the quality of participants’ experience at the various partner institutions, which can then serve to make decisions on boosting or ‘cutting’ mobility with certain partners (see the university’s previous system which it is now replacing with the information from the Erasmus+ participant reports: <a href=\"http://www.opii.upv.es/enlaces_internos/resultadosE421112.asp?pais=&amp;universidad\">http://www.opii.upv.es/enlaces_internos/resultadosE421112.asp?pais=&amp;universidad</a> </p>\n<p>This will also allow participants to directly propose improvements to the way mobility programmes are supported and managed by the International Exchange Programmes Office at UPV.</p>\n<p>Erasmus staff mobility has led to the development of international joint projects in teaching and research at UPV, including an increase in double degrees. Recent examples of multi-national, multi-institutional initiatives kicked off through staff mobility activities include a project looking at the skills needed to succeed in the international work environment (a collaboration with universities in Finland, the UK and Poland), and a project on how to develop and assess the innovation competency (a collaboration with universities in Finland, Germany, the Netherlands, and the UK). </p>\n",
          'safe_summary' => '',
        ),
      ),
    ),
    'field_case_study_contact' => array(),
    'field_case_study_contact_email' => array(
      LANGUAGE_NONE => array(
        array(
          'email' => 'opii@upvnet.upv.es',
        ),
      ),
    ),
    'field_case_study_contact_name' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'International Exchange Programmes Office',
          'format' => NULL,
          'safe_value' => 'International Exchange Programmes Office',
        ),
      ),
    ),
    'field_case_study_country' => array(
      LANGUAGE_NONE => array(
        array(
          'iso2' => 'ES',
        ),
      ),
    ),
    'field_case_study_further_reading' => array(
      LANGUAGE_NONE => array(
        array(
          'url' => 'https://www.upv.es/organizacion/la-institucion/historia/historia1-en.html',
          'title' => 'About UPV, history',
          'attributes' => array(),
        ),
        array(
          'url' => 'https://www.upv.es/noticias-upv/noticia-5723-buenas-practica-en.html',
          'title' => 'Erasmus best practices',
          'attributes' => array(),
        ),
      ),
    ),
    'field_case_study_org_type' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '3',
        ),
      ),
    ),
    'field_case_study_organisation' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'Universitat Politècnica de València (Polytechnic University of Valencia)',
          'format' => NULL,
          'safe_value' => 'Universitat Politècnica de València (Polytechnic University of Valencia)',
        ),
      ),
    ),
    'field_case_study_introduction' => array(),
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

    'print_html_display' => 0,
    'print_html_display_comment' => 0,
    'print_html_display_urllist' => 0,
    'print_mail_display' => 0,
    'print_mail_display_comment' => 0,
    'print_mail_display_urllist' => 0,
    'print_pdf_display' => 1,
    'print_pdf_display_comment' => 0,
    'print_pdf_display_urllist' => 1,
    'print_pdf_size' => '',
    'print_pdf_orientation' => '',
    'path' => array(
      'alias' => 'case-study/recognition-staff-participating-erasmus-staff-mobility-actions-and-international',
      'language' => 'en',
    ),
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
 * Create page programmatic.
 *
 * "The Diploma Supplement – a tool to promote international recognition
 *  and transparency of academic achievement".
 */
function eche_core_create_the_diploma_supplemen_study_page() {
  $title = 'The Diploma Supplement – a tool to promote international recognition and transparency of academic achievement ';
  $type = 'case_study';
  $node = eche_core_case_study_check_if_page_exist($title, $type);

  $node_data = new stdClass();

  $node_data = (object) array(

    'uid' => '1',
    'title' => 'The Diploma Supplement – a tool to promote international recognition and transparency of academic achievement',
    'log' => '',
    'status' => '1',
    'comment' => '1',
    'promote' => '0',
    'type' => 'case_study',
    'language' => 'en',
    'translate' => '0',
    'body' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => "<p>The Diploma Supplement is a document accompanying a higher education diploma, providing a standardised description of the nature, level, context, content and status of the studies completed by its holder. It is issued by higher education institutions according to agreed standards with the aim of improving international ‘transparency’ and fair academic and professional recognition of qualifications. Graduates in all the countries taking part in the Bologna Process have the right to receive the Diploma Supplement automatically, free of charge and in a major European language.</p><p>The University of Groningen was awarded the Diploma Supplement label in 2009 by the European Commission for successfully implementing the Diploma Supplement. The label was renewed for the 2013 – 2016 period, with special mention of the newly-introduced ECTS Grade Distribution Table as an ‘example of good practice’.The Rijksuniversiteit Groningen (University of Groningen, RUG),&nbsp;founded in 1614, is the second oldest university in the Netherlands. It has a student enrolment of nearly 30,000 across ten&nbsp;faculties covering all academic fields. The university offers&nbsp;26 English-taught degree programmes at Bachelor’s level, as well as&nbsp;around 100 English-taught Master’s degree programmes.&nbsp;It has a significant international community, with 5,000 Master’s and Bachelor’s degree students and more than half of the PhD student body hailing from abroad. In addition,&nbsp;RUG hosted around 1,400 exchange students in 2014.</p><p>Student and staff exchanges form an important part of the institution’s internationalisation policy, and the university is working towards the aim of enabling half of its&nbsp;students to gain experience abroad over the course of their studies.</p><p>All students of the University of Groningen receive a Diploma Supplement automatically and free of charge with their Bachelor’s and Master’s degree certificates. While the degree&nbsp;certificate is issued in Latin, translations of the degree certificate are provided in Dutch and in English. The Diploma Supplement is provided in English and includes the Transcript of&nbsp;Records.&nbsp;A sample Diploma Supplement can be viewed on the university’s public website.</p><p>On renewal of the Diploma Supplement label in 2013, the European Commission recognised RUG's new-style Diploma Supplement, which introduced the ECTS Grade Distribution Table, as an&nbsp;example of good practice.&nbsp;Institutions and prospective employers abroad may not be familiar with the Dutch grading system (a scale from 1 to 10), and are hence unable to interpret the marks achieved. Furthermore, the&nbsp;same grade may be more difficult to attain in different courses&nbsp;of the university, complicating a fair assessment of the individual’s performance.&nbsp;To address this issue, the RUG Diploma Supplement includes the ECTS Grade Distribution Table, which provides statistical information on marks allocated to its students <em>over the previous three years</em>. The table is prepared by the administrative units of each faculty combining marks for individual degree programmes or, for smaller courses, for clusters of similar programmes. It thus allows comparison of individual students with that of other students who completed the same programme, allowing for a fairer and transparent assessment of performance and qualifications.&nbsp;</p><p>An example of the ECTS grade distribution table is provided below.</p><p>[[{\"fid\":\"12\",\"view_mode\":\"default\",\"fields\":{\"format\":\"default\",\"field_file_image_alt_text[und][0][value]\":\"\",\"field_file_image_title_text[und][0][value]\":\"\",\"field_caption[und][0][value]\":\"\"},\"type\":\"media\",\"attributes\":{\"class\":\"media-element file-default\"},\"link_text\":null}]]</p>",
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => "<p>The Diploma Supplement is a document accompanying a higher education diploma, providing a standardised description of the nature, level, context, content and status of the studies completed by its holder. It is issued by higher education institutions according to agreed standards with the aim of improving international ‘transparency’ and fair academic and professional recognition of qualifications. Graduates in all the countries taking part in the Bologna Process have the right to receive the Diploma Supplement automatically, free of charge and in a major European language.</p>\n<p>The University of Groningen was awarded the Diploma Supplement label in 2009 by the European Commission for successfully implementing the Diploma Supplement. The label was renewed for the 2013 – 2016 period, with special mention of the newly-introduced ECTS Grade Distribution Table as an ‘example of good practice’.The Rijksuniversiteit Groningen (University of Groningen, RUG), founded in 1614, is the second oldest university in the Netherlands. It has a student enrolment of nearly 30,000 across ten faculties covering all academic fields. The university offers 26 English-taught degree programmes at Bachelor’s level, as well as around 100 English-taught Master’s degree programmes. It has a significant international community, with 5,000 Master’s and Bachelor’s degree students and more than half of the PhD student body hailing from abroad. In addition, RUG hosted around 1,400 exchange students in 2014.</p>\n<p>Student and staff exchanges form an important part of the institution’s internationalisation policy, and the university is working towards the aim of enabling half of its students to gain experience abroad over the course of their studies.</p>\n<p>All students of the University of Groningen receive a Diploma Supplement automatically and free of charge with their Bachelor’s and Master’s degree certificates. While the degree certificate is issued in Latin, translations of the degree certificate are provided in Dutch and in English. The Diploma Supplement is provided in English and includes the Transcript of Records. A sample Diploma Supplement can be viewed on the university’s public website.</p>\n<p>On renewal of the Diploma Supplement label in 2013, the European Commission recognised RUG's new-style Diploma Supplement, which introduced the ECTS Grade Distribution Table, as an example of good practice. Institutions and prospective employers abroad may not be familiar with the Dutch grading system (a scale from 1 to 10), and are hence unable to interpret the marks achieved. Furthermore, the same grade may be more difficult to attain in different courses of the university, complicating a fair assessment of the individual’s performance. To address this issue, the RUG Diploma Supplement includes the ECTS Grade Distribution Table, which provides statistical information on marks allocated to its students <em>over the previous three years</em>. The table is prepared by the administrative units of each faculty combining marks for individual degree programmes or, for smaller courses, for clusters of similar programmes. It thus allows comparison of individual students with that of other students who completed the same programme, allowing for a fairer and transparent assessment of performance and qualifications. </p>\n<p>An example of the ECTS grade distribution table is provided below.</p>\n<p></p><div class=\"media media-element-container media-default\"><div id=\"file-12\" class=\"file file-image file-image-png\">\n\n        <h2 class=\"element-invisible\"><a href=\"/en/file/111png\">11.1.png</a></h2>\n    \n  \n  <div class=\"content\">\n    <img class=\"media-element file-default\" typeof=\"foaf:Image\" src=\"http://eche.waat.eu/en/system/files/11.1.png\" alt=\"\" /><div class=\"field field-name-field-caption field-type-text field-label-hidden\"><div class=\"field-items\"><div class=\"field-item even\"></div></div></div>  </div>\n\n  \n</div>\n</div>\n",
          'safe_summary' => '',
        ),
      ),
    ),
    'field_case_study_contact' => array(),
    'field_case_study_contact_email' => array(
      LANGUAGE_NONE => array(
        array(
          'email' => 'r.j.van.groningen@rug.nl',
        ),
      ),
    ),
    'field_case_study_contact_name' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'Dr Regine van Groningen',
          'format' => NULL,
          'safe_value' => 'Dr Regine van Groningen',
        ),
      ),
    ),
    'field_case_study_country' => array(
      LANGUAGE_NONE => array(
        array(
          'iso2' => 'NL',
        ),
      ),
    ),
    'field_case_study_further_reading' => array(
      LANGUAGE_NONE => array(
        array(
          'url' => 'http://www.rug.nl/education/find-out-more/studying-at-university/diploma-supplement-ects-labels',
          'title' => 'Diploma supplement ECTS labels at RUG',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://bookshop.europa.eu/en/celebrating-ects-and-diploma-supplement-label-holders-2009-2013-pbNC0514040',
          'title' => 'Erasmus+ - Celebrating ECTS and Diploma Supplement Label Holders 2009-2013 (2015) European Commission',
          'attributes' => array(),
        ),
      ),
    ),
    'field_case_study_org_type' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '1',
        ),
      ),
    ),
    'field_case_study_organisation' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'Rijksuniversiteit Groningen  / University of Groningen',
          'format' => NULL,
          'safe_value' => 'Rijksuniversiteit Groningen  / University of Groningen',
        ),
      ),
    ),
    'field_case_study_introduction' => array(),
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

    'print_html_display' => 0,
    'print_html_display_comment' => 0,
    'print_html_display_urllist' => 0,
    'print_mail_display' => 0,
    'print_mail_display_comment' => 0,
    'print_mail_display_urllist' => 0,
    'print_pdf_display' => 1,
    'print_pdf_display_comment' => 0,
    'print_pdf_display_urllist' => 1,
    'print_pdf_size' => '',
    'print_pdf_orientation' => '',
    'path' => array(
      'alias' => 'case-study/diploma-supplement-–-tool-promote-international-recognition-and-transparency-academic',
      'language' => 'en',
    ),
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
 * Create page programmatic.
 *
 * "A common approach to ECTS grade conversion, ensuring a fair assessment of
 * student performance after study abroad".
 */
function eche_core_create_a_common_approach_to_ects_page() {
  $title = 'A common approach to ECTS grade conversion, ensuring a fair assessment of student performance after study abroad';
  $type = 'case_study';
  $node = eche_core_case_study_check_if_page_exist($title, $type);

  $node_data = (object) array(

    'uid' => '1',
    'title' => 'A common approach to ECTS grade conversion, ensuring a fair assessment of student performance after study abroad',
    'log' => '',
    'status' => '1',
    'comment' => '1',
    'promote' => '0',
    'sticky' => '0',

    'type' => 'case_study',
    'language' => 'en',

    'body' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '<p style="margin-left:2.85pt">European educational systems have developed different approaches to grading, deeply rooted in their academic and cultural traditions. Different grading scales may be used across various institutions in a single country. For example, in Germany, the most frequently applied grading scale ranges from 6 (worst) to 1 (best), but some Bachelor’s and Master’s programmes use a scale from 0 to 15. In neigbouring France, a scale from 0 to 20 is used. This variation poses significant challenges to the fair recognition of students’ achievements after a mobility period.</p><p>In September 2015, the European Grade Conversion System (EGRACONS) project launched a free online tool enabling the direct and automatic conversion of grades between higher education institutions (HEIs). It allows harmonisation of grade conversion within Europe and may ultimately contribute to a more transparent grading culture.&nbsp;</p><p style="margin-left:2.85pt">In 2009, and again in 2015, the European Commission published new versions of the ECTS Users’ guide. The guide proposes implementation of ECTS grade distribution tables in place of the older ECTS grading scale (A, B, C, D, E). &nbsp;To harmonise implementation of the new system across institutions, a consortium of 12 universities supported by two European Universities’ Networks (representing ) came together under the EGRACONS project. The three-year project (2012-2015), co-funded by the European Commission, had two aims: i) to</p><p style="margin-left:2.85pt">As a result, the EGRACONS tool was launched in September 2015. It is a user-friendly web-based tool available to HEIs that participate in Erasmus+ mobility activities and/or other student exchanges to comply with the principles of grade conversion outlined in the ECTS Users’ Guide. International Standard Classification of Education (</p><p style="margin-left:2.85pt">To use the tool, HEIs need to upload their own grading tables to the tool’s database. The percentage rank of an individual student within this distribution can then be used to determine the equivalent grade in any other grading table uploaded to the tool’s database, allowing a fair conversion of the student’s grades. The EGRACONS tool thus offers a comprehensible, transparent and easy to use methodology, which allows the harmonisation of grade conversion within Europe. While the project is now completed, the tool will be maintained and the website updated through resources provided by the Santander Group. Going forward, there are plans to incorporate it into the Erasmus+ funded “Erasmus Without Paper” (EWP) project (2015-2017).</p><p style="margin-left:2.85pt">As part of the EGRACONS project, the participating institutions also carried out analyses of existing grading practices in their respective countries by completing an extensive questionnaire. This information was summarised in country-specific reports and made publicly available on the EGRACONS website. Each report provides an explanation of distinctive features and grading cultures per country and institution, including the range and average distribution of grades, required overall averages, and differences among disciplines. This information allows for a better interpretation of each grading system and gives confidence in the grade conversions suggested by the EGRACONS online tool in line with the methodology outlined in the ECTS Users’ Guide. &nbsp;</p><p>The EGRACONS project and resulting tool takes concrete approaches based in real-world data and analysis to bridge the gap between different grading practices across Europe. This is an important step in enabling rational and transparent grade conversions for students who study abroad under programmes such as Erasmus+.&nbsp;</p>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => "<p style=\"margin-left:2.85pt\">European educational systems have developed different approaches to grading, deeply rooted in their academic and cultural traditions. Different grading scales may be used across various institutions in a single country. For example, in Germany, the most frequently applied grading scale ranges from 6 (worst) to 1 (best), but some Bachelor’s and Master’s programmes use a scale from 0 to 15. In neigbouring France, a scale from 0 to 20 is used. This variation poses significant challenges to the fair recognition of students’ achievements after a mobility period.</p>\n<p>In September 2015, the European Grade Conversion System (EGRACONS) project launched a free online tool enabling the direct and automatic conversion of grades between higher education institutions (HEIs). It allows harmonisation of grade conversion within Europe and may ultimately contribute to a more transparent grading culture. </p>\n<p style=\"margin-left:2.85pt\">In 2009, and again in 2015, the European Commission published new versions of the ECTS Users’ guide. The guide proposes implementation of ECTS grade distribution tables in place of the older ECTS grading scale (A, B, C, D, E).  To harmonise implementation of the new system across institutions, a consortium of 12 universities supported by two European Universities’ Networks (representing ) came together under the EGRACONS project. The three-year project (2012-2015), co-funded by the European Commission, had two aims: i) to</p>\n<p style=\"margin-left:2.85pt\">As a result, the EGRACONS tool was launched in September 2015. It is a user-friendly web-based tool available to HEIs that participate in Erasmus+ mobility activities and/or other student exchanges to comply with the principles of grade conversion outlined in the ECTS Users’ Guide. International Standard Classification of Education (</p>\n<p style=\"margin-left:2.85pt\">To use the tool, HEIs need to upload their own grading tables to the tool’s database. The percentage rank of an individual student within this distribution can then be used to determine the equivalent grade in any other grading table uploaded to the tool’s database, allowing a fair conversion of the student’s grades. The EGRACONS tool thus offers a comprehensible, transparent and easy to use methodology, which allows the harmonisation of grade conversion within Europe. While the project is now completed, the tool will be maintained and the website updated through resources provided by the Santander Group. Going forward, there are plans to incorporate it into the Erasmus+ funded “Erasmus Without Paper” (EWP) project (2015-2017).</p>\n<p style=\"margin-left:2.85pt\">As part of the EGRACONS project, the participating institutions also carried out analyses of existing grading practices in their respective countries by completing an extensive questionnaire. This information was summarised in country-specific reports and made publicly available on the EGRACONS website. Each report provides an explanation of distinctive features and grading cultures per country and institution, including the range and average distribution of grades, required overall averages, and differences among disciplines. This information allows for a better interpretation of each grading system and gives confidence in the grade conversions suggested by the EGRACONS online tool in line with the methodology outlined in the ECTS Users’ Guide.  </p>\n<p>The EGRACONS project and resulting tool takes concrete approaches based in real-world data and analysis to bridge the gap between different grading practices across Europe. This is an important step in enabling rational and transparent grade conversions for students who study abroad under programmes such as Erasmus+. </p>\n",
          'safe_summary' => '',
        ),
      ),
    ),
    'field_case_study_contact' => array(),
    'field_case_study_contact_email' => array(
      LANGUAGE_NONE => array(
        array(
          'email' => 'egracons@sgroup.be',
        ),
      ),
    ),
    'field_case_study_contact_name' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'Valere Meus, Ghent University',
          'format' => NULL,
          'safe_value' => 'Valere Meus, Ghent University',
        ),
      ),
    ),
    'field_case_study_country' => array(),
    'field_case_study_further_reading' => array(
      LANGUAGE_NONE => array(
        array(
          'url' => 'http://egracons.eu/document/grading-table-instructions-and-template',
          'title' => 'Egracons - Grading Table instructions and template',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://ec.europa.eu/education/ects/users-guide/grade-distribution_en.htm',
          'title' => 'ECTS mobility - Grade distribution',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://egracons.eu/page/country-reports',
          'title' => 'Egracons project - country reports',
          'attributes' => array(),
        ),
      ),
    ),
    'field_case_study_org_type' => array(),
    'field_case_study_organisation' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'EGRACONS – European Grade Conversion System',
          'format' => NULL,
          'safe_value' => 'EGRACONS – European Grade Conversion System',
        ),
      ),
    ),
    'field_case_study_introduction' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'A project co-funded by the European Commission, with original participation from 12 countries and 2 university netwo',
          'format' => NULL,
          'safe_value' => 'A project co-funded by the European Commission, with original participation from 12 countries and 2 university netwo',
        ),
      ),
    ),
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

    'print_html_display' => 0,
    'print_html_display_comment' => 0,
    'print_html_display_urllist' => 0,
    'print_mail_display' => 0,
    'print_mail_display_comment' => 0,
    'print_mail_display_urllist' => 0,
    'print_pdf_display' => 1,
    'print_pdf_display_comment' => 0,
    'print_pdf_display_urllist' => 1,
    'print_pdf_size' => '',
    'print_pdf_orientation' => '',
    'path' => array(

      'alias' => 'case-study/common-approach-ects-grade-conversion-ensuring-fair-assessment-student-performance-after',
      'language' => 'en',
    ),
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
 * Create  page programmatically.
 *
 * "Helping students integrate into the life of the institution and the local
 * community".
 */
function eche_core_create_helping_students_integrate_page() {
  $title = 'Helping students integrate into the life of the institution and the local community ';
  $type = 'case_study';
  $node = eche_core_case_study_check_if_page_exist($title, $type);

  $node_data = new stdClass();

  $node_data = (object) array(
    'title' => 'Helping students integrate into the life of the institution and the local community',
    'log' => '',
    'status' => '1',
    'comment' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'case_study',
    'language' => 'en',
    'body' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => "<p>Lund University (LU) is located in southern Sweden, and it has a student enrolment of 42,000. Its eight faculties cover a broad spectrum of academic disciplines, from engineering and medicine to law and fine arts. LU is one of the most active institutions in the Erasmus programme. The university ranked number 18 in the list of “Top 100 HEIs receiving Erasmus students” in 2012/13. It hosts around 900 Erasmus students every year and has agreements with around 400 HEIs in Europe.</p><p>To help mobile students settle in and integrate into the community, the university offers support from the moment they set foot in their new ‘home’. On arrival at the airport, newcomers are greeted by student volunteers, easily recognised in light blue t-shirts with the LU logo, and directed to the correct platform for the train to Lund. Once in the city of Lund, free minivans pick up the students from the railway station and take them to the Arrivals Day venue. At this ‘one-stop shop’, students register with the university, collect the keys to their accommodation, and receive a welcome package that includes a guide with information about LU and student life, a Swedish SIM-card for their mobile phone, a map, and information about public transportation. They can also sign up for orientation activities and buy essentials for the first night - pillows and blankets - as well as some other basic home furnishing products. A free shuttle is available to then drop students at their accommodation. For those who have the energy after this full day of activites, students are invited to an ‘Arrival Meet-up’ where they can snack on chips and drinks and get to know other students on their first night at LU.</p><p>During the first couple of weeks, incoming students participate in an orientation programme organised by the International Desk of LU and by student organisations. Orientation programme events and activities include:</p><ul><li>General information meeting: Incoming mobile students are expected to attend an information meeting at which staff from the University, Student Health services, student organisations, and the Swedish police provide useful information about life in Lund and at LU.</li><li>Official welcome: The Vice-Chancellor of LU and the mayor of Lund host a welcome reception for all new international students.</li><li>Coordinators’ Day: Students meet their academic coordinators to finalise study plans. Coordinators remain available for advice on all academic matters for the duration of the mobilty period.</li><li>Introductory Swedish Language Course: Mobile students are offered a \"Swedish in a nutshell\" course before regular university classes start, which is designed to give an introduction to the Swedish language.&nbsp;Students can choose to sit the exam held at the end of the course, which, if successfully completed, results in 3 ECTS credits. Students also have the opportunity to take additional Swedish language courses at LU (‘Swedish for Exchange Students’) during their mobility period as part of their study plan. Alternatively, they can continue practising their Swedish more informally at a free weekly social event, the ‘Swedish Lounge’, organised by the International Desk at LU.</li><li>Mentor group meeting: All new exchange students are assigned to an international mentor group ahead of arrival, consisting of 3-4 mentors (Swedish students and current international students) and 15-25 new international students. Mentors contact incoming students via email a few weeks before they arrive to answer any questions about the university and life in Lund. After students have arrived, the mentors arrange activities together which facilitates their integration into the student community. In recognition of the important contribution student mentors make, LU awards an official mentor certificate to those who successfully complete a semester of mentoring.</li><li>Other orientation and social events: Incoming students can choose from a broad range of activities aimed at helping them to get to know their new environment and make new friends. To name a few, these include excursions to the surrounding countryside, a Swedish food-tasting event, campus walking tours, tours of city attractions, a sports day, pub quizzes, concerts, and game and movie evenings. On a more practical note, the university even offers a bus trip to a large furniture and home furnishing store in Malmö.</li></ul><p>Throughout their time at LU, international students are offered activities to help them integrate into the community and make them feel at home. The university hosts 13 'nations', large student social clubs each with its own particular atmosphere which offer a wide range of activites including lunches, brunches, sports, night clubs, formal balls and traditional festivities. Membership to a ‘nation’ is open to all LU students, and makes it easy for mobility students to make local friends. International students who speak English, French, German, or Spanish have the opportunity to contribute to the local community by volunteering at a local school, helping pupils to learn their native language. Other activities include weekly board game evenings, special events to watch and play basketball offered by the Lund basketball club, industry visits (e.g. Tetra Pak and Alfa Laval), karaoke nights, and Christmas market visits.When mobile students arrive at their host institutions, they face the daunting task of navigating and settling into an unfamiliar higher education institution (HEI) system, making friends, and integrating into the local culture. Many institutions facilitate this process by offering a range of support activities, such as informational meetings, academic mentor schemes, and language courses. Local student networks, such as the Erasmus Student Network (ESN), also often set up ‘buddy systems’ and organise social and cultural events.</p><p>Lund University is an example of such an institution, offering an extensive programme of activities to help incoming students integrate into the life of the institution and of the local community, make friends, and feel ‘at home’ right from the start. The University’s approach to student integration is holistic. LU offers a full and carefully-programmed range of events to help students settle in,and meet new people.&nbsp; This centres around welcome and orientation activities in the early stages of the students’ mobility periods, but continues well beyond this, throughout term time. Opportunities to make real contributions to the local community are also put forward, helping incoming students to integrate into their new environment in other meaningful ways.</p>",
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => "<p>Lund University (LU) is located in southern Sweden, and it has a student enrolment of 42,000. Its eight faculties cover a broad spectrum of academic disciplines, from engineering and medicine to law and fine arts. LU is one of the most active institutions in the Erasmus programme. The university ranked number 18 in the list of “Top 100 HEIs receiving Erasmus students” in 2012/13. It hosts around 900 Erasmus students every year and has agreements with around 400 HEIs in Europe.</p>\n<p>To help mobile students settle in and integrate into the community, the university offers support from the moment they set foot in their new ‘home’. On arrival at the airport, newcomers are greeted by student volunteers, easily recognised in light blue t-shirts with the LU logo, and directed to the correct platform for the train to Lund. Once in the city of Lund, free minivans pick up the students from the railway station and take them to the Arrivals Day venue. At this ‘one-stop shop’, students register with the university, collect the keys to their accommodation, and receive a welcome package that includes a guide with information about LU and student life, a Swedish SIM-card for their mobile phone, a map, and information about public transportation. They can also sign up for orientation activities and buy essentials for the first night - pillows and blankets - as well as some other basic home furnishing products. A free shuttle is available to then drop students at their accommodation. For those who have the energy after this full day of activites, students are invited to an ‘Arrival Meet-up’ where they can snack on chips and drinks and get to know other students on their first night at LU.</p>\n<p>During the first couple of weeks, incoming students participate in an orientation programme organised by the International Desk of LU and by student organisations. Orientation programme events and activities include:</p>\n<ul><li>General information meeting: Incoming mobile students are expected to attend an information meeting at which staff from the University, Student Health services, student organisations, and the Swedish police provide useful information about life in Lund and at LU.</li>\n<li>Official welcome: The Vice-Chancellor of LU and the mayor of Lund host a welcome reception for all new international students.</li>\n<li>Coordinators’ Day: Students meet their academic coordinators to finalise study plans. Coordinators remain available for advice on all academic matters for the duration of the mobilty period.</li>\n<li>Introductory Swedish Language Course: Mobile students are offered a \"Swedish in a nutshell\" course before regular university classes start, which is designed to give an introduction to the Swedish language. Students can choose to sit the exam held at the end of the course, which, if successfully completed, results in 3 ECTS credits. Students also have the opportunity to take additional Swedish language courses at LU (‘Swedish for Exchange Students’) during their mobility period as part of their study plan. Alternatively, they can continue practising their Swedish more informally at a free weekly social event, the ‘Swedish Lounge’, organised by the International Desk at LU.</li>\n<li>Mentor group meeting: All new exchange students are assigned to an international mentor group ahead of arrival, consisting of 3-4 mentors (Swedish students and current international students) and 15-25 new international students. Mentors contact incoming students via email a few weeks before they arrive to answer any questions about the university and life in Lund. After students have arrived, the mentors arrange activities together which facilitates their integration into the student community. In recognition of the important contribution student mentors make, LU awards an official mentor certificate to those who successfully complete a semester of mentoring.</li>\n<li>Other orientation and social events: Incoming students can choose from a broad range of activities aimed at helping them to get to know their new environment and make new friends. To name a few, these include excursions to the surrounding countryside, a Swedish food-tasting event, campus walking tours, tours of city attractions, a sports day, pub quizzes, concerts, and game and movie evenings. On a more practical note, the university even offers a bus trip to a large furniture and home furnishing store in Malmö.</li>\n</ul><p>Throughout their time at LU, international students are offered activities to help them integrate into the community and make them feel at home. The university hosts 13 'nations', large student social clubs each with its own particular atmosphere which offer a wide range of activites including lunches, brunches, sports, night clubs, formal balls and traditional festivities. Membership to a ‘nation’ is open to all LU students, and makes it easy for mobility students to make local friends. International students who speak English, French, German, or Spanish have the opportunity to contribute to the local community by volunteering at a local school, helping pupils to learn their native language. Other activities include weekly board game evenings, special events to watch and play basketball offered by the Lund basketball club, industry visits (e.g. Tetra Pak and Alfa Laval), karaoke nights, and Christmas market visits.When mobile students arrive at their host institutions, they face the daunting task of navigating and settling into an unfamiliar higher education institution (HEI) system, making friends, and integrating into the local culture. Many institutions facilitate this process by offering a range of support activities, such as informational meetings, academic mentor schemes, and language courses. Local student networks, such as the Erasmus Student Network (ESN), also often set up ‘buddy systems’ and organise social and cultural events.</p>\n<p>Lund University is an example of such an institution, offering an extensive programme of activities to help incoming students integrate into the life of the institution and of the local community, make friends, and feel ‘at home’ right from the start. The University’s approach to student integration is holistic. LU offers a full and carefully-programmed range of events to help students settle in,and meet new people.  This centres around welcome and orientation activities in the early stages of the students’ mobility periods, but continues well beyond this, throughout term time. Opportunities to make real contributions to the local community are also put forward, helping incoming students to integrate into their new environment in other meaningful ways.</p>\n",
          'safe_summary' => '',
        ),
      ),
    ),
    'field_case_study_contact' => array(),
    'field_case_study_contact_email' => array(
      LANGUAGE_NONE => array(
        array(
          'email' => 'studentreception@lu.se',
        ),
      ),
    ),
    'field_case_study_contact_name' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'Lund University International Desk',
          'format' => NULL,
          'safe_value' => 'Lund University International Desk',
        ),
      ),
    ),
    'field_case_study_country' => array(
      LANGUAGE_NONE => array(
        array(
          'iso2' => 'SE',
        ),
      ),
    ),
    'field_case_study_further_reading' => array(
      LANGUAGE_NONE => array(
        array(
          'url' => 'http://www.lunduniversity.lu.se/student-life/preparing-to-come/your-arrival-in-lund',
          'title' => 'Your arrival in Lund',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://www.lunduniversity.lu.se/student-life/preparing-to-come/arrival-introduction/introduction-and-orientation',
          'title' => 'Introduction and orientation',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://www.lunduniversity.lu.se/current-students/become-an-international-mentor',
          'title' => 'Become an international mentor',
          'attributes' => array(),
        ),
      ),
    ),
    'field_case_study_org_type' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '1',
        ),
      ),
    ),
    'field_case_study_organisation' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'Lunds Universitet – Lund University',
          'format' => NULL,
          'safe_value' => 'Lunds Universitet – Lund University',
        ),
      ),
    ),
    'field_case_study_introduction' => array(),
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

    'print_html_display' => 0,
    'print_html_display_comment' => 0,
    'print_html_display_urllist' => 0,
    'print_mail_display' => 0,
    'print_mail_display_comment' => 0,
    'print_mail_display_urllist' => 0,
    'print_pdf_display' => 1,
    'print_pdf_display_comment' => 0,
    'print_pdf_display_urllist' => 1,
    'print_pdf_size' => '',
    'print_pdf_orientation' => '',
    'path' => array(

      'alias' => 'case-study/helping-students-integrate-life-institution-and-local-community',
      'language' => 'en',
    ),
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
 * Create page programmatic.
 *
 * "Recognition of staff mobility – supporting individuals’ development and
 * institutional aims and objectives".
 */
function eche_core_create_recognition_of_staff_mobility_page() {
  $title = 'Recognition of staff mobility – supporting individuals’ development and institutional aims and objectives';
  $type = 'case_study';
  $node = eche_core_case_study_check_if_page_exist($title, $type);

  $node_data = (object) array(

    'uid' => '1',
    'title' => 'Recognition of staff mobility – supporting individuals’ development and institutional aims and objectives',
    'log' => '',
    'status' => '1',
    'comment' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'case_study',
    'language' => 'en',
    'body' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '<p>Recognition of staff mobility can be a powerful incentive for individuals to seek out and undertake mobility periods. This can benefit both individuals, via increased experiences, career progression or financial rewards, and their institutions as well by increased profile, exposure to international practices, learning and improvements.</p><p>There are many examples of higher education institutions linking internationalisation to their institutional strategies, as well as embedding participation in Erasmus+ staff mobility into human resource development strategies or plans. &nbsp;JAMK University of Applied Sciences in Finland has been recognised both nationally and at the European level for its investment in staff mobility. The university has put a range of initiatives and incentives in place to increase staff mobility, through connecting mobility activities to staff development and the strategic objectives of the institution. Furthermore there is a large emphasis on sharing the learning and experiences gained during mobility for the benefit both of the individuals and of the institution.</p><p>JAMK (Jyvaskylan ammattikorkeakoulu) is a University of Applied Sciences with approximately 6,000 students. Internationalisation is a core element of its institutional strategy, included as one of three focal areas, along with improving the quality of learning and promoting entrepreneurship. The university has long recognised that staff mobility supports on-going improvement of teaching and learning quality. Therefore the university systematically draws upon the learning of staff exchange, and it put in place a set of national and additional institutional key performance indicators to assess progress and impact to do so.</p><p>Staff returning from international mobility are required to write a report on their experiences, that is published on the staff Intranet. The information collected through these reports is stored in a central electronic database, which can be analysed and used by anyone. This data collection helps the monitoring of staff mobility, provides input to its further development and the assessment of its impact across many areas of the university. Mobility-related activities and experiences are not only used to support institutional development, but as part of individuals’ personal development programmes through integration of international mobility activities into staff appraisal as well. To ensure maximising the benefits of mobility, a strong emphasis is put on the quality of the experiences undertaken by the individuals.</p><p>JAMK’s progress in and approach to internationalisation have been recognised by both the Finnish Centre for International Mobility (CIMO) and the European Commission. CIMO co-ordinate Erasmus funding at the national level in Finland, and JAMK is one of the highest funded higher education institutions in the country under Erasmus.&nbsp; A visit by CIMO&nbsp; to JAMK yielded excellent feedback related to the implementation of Erasmus, particularly related to the transparency of JAMK’s mobility processes, the number of students and staff participating in the programme, and the institution’s management of the funding.&nbsp; In 2013, the European Commission awarded JAMK the Gold Prize of the European Erasmus Awards, for investing in staff exchanges and teaching quality under the last programme period. The Prize recognised JAMK’s achievement of 70% of university staff undertaking different mobility activities every year. This high proportion is due to a successful pan-university advertisement of the benefits and opportunities of Erasmus, a campaign carried out by the university over the past years to foster international mobility. This resulted in university staff now actively seeking out opportunities for international experiences.</p><p>Not only is internationalisation a core element of JAMK’s institutional strategy, but the university also works hard to promote international mobility among its staff, making the participation attractive by integrating it into staff members’ personal development. In addition, ensuring that the learning of mobile staff is systematically captured, monitored, made accessible and disseminated means that the value of the experience is multiplied among staff for the benefit of both individuals and the institution.&nbsp;</p>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => "<p>Recognition of staff mobility can be a powerful incentive for individuals to seek out and undertake mobility periods. This can benefit both individuals, via increased experiences, career progression or financial rewards, and their institutions as well by increased profile, exposure to international practices, learning and improvements.</p>\n<p>There are many examples of higher education institutions linking internationalisation to their institutional strategies, as well as embedding participation in Erasmus+ staff mobility into human resource development strategies or plans.  JAMK University of Applied Sciences in Finland has been recognised both nationally and at the European level for its investment in staff mobility. The university has put a range of initiatives and incentives in place to increase staff mobility, through connecting mobility activities to staff development and the strategic objectives of the institution. Furthermore there is a large emphasis on sharing the learning and experiences gained during mobility for the benefit both of the individuals and of the institution.</p>\n<p>JAMK (Jyvaskylan ammattikorkeakoulu) is a University of Applied Sciences with approximately 6,000 students. Internationalisation is a core element of its institutional strategy, included as one of three focal areas, along with improving the quality of learning and promoting entrepreneurship. The university has long recognised that staff mobility supports on-going improvement of teaching and learning quality. Therefore the university systematically draws upon the learning of staff exchange, and it put in place a set of national and additional institutional key performance indicators to assess progress and impact to do so.</p>\n<p>Staff returning from international mobility are required to write a report on their experiences, that is published on the staff Intranet. The information collected through these reports is stored in a central electronic database, which can be analysed and used by anyone. This data collection helps the monitoring of staff mobility, provides input to its further development and the assessment of its impact across many areas of the university. Mobility-related activities and experiences are not only used to support institutional development, but as part of individuals’ personal development programmes through integration of international mobility activities into staff appraisal as well. To ensure maximising the benefits of mobility, a strong emphasis is put on the quality of the experiences undertaken by the individuals.</p>\n<p>JAMK’s progress in and approach to internationalisation have been recognised by both the Finnish Centre for International Mobility (CIMO) and the European Commission. CIMO co-ordinate Erasmus funding at the national level in Finland, and JAMK is one of the highest funded higher education institutions in the country under Erasmus.  A visit by CIMO  to JAMK yielded excellent feedback related to the implementation of Erasmus, particularly related to the transparency of JAMK’s mobility processes, the number of students and staff participating in the programme, and the institution’s management of the funding.  In 2013, the European Commission awarded JAMK the Gold Prize of the European Erasmus Awards, for investing in staff exchanges and teaching quality under the last programme period. The Prize recognised JAMK’s achievement of 70% of university staff undertaking different mobility activities every year. This high proportion is due to a successful pan-university advertisement of the benefits and opportunities of Erasmus, a campaign carried out by the university over the past years to foster international mobility. This resulted in university staff now actively seeking out opportunities for international experiences.</p>\n<p>Not only is internationalisation a core element of JAMK’s institutional strategy, but the university also works hard to promote international mobility among its staff, making the participation attractive by integrating it into staff members’ personal development. In addition, ensuring that the learning of mobile staff is systematically captured, monitored, made accessible and disseminated means that the value of the experience is multiplied among staff for the benefit of both individuals and the institution. </p>\n",
          'safe_summary' => '',
        ),
      ),
    ),
    'field_case_study_contact' => array(),
    'field_case_study_contact_email' => array(
      LANGUAGE_NONE => array(
        array(
          'email' => 'international@jamk.fi ',
        ),
      ),
    ),
    'field_case_study_contact_name' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'JAMK International Services',
          'format' => NULL,
          'safe_value' => 'JAMK International Services',
        ),
      ),
    ),
    'field_case_study_country' => array(
      LANGUAGE_NONE => array(
        array(
          'iso2' => 'FI',
        ),
      ),
    ),
    'field_case_study_further_reading' => array(
      LANGUAGE_NONE => array(
        array(
          'url' => 'http://europa.eu/rapid/press-release_IP-13-1138_en.htm',
          'title' => 'European Commission Press Release for the Erasmus Awards 2013',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://www.jamk.fi/en/JAMK-information/JAMKs-annual-report-2013/',
          'title' => 'JAMK Annual Report 2013 ',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://www.jamk.fi/en/JAMK-information/international/Mobility-programmes/Mobility-programmes-Erasmus/',
          'title' => 'JAMK Mobility Programmes: Erasmus ',
          'attributes' => array(),
        ),
      ),
    ),
    'field_case_study_org_type' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '3',
        ),
      ),
    ),
    'field_case_study_organisation' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'JAMK',
          'format' => NULL,
          'safe_value' => 'JAMK',
        ),
      ),
    ),
    'field_case_study_introduction' => array(),
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

    'print_html_display' => 0,
    'print_html_display_comment' => 0,
    'print_html_display_urllist' => 0,
    'print_mail_display' => 0,
    'print_mail_display_comment' => 0,
    'print_mail_display_urllist' => 0,
    'print_pdf_display' => 1,
    'print_pdf_display_comment' => 0,
    'print_pdf_display_urllist' => 1,
    'print_pdf_size' => '',
    'print_pdf_orientation' => '',
    'path' => array(
      'alias' => 'case-study/recognition-staff-mobility-–-supporting-individuals’-development-and-institutional-aims',
      'language' => 'en',
    ),
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
 * Create Clear, comprehensive and accessible guideline pages.
 *
 * For recognising student mobility – The University of Manchester’s Framework
 * for Credit Transfer & Grade Conversion for Study Abroad.
 */
function eche_core_create_clear_comprehensive_and_accessible_guidelines_page() {
  $title = 'Clear, comprehensive and accessible guidelines for recognising student mobility – The University of Manchester’s Framework for Credit Transfer & Grade Conversion for Study Abroad';
  $type = 'case_study';
  $node = eche_core_case_study_check_if_page_exist($title, $type);

  $node_data = new stdClass();

  $node_data = (object) array(

    'uid' => '1',
    'title' => 'Clear, comprehensive and accessible guidelines for recognising student mobility – The University of Manchester’s Framework for Credit Transfer & Grade Conversion for Study Abroad',
    'status' => '1',
    'comment' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'case_study',
    'language' => 'en',
    'body' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '<p>Students need to choose the appropriate educational components for their mobility period so that learning outcomes achieved can be recognised as part of their degree programme, without the need to take further courses or exams. Higher Education Institutions (HEIs) can facilitate this process by establishing and publishing clear procedures, which ensure all requirements for credit transfer and grade conversion are met.</p><p>The University of Manchester (UoM) is among the UK’s largest universities, with a student enrolment of 26,500 undergraduate and 11,500 postgraduate students, offering more than 1,000 degree programmes. The university has a large international student body. More than 10,000 students came from abroad during the 2013-14 academic year.</p><p>The University’s Study Abroad Unit (now International Programmes Office (IPO)), in consultation with the Academic Exchange Advisers (AEA) are coordinating and harmonising the institution’s activities on credit transfer for each subject area. They developed a guidance document that &nbsp;sets out responsibilities and key steps for the AEA, the student, and the IPO at each stage of the mobility, i.e. pre-departure, while being abroad, and after return to UoM. In particular, these include:</p><p style="margin-left:20.85pt;">- Course selection: the AEA and student discuss and agree how the educational components undertaken abroad will be accounted for in the student’s degree programme. The AEA documents, maintains and communicates to students key academic information associated with educational components offered at the partner university, and helps students resolve academic problems while they are abroad. The AEA, the student, and the host university sign a Learning Agreement before the end of the semester prior to the mobility. This provides a formal structure for approving credit transfer from the partner university; students need to discuss and seek written approval from the AEA for any course changes.</p><p style="margin-left:20.85pt;">- Credits: Courses taken should be at the appropriate level for the student’s year of study, and the credits should be equivalent to those for a full-time local student in the destination HEI (i.e. 25-30 ECTS).</p><p>All staff and students involved in mobility actions have access to the framework document, which is also publically available on the university’s website. In addition to the detailed version of the framework, there are shorter “pocket versions” available as well for students and AEAs. These include key information and steps to be completed, tailored to the specific information needs of students and staff.</p>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => "<p>Students need to choose the appropriate educational components for their mobility period so that learning outcomes achieved can be recognised as part of their degree programme, without the need to take further courses or exams. Higher Education Institutions (HEIs) can facilitate this process by establishing and publishing clear procedures, which ensure all requirements for credit transfer and grade conversion are met.</p>\n<p>The University of Manchester (UoM) is among the UK’s largest universities, with a student enrolment of 26,500 undergraduate and 11,500 postgraduate students, offering more than 1,000 degree programmes. The university has a large international student body. More than 10,000 students came from abroad during the 2013-14 academic year.</p>\n<p>The University’s Study Abroad Unit (now International Programmes Office (IPO)), in consultation with the Academic Exchange Advisers (AEA) are coordinating and harmonising the institution’s activities on credit transfer for each subject area. They developed a guidance document that  sets out responsibilities and key steps for the AEA, the student, and the IPO at each stage of the mobility, i.e. pre-departure, while being abroad, and after return to UoM. In particular, these include:</p>\n<p style=\"margin-left:20.85pt;\">- Course selection: the AEA and student discuss and agree how the educational components undertaken abroad will be accounted for in the student’s degree programme. The AEA documents, maintains and communicates to students key academic information associated with educational components offered at the partner university, and helps students resolve academic problems while they are abroad. The AEA, the student, and the host university sign a Learning Agreement before the end of the semester prior to the mobility. This provides a formal structure for approving credit transfer from the partner university; students need to discuss and seek written approval from the AEA for any course changes.</p>\n<p style=\"margin-left:20.85pt;\">- Credits: Courses taken should be at the appropriate level for the student’s year of study, and the credits should be equivalent to those for a full-time local student in the destination HEI (i.e. 25-30 ECTS).</p>\n<p>All staff and students involved in mobility actions have access to the framework document, which is also publically available on the university’s website. In addition to the detailed version of the framework, there are shorter “pocket versions” available as well for students and AEAs. These include key information and steps to be completed, tailored to the specific information needs of students and staff.</p>\n",
          'safe_summary' => '',
        ),
      ),
    ),
    'field_case_study_contact' => array(),
    'field_case_study_contact_email' => array(
      LANGUAGE_NONE => array(
        array(
          'email' => 'international.relations@manchester.ac.uk',
        ),
      ),
    ),
    'field_case_study_contact_name' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'International Programmes Office',
          'format' => NULL,
          'safe_value' => 'International Programmes Office',
        ),
      ),
    ),
    'field_case_study_country' => array(
      LANGUAGE_NONE => array(
        array(
          'iso2' => 'GB',
        ),
      ),
    ),
    'field_case_study_further_reading' => array(
      LANGUAGE_NONE => array(
        array(
          'url' => 'http://www.ukcisa.org.uk/Info-for-universities-colleges--schools/Policy-research--statistics/Research--statistics/International-students-in-UK-HE/#Top-20-largest-recruiters-of-international-students-2013-14',
          'title' => 'Top 20 largest recruiters of international students 2013-14',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://www.tlso.manchester.ac.uk/map/teachinglearningassessment/teaching/credittransfergradeconversionforstudyabroad/',
          'title' => 'Framework for Credit Transfer & Grade Conversion for Study Abroad',
          'attributes' => array(),
        ),
      ),
    ),
    'field_case_study_org_type' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '1',
        ),
      ),
    ),
    'field_case_study_organisation' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'The University of Manchester ',
          'format' => NULL,
          'safe_value' => 'The University of Manchester ',
        ),
      ),
    ),
    'field_case_study_introduction' => array(),
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
    'print_html_display' => 0,
    'print_html_display_comment' => 0,
    'print_html_display_urllist' => 0,
    'print_mail_display' => 0,
    'print_mail_display_comment' => 0,
    'print_mail_display_urllist' => 0,
    'print_pdf_display' => 1,
    'print_pdf_display_comment' => 0,
    'print_pdf_display_urllist' => 1,
    'print_pdf_size' => '',
    'print_pdf_orientation' => '',
    'path' => array(
      'alias' => 'case-study/clear-comprehensive-and-accessible-guidelines-recognising-student-mobility-–-university',
      'language' => 'en',
    ),
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
 * Mobility for students from under-represented groups.
 */
function eche_core_create_mobility_for_students_page() {
  $title = 'Mobility for students from under-represented groups';
  $type = 'case_study';
  $node = eche_core_case_study_check_if_page_exist($title, $type);

  $node_data = new stdClass();

  $node_data = (object) array(
    'uid' => '1',
    'title' => 'Mobility for students from under-represented groups ',
    'log' => '',
    'status' => '1',
    'comment' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'case_study',
    'language' => 'en',
    'body' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '<p>Going to study abroad presents students with a number of logistical and emotional challenges, such as finding suitable accommodation, choosing the right courses, and learning to communicate in a new language and cultural setting. &nbsp;Students from underrepresented groups may encounter additional difficulties. &nbsp;For example, students with family responsibilities may not be able to participate in longer-term mobility, students from lower socio-economic backgrounds may find it difficult to cover the additional cost of living abroad, and students with special needs may face inaccessible environments and disability-related stereotypes.</p><p>University College West Flanders (Howest) encourages and enables students from underrpresented groups to participate in internationalisation activities by offering a variety of internationalisation activities of different lengths and intensities throughout their degree programmes.</p><p>Howest is a higher education institution with an enrolment of 6,000 full-time students at four campuses, situated in Bruges and Kortrijk in Belgium. It is associated with more than 140 partner universities in Europe and worldwide, and offers 12 semester courses taught in English.</p><p>To help students develop international awareness and competences, Howest has incorporated international elements into all its degree programmes. However, not all students are immediately ‘ready’ to head abroad. To overcome students’ reservations and support increased participation, the university is taking a step-wise approach to introduce student mobility, offering programmes of varying duration. &nbsp;&nbsp;</p><p>Howest has set the Bologna 2020 mobility goal as a minimum target for each study programme, and support mobility for all its students. In the first year of their degree course, Howest students participate in ‘internationalisation at home’ (i@H) through activities such as International Days on campus and study visits to the French-speaking part of Belgium or across the border, which are coordinated by the university’s International Office. The offer is intensified in the second year, which integrates short-term ECTS-recognised international activities into the degree courses, international weeks at partner institutions, study trips, etc.</p><p>The relatively short duration of these activities ensures that all students have a chance to participate, including those with family responsibilities and/or limited financial means. &nbsp;These ‘taster’ periods, often group-based, also serve to introduce students, who are apprehensive or reluctant to move abroad on their own, to the feasibility and value of international exchanges. As a result, students feel more confident and may go on to spend a longer period studying abroad during the final stages of their degree. &nbsp;Over the past two years (13/14 and 14/15), 27% and 30% of outgoing Erasmus students/trainees were from underrepresented groups, mainly lower income groups, matching their proportion in the overall student body.</p><p>Howest has taken important steps to ensure that Erasmus+ is accessible to all, including individuals from under-represented groups.&nbsp; The university has taken calculated approaches to gradually expose individuals to internationalisation.&nbsp; This does not only serve to ‘demystify’ what mobility is about, but it allows students to directly find out the potential value of undertaking such experiences, and effectively lower the barrier to entry.&nbsp; University statistics show that this has had a positive impact on the percentage of students from under-represented groups undertaking international mobility each year.</p>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => "<p>Going to study abroad presents students with a number of logistical and emotional challenges, such as finding suitable accommodation, choosing the right courses, and learning to communicate in a new language and cultural setting.  Students from underrepresented groups may encounter additional difficulties.  For example, students with family responsibilities may not be able to participate in longer-term mobility, students from lower socio-economic backgrounds may find it difficult to cover the additional cost of living abroad, and students with special needs may face inaccessible environments and disability-related stereotypes.</p>\n<p>University College West Flanders (Howest) encourages and enables students from underrpresented groups to participate in internationalisation activities by offering a variety of internationalisation activities of different lengths and intensities throughout their degree programmes.</p>\n<p>Howest is a higher education institution with an enrolment of 6,000 full-time students at four campuses, situated in Bruges and Kortrijk in Belgium. It is associated with more than 140 partner universities in Europe and worldwide, and offers 12 semester courses taught in English.</p>\n<p>To help students develop international awareness and competences, Howest has incorporated international elements into all its degree programmes. However, not all students are immediately ‘ready’ to head abroad. To overcome students’ reservations and support increased participation, the university is taking a step-wise approach to introduce student mobility, offering programmes of varying duration.   </p>\n<p>Howest has set the Bologna 2020 mobility goal as a minimum target for each study programme, and support mobility for all its students. In the first year of their degree course, Howest students participate in ‘internationalisation at home’ (i@H) through activities such as International Days on campus and study visits to the French-speaking part of Belgium or across the border, which are coordinated by the university’s International Office. The offer is intensified in the second year, which integrates short-term ECTS-recognised international activities into the degree courses, international weeks at partner institutions, study trips, etc.</p>\n<p>The relatively short duration of these activities ensures that all students have a chance to participate, including those with family responsibilities and/or limited financial means.  These ‘taster’ periods, often group-based, also serve to introduce students, who are apprehensive or reluctant to move abroad on their own, to the feasibility and value of international exchanges. As a result, students feel more confident and may go on to spend a longer period studying abroad during the final stages of their degree.  Over the past two years (13/14 and 14/15), 27% and 30% of outgoing Erasmus students/trainees were from underrepresented groups, mainly lower income groups, matching their proportion in the overall student body.</p>\n<p>Howest has taken important steps to ensure that Erasmus+ is accessible to all, including individuals from under-represented groups.  The university has taken calculated approaches to gradually expose individuals to internationalisation.  This does not only serve to ‘demystify’ what mobility is about, but it allows students to directly find out the potential value of undertaking such experiences, and effectively lower the barrier to entry.  University statistics show that this has had a positive impact on the percentage of students from under-represented groups undertaking international mobility each year.</p>\n",
          'safe_summary' => '',
        ),
      ),
    ),
    'field_case_study_contact' => array(),
    'field_case_study_contact_email' => array(
      LANGUAGE_NONE => array(
        array(
          'email' => 'international.office@howest.be',
        ),
      ),
    ),
    'field_case_study_contact_name' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'Howest International Office ',
          'format' => NULL,
          'safe_value' => 'Howest International Office ',
        ),
      ),
    ),
    'field_case_study_country' => array(
      LANGUAGE_NONE => array(
        array(
          'iso2' => 'BE',
        ),
      ),
    ),
    'field_case_study_further_reading' => array(
      LANGUAGE_NONE => array(
        array(
          'url' => 'http://www.howest.be/Default.aspx?target=howest&lan=nl&item=326',
          'title' => 'Erasmus Policy Statement',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://bookshop.europa.eu/en/supporting-reform-pbNC3112152',
          'title' => 'Supporting reform: the role of Erasmus in higher education (2013) ',
          'attributes' => array(),
        ),
      ),
    ),
    'field_case_study_org_type' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '1',
        ),
      ),
    ),
    'field_case_study_organisation' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'Howest University College West Flanders (Hogeschool West-Vlaanderen)',
          'format' => NULL,
          'safe_value' => 'Howest University College West Flanders (Hogeschool West-Vlaanderen)',
        ),
      ),
    ),
    'field_case_study_introduction' => array(),
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
    'print_html_display' => 0,
    'print_html_display_comment' => 0,
    'print_html_display_urllist' => 0,
    'print_mail_display' => 0,
    'print_mail_display_comment' => 0,
    'print_mail_display_urllist' => 0,
    'print_pdf_display' => 1,
    'print_pdf_display_comment' => 0,
    'print_pdf_display_urllist' => 1,
    'print_pdf_size' => '',
    'print_pdf_orientation' => '',
    'path' => array(
      'alias' => 'case-study/mobility-students-under-represented-groups',
      'language' => 'en',
    ),
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
 * Provision of information and support prior to mobility periods.
 */
function eche_core_create_provision_of_information_page() {
  $title = 'Provision of information and support prior to mobility periods';
  $type = 'case_study';
  $node = eche_core_case_study_check_if_page_exist($title, $type);

  $node_data = new stdClass();

  $node_data = (object) array(

    'uid' => '1',
    'title' => 'Provision of information and support prior to mobility periods',
    'log' => '',
    'status' => '1',
    'comment' => '1',
    'promote' => '0',
    'sticky' => '0',
    'body' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '<p>Participating institutions can help incoming and outgoing participants prepare for their mobility placements by providing clear and easily accessible information in advance. The information should be comprehensive and easy to find for everyone. Where possible, individuals should be signposted to other relevant information for their needs, such as accommodation options, contacts at the receiving institution, and requirements ahead of arrival. Institutions can also assist their outgoing mobile participants to prepare for their exchanges through special lectures or training on the necessary language or intercultural preparation.</p><p>It is common for participating universities to provide the necessary basic information online. However, through carefully selected and presented information display and organising additional activities, institutions can help mobile students and staff make better-informed choices, be more prepared, and improve their overall experiences of their mobility period.</p><p style="margin-left:1.15pt;">The two universities featured in this case study differ in size, but share a common commitment to internationalisation. Luleå University of Technology (Luleå Tekniska Universitet) in Sweden has approximately 17,000 students enrolled, while the University of Bonn (Rheinische Friedrich-Wilhelms-Universität Bonn) is a research university in Germany with more than 30,000 students studying across its faculties.</p><p style="margin-left:1.15pt;">Both universities have clearly structured websites, providing a useful range of well-categorised information. For example the website of the <strong>Luleå University of Technology</strong> not only provides information on application and admission procedures, courses offered in English, etc., but it also has a ‘Practical Guide for Exchange Students’. This guide is a self-contained section for incoming students, which provides relevant information on, for example, accommodation, housing, insurance and healthcare, residence permit, climate, travel-related questions, living expenses, etc. &nbsp;Further information is also available through a ‘frequently asked questions’ section.</p><p style="margin-left:1.15pt;">[[{"fid":"11","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"","field_file_image_title_text[und][0][value]":"","field_caption[und][0][value]":""},"type":"media","attributes":{"class":"media-element file-default"},"link_text":null}]]</p><p style="margin-left:1.15pt;">The University does not only provide relevant and comprehensive information on its website, but also provides further assistance for incoming mobile students to settle. The Luleå University Reception Committee (LURC), a student organisation member of the Erasmus Student Network (ESN), provides further help to incoming students. In particular, they help arrange housing and provide support with orientation at the university. They also organise welcome/farewell and other social activities. However, LURC’s support starts even before the students’ arrival. They make contact with every incoming student in advance to help them finalise their preparations and answer any questions they might have.</p><p style="margin-left:2.85pt;">Practical information is provided via the <strong>University of Bonn’s</strong> website, though for staff, more information is included on the University intranet. In addition to the information made available to potential participants online, the university also organises pre-departure and returnee workshops.</p><p style="margin-left:1.15pt;">The workshops are organised in cooperation between the International Office and Office of Human Resources Development.&nbsp; Staff taking part in staff mobility receive a Certificate for International Competence offered by Human Resource Development in cooperation with the International Office.&nbsp; The comprehensive support give to staff mobility underpins the strategic goal of the University of Bonn to also qualify their administrative staff in this respect. The development of the University’s staff forms an integral part of its Human Resources development plans.</p>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => "<p>Participating institutions can help incoming and outgoing participants prepare for their mobility placements by providing clear and easily accessible information in advance. The information should be comprehensive and easy to find for everyone. Where possible, individuals should be signposted to other relevant information for their needs, such as accommodation options, contacts at the receiving institution, and requirements ahead of arrival. Institutions can also assist their outgoing mobile participants to prepare for their exchanges through special lectures or training on the necessary language or intercultural preparation.</p>\n<p>It is common for participating universities to provide the necessary basic information online. However, through carefully selected and presented information display and organising additional activities, institutions can help mobile students and staff make better-informed choices, be more prepared, and improve their overall experiences of their mobility period.</p>\n<p style=\"margin-left:1.15pt;\">The two universities featured in this case study differ in size, but share a common commitment to internationalisation. Luleå University of Technology (Luleå Tekniska Universitet) in Sweden has approximately 17,000 students enrolled, while the University of Bonn (Rheinische Friedrich-Wilhelms-Universität Bonn) is a research university in Germany with more than 30,000 students studying across its faculties.</p>\n<p style=\"margin-left:1.15pt;\">Both universities have clearly structured websites, providing a useful range of well-categorised information. For example the website of the <strong>Luleå University of Technology</strong> not only provides information on application and admission procedures, courses offered in English, etc., but it also has a ‘Practical Guide for Exchange Students’. This guide is a self-contained section for incoming students, which provides relevant information on, for example, accommodation, housing, insurance and healthcare, residence permit, climate, travel-related questions, living expenses, etc.  Further information is also available through a ‘frequently asked questions’ section.</p>\n<p style=\"margin-left:1.15pt;\"></p><div class=\"media media-element-container media-default\"><div id=\"file-11\" class=\"file file-image file-image-png\">\n\n        <h2 class=\"element-invisible\"><a href=\"/en/file/61png\">6.1.png</a></h2>\n    \n  \n  <div class=\"content\">\n    <img class=\"media-element file-default\" typeof=\"foaf:Image\" src=\"http://eche.waat.eu/en/system/files/6.1.png\" alt=\"\" /><div class=\"field field-name-field-caption field-type-text field-label-hidden\"><div class=\"field-items\"><div class=\"field-item even\"></div></div></div>  </div>\n\n  \n</div>\n</div>\n<p style=\"margin-left:1.15pt;\">The University does not only provide relevant and comprehensive information on its website, but also provides further assistance for incoming mobile students to settle. The Luleå University Reception Committee (LURC), a student organisation member of the Erasmus Student Network (ESN), provides further help to incoming students. In particular, they help arrange housing and provide support with orientation at the university. They also organise welcome/farewell and other social activities. However, LURC’s support starts even before the students’ arrival. They make contact with every incoming student in advance to help them finalise their preparations and answer any questions they might have.</p>\n<p style=\"margin-left:2.85pt;\">Practical information is provided via the <strong>University of Bonn’s</strong> website, though for staff, more information is included on the University intranet. In addition to the information made available to potential participants online, the university also organises pre-departure and returnee workshops.</p>\n<p style=\"margin-left:1.15pt;\">The workshops are organised in cooperation between the International Office and Office of Human Resources Development.  Staff taking part in staff mobility receive a Certificate for International Competence offered by Human Resource Development in cooperation with the International Office.  The comprehensive support give to staff mobility underpins the strategic goal of the University of Bonn to also qualify their administrative staff in this respect. The development of the University’s staff forms an integral part of its Human Resources development plans.</p>\n",
          'safe_summary' => '',
        ),
      ),
    ),
    'field_case_study_contact' => array(),
    'field_case_study_contact_email' => array(),
    'field_case_study_contact_name' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'Bonn: erasmus-assist@uni-bonn.de;  Luleå: international.office@ltu.se ',
          'format' => NULL,
          'safe_value' => 'Bonn: erasmus-assist@uni-bonn.de;  Luleå: international.office@ltu.se ',
        ),
      ),
    ),
    'field_case_study_country' => array(),
    'field_case_study_further_reading' => array(
      LANGUAGE_NONE => array(
        array(
          'url' => 'http://bookshop.europa.eu/en/supporting-reform-pbNC3112152/',
          'title' => 'European Commission, 2013. Supporting reform: the role of Erasmus in higher education.',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://www3.uni-bonn.de/international',
          'title' => 'University of Bonn International pages ',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://www.ltu.se/edu/Exchange-Studies/Practical-Guide-for-Exchange-Students?l=en',
          'title' => 'University of Luleå Practical Guide for Exchange Students',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://www.lurc.se/',
          'title' => 'Luleå University Reception Committee (LURC) website ',
          'attributes' => array(),
        ),
      ),
    ),
    'field_case_study_org_type' => array(),
    'field_case_study_organisation' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'Luleå University of Technology (Luleå Tekniska Universitet); University of Bonn (Rheinische Friedrich-Wilhelms-Universität Bonn)',
          'format' => NULL,
          'safe_value' => 'Luleå University of Technology (Luleå Tekniska Universitet); University of Bonn (Rheinische Friedrich-Wilhelms-Universität Bonn)',
        ),
      ),
    ),
    'field_case_study_introduction' => array(),
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

    'print_html_display' => 0,
    'print_html_display_comment' => 0,
    'print_html_display_urllist' => 0,
    'print_mail_display' => 0,
    'print_mail_display_comment' => 0,
    'print_mail_display_urllist' => 0,
    'print_pdf_display' => 1,
    'print_pdf_display_comment' => 0,
    'print_pdf_display_urllist' => 1,
    'print_pdf_size' => '',
    'print_pdf_orientation' => '',
    'path' => array(
      'alias' => 'case-study/provision-information-and-support-prior-mobility-periods',
      'language' => 'en',
    ),
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
 * Create page pragmatic.
 *
 * The adoption of formal selection procedures that are applied at all
 * levels of the institution.
 */
function eche_core_create_the_adoption_of_formal_page() {
  $title = 'The adoption of formal selection procedures that are applied at all levels of the institution';
  $type = 'case_study';
  $node = eche_core_case_study_check_if_page_exist($title, $type);

  $node_data = (object) array(

    'uid' => '1',
    'title' => 'The adoption of formal selection procedures that are applied at all levels of the institution',
    'log' => '',
    'status' => '1',
    'comment' => '1',
    'promote' => '0',
    'sticky' => '0',

    'body' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '<p>Sending higher education institutions should have fair, transparent, coherent and documented procedures for the selection and award of grants to mobile staff and students, easily available for all participants. These processes and their corresponding criteria should be applied at all levels of the institution – including departments and/or faculties.</p><p>The approach taken at the University of Masaryk (Czech Republic) demonstrates how faculties or departments can effectively operate selection procedures within an overall institutionally set framework. The selection processes take place within individual faculties and they are under the control of the departmental coordinators. Once the selection is made, successful applicants are passed to the University’s Centre for International Cooperation, who assigns resources for approved mobilities, while the faculty retains overall responsibility for the preparation of the mobility.&nbsp;</p><p style="margin-left:2.85pt">Masaryk University is a large, traditional university, with more than 35,000 students. According to university statistics, the University of Masaryk receives between 300-400 students under Erasmus+ per year, and about 600-700 students go to study abroad annually.</p><p>The University of Masaryk operates a two-tier structure to process and support international mobility. This requires effective cooperation between the central office responsible for international activities and the various faculties. The Centre for International Cooperation (CIC) at Masaryk acts as the central repository and reference point for all internationalisation activity. It prominently publishes relevant information on the dedicated website for mobility and international cooperation. This information covers basic conditions of acceptance and eligibility of mobility periods, guidance, documents, templates and brochures. In addition, the Centre is also responsible for allocating grants to selected students and staff for their mobility.</p><p>The mobility selection process is managed and conducted within the university’s individual faculties. Specific information related to the individual faculties is available via dedicated departmental mobility web-pages where all departmental mobility coordinators are listed with their contact details. Taking the webpage of the Faculty of Social Studies (FSS) as an example, it contains relevant information for those interested in undertaking a mobility, whether incoming or outgoing, both for staff and students.</p><p>The image below shows a sample of the CIC webpage designed for Erasmus+ students:</p><p>[[{"fid":"10","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"","field_file_image_title_text[und][0][value]":"","field_caption[und][0][value]":""},"type":"media","link_text":null,"attributes":{"style":"height: 400px; width: 1000px;","class":"media-element file-default"}}]]</p><p>&nbsp;</p>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => "<p>Sending higher education institutions should have fair, transparent, coherent and documented procedures for the selection and award of grants to mobile staff and students, easily available for all participants. These processes and their corresponding criteria should be applied at all levels of the institution – including departments and/or faculties.</p>\n<p>The approach taken at the University of Masaryk (Czech Republic) demonstrates how faculties or departments can effectively operate selection procedures within an overall institutionally set framework. The selection processes take place within individual faculties and they are under the control of the departmental coordinators. Once the selection is made, successful applicants are passed to the University’s Centre for International Cooperation, who assigns resources for approved mobilities, while the faculty retains overall responsibility for the preparation of the mobility. </p>\n<p style=\"margin-left:2.85pt\">Masaryk University is a large, traditional university, with more than 35,000 students. According to university statistics, the University of Masaryk receives between 300-400 students under Erasmus+ per year, and about 600-700 students go to study abroad annually.</p>\n<p>The University of Masaryk operates a two-tier structure to process and support international mobility. This requires effective cooperation between the central office responsible for international activities and the various faculties. The Centre for International Cooperation (CIC) at Masaryk acts as the central repository and reference point for all internationalisation activity. It prominently publishes relevant information on the dedicated website for mobility and international cooperation. This information covers basic conditions of acceptance and eligibility of mobility periods, guidance, documents, templates and brochures. In addition, the Centre is also responsible for allocating grants to selected students and staff for their mobility.</p>\n<p>The mobility selection process is managed and conducted within the university’s individual faculties. Specific information related to the individual faculties is available via dedicated departmental mobility web-pages where all departmental mobility coordinators are listed with their contact details. Taking the webpage of the Faculty of Social Studies (FSS) as an example, it contains relevant information for those interested in undertaking a mobility, whether incoming or outgoing, both for staff and students.</p>\n<p>The image below shows a sample of the CIC webpage designed for Erasmus+ students:</p>\n<p></p><div class=\"media media-element-container media-default\" style=\"height: 400px; width: 1000px;\"><div id=\"file-10\" class=\"file file-image file-image-png\">\n\n        <h2 class=\"element-invisible\"><a href=\"/en/file/screenshot2015-12-17at142129png\">screen_shot_2015-12-17_at_14.21.29.png</a></h2>\n    \n  \n  <div class=\"content\">\n    <img style=\"height: 400px; width: 1000px;\" class=\"media-element file-default\" typeof=\"foaf:Image\" src=\"http://eche.waat.eu/en/system/files/screen_shot_2015-12-17_at_14.21.29.png\" alt=\"\" /><div class=\"field field-name-field-caption field-type-text field-label-hidden\"><div class=\"field-items\"><div class=\"field-item even\"></div></div></div>  </div>\n\n  \n</div>\n</div>\n<p> </p>\n",
          'safe_summary' => '',
        ),
      ),
    ),
    'field_case_study_contact' => array(),
    'field_case_study_contact_email' => array(
      LANGUAGE_NONE => array(
        array(
          'email' => 'cic@czs.muni.cz ',
        ),
      ),
    ),
    'field_case_study_contact_name' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'The Centre for International Cooperation',
          'format' => NULL,
          'safe_value' => 'The Centre for International Cooperation',
        ),
      ),
    ),
    'field_case_study_country' => array(
      LANGUAGE_NONE => array(
        array(
          'iso2' => 'CZ',
        ),
      ),
    ),
    'field_case_study_further_reading' => array(
      LANGUAGE_NONE => array(
        array(
          'url' => 'http://cic.muni.cz/en/outgoing-mobility/outgoing-student/outgoing-student-studium/outgoing-student-erasmus-plus/2015-16',
          'title' => 'CIC Outgoing Erasmus+ students webpage',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://cic.muni.cz/en/outgoing-mobility/academic-staff/outgoing-ucitel-vyuka/outgoing-ucitel-vyuka-erasmus',
          'title' => 'CIC Outgoing Erasmus+ academic staff webpage [in Czech',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://www.fss.muni.cz/en/site/zahranici/mobilita/erasmus',
          'title' => 'The Faculty of Social Studies Mobility webpage',
          'attributes' => array(),
        ),
        array(
          'url' => 'https://www.teiresias.muni.cz/en/studies/studies-abroad',
          'title' => 'Teiresiás support centre web-page for studies abroad',
          'attributes' => array(),
        ),
        array(
          'url' => 'https://www.teiresias.muni.cz/en/studium/foreign-students-with-disabilities',
          'title' => 'Teiresiás support centre web-page for incoming students',
          'attributes' => array(),
        ),
      ),
    ),
    'field_case_study_org_type' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '1',
        ),
      ),
    ),
    'field_case_study_organisation' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'Masaryk University (Masarykova univerzita)',
          'format' => NULL,
          'safe_value' => 'Masaryk University (Masarykova univerzita)',
        ),
      ),
    ),
    'field_case_study_introduction' => array(),
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

    'print_html_display' => 0,
    'print_html_display_comment' => 0,
    'print_html_display_urllist' => 0,
    'print_mail_display' => 0,
    'print_mail_display_comment' => 0,
    'print_mail_display_urllist' => 0,
    'print_pdf_display' => 1,
    'print_pdf_display_comment' => 0,
    'print_pdf_display_urllist' => 1,
    'print_pdf_size' => '',
    'print_pdf_orientation' => '',
    'path' => array(

      'alias' => 'case-study/adoption-formal-selection-procedures-are-applied-all-levels-institution',
      'language' => 'en',
    ),
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
 * Create page programmatic.
 *
 * Access to course information
 * the online Study Information System at the University of Tartu.
 */
function eche_core_create_access_to_course_information_page() {
  $title = 'Access to course information – the online Study Information System at the University of Tartu';
  $type = 'case_study';
  $node = eche_core_case_study_check_if_page_exist($title, $type);
  $node_data = (object) array(

    'uid' => '1',
    'title' => 'Access to course information – the online Study Information System at the University of Tartu ',

    'status' => '1',
    'comment' => '1',
    'promote' => '0',
    'sticky' => '0',

    'body' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '<p>Students participating in Erasmus+ mobility need to be able to access information on the courses offered by potential host institutions to allow them to make educated choices. Assessing the offer and selecting courses that fit their interests, degree programme and the requirements of their home institution as well are key for successful mobility periods. &nbsp;Therefore it is important for any institution receiving mobile students to have a course catalogue available that is built according to the ECTS Users’ Guide, available online, easily accessible, up-to-date, covering all educational components offered by the institution, and available in a widely spoken international language. The course catalogue should be provided sufficiently in advance of the mobility period, i.e. before the end of the previous academic year.</p><p>To facilitate the course selection of incoming students, the University of Tartu has implemented an online course catalogue. The system provides access to all necessary course information well in advance of the students’ mobility, allowing them to make informed choices regarding the courses they wish to take during their mobility period.</p><p>The University of Tartu (UT) is Estonia’s national university, with a student enrolment of nearly 15,000 across nine faculties and four colleges. UT has a strong international focus, and more than thousand of its students come from abroad. The university has a large international network, holding bilateral co-operation agreements with 64 partner institutions from 23 different countries. The international focus of the institution is also well reflected in the high number of study programmes being taught in English. During the 2015-16 school year there are 17 programmes taught in English.</p><p>The Course Catalogue, which is available through an online portal called the Study Information System, underpins the university’s intentions to foster internationalisation. Providing easily accessible, regularly updated information on the courses and study programmes at all its Faculties and Colleges helps the institution attract international students. The online information is searchable and allows filtering of courses by such as Faculty/Department, level of study (e.g. Bachelor’s, or Master’s), and language of instruction. Courses at UT are ECTS-based, and the number of credits are clearly displayed in the system. In addition, each entry includes course objectives, expected learning outcomes, and a brief description on the course. The information is available both in Estonian and English. Earlier versions of the course catalogue (some going back more than 15 years) can be also viewed, so that students have the possibility to track changes in the study programmes from year to year.</p><p>The Study Information System also displays the schedule of exams for many of the degree programmes. This provides valuable information to incoming students, because it helps them plan their stay at UT better, for example by avoiding taking courses that are not compatible with the length of their mobility period (e.g. the final exam is scheduled after the student is scheduled to return home).&nbsp;</p><p>An important aspect of the system is that it is kept continually up-to-date. The list of courses taught in English is updated sufficiently in advance so students can choose courses and discuss these with coordinators at their home university prior to starting their study abroad period at UT. For example, information on courses beginning in the autumn semester is made available in April of the preceding academic year.</p><p>This course catalogue allows prospective students to browse courses offered by UT and determine which options fit best with their degree requirements. The system is, however, not only used for providing information. Once enrolled at the university, each student receives a password and uses the same system to register for courses and exams. &nbsp;UT pays attention to providing the necessary guidance for incoming students on how to view and register relevant courses in the system, and provides detailed instructions in their pre-arrival information brochure, “Getting Started”. This brochure is also available online via the university’s website, including a 15 min video tutorial.&nbsp; &nbsp;</p>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => "<p>Students participating in Erasmus+ mobility need to be able to access information on the courses offered by potential host institutions to allow them to make educated choices. Assessing the offer and selecting courses that fit their interests, degree programme and the requirements of their home institution as well are key for successful mobility periods.  Therefore it is important for any institution receiving mobile students to have a course catalogue available that is built according to the ECTS Users’ Guide, available online, easily accessible, up-to-date, covering all educational components offered by the institution, and available in a widely spoken international language. The course catalogue should be provided sufficiently in advance of the mobility period, i.e. before the end of the previous academic year.</p>\n<p>To facilitate the course selection of incoming students, the University of Tartu has implemented an online course catalogue. The system provides access to all necessary course information well in advance of the students’ mobility, allowing them to make informed choices regarding the courses they wish to take during their mobility period.</p>\n<p>The University of Tartu (UT) is Estonia’s national university, with a student enrolment of nearly 15,000 across nine faculties and four colleges. UT has a strong international focus, and more than thousand of its students come from abroad. The university has a large international network, holding bilateral co-operation agreements with 64 partner institutions from 23 different countries. The international focus of the institution is also well reflected in the high number of study programmes being taught in English. During the 2015-16 school year there are 17 programmes taught in English.</p>\n<p>The Course Catalogue, which is available through an online portal called the Study Information System, underpins the university’s intentions to foster internationalisation. Providing easily accessible, regularly updated information on the courses and study programmes at all its Faculties and Colleges helps the institution attract international students. The online information is searchable and allows filtering of courses by such as Faculty/Department, level of study (e.g. Bachelor’s, or Master’s), and language of instruction. Courses at UT are ECTS-based, and the number of credits are clearly displayed in the system. In addition, each entry includes course objectives, expected learning outcomes, and a brief description on the course. The information is available both in Estonian and English. Earlier versions of the course catalogue (some going back more than 15 years) can be also viewed, so that students have the possibility to track changes in the study programmes from year to year.</p>\n<p>The Study Information System also displays the schedule of exams for many of the degree programmes. This provides valuable information to incoming students, because it helps them plan their stay at UT better, for example by avoiding taking courses that are not compatible with the length of their mobility period (e.g. the final exam is scheduled after the student is scheduled to return home). </p>\n<p>An important aspect of the system is that it is kept continually up-to-date. The list of courses taught in English is updated sufficiently in advance so students can choose courses and discuss these with coordinators at their home university prior to starting their study abroad period at UT. For example, information on courses beginning in the autumn semester is made available in April of the preceding academic year.</p>\n<p>This course catalogue allows prospective students to browse courses offered by UT and determine which options fit best with their degree requirements. The system is, however, not only used for providing information. Once enrolled at the university, each student receives a password and uses the same system to register for courses and exams.  UT pays attention to providing the necessary guidance for incoming students on how to view and register relevant courses in the system, and provides detailed instructions in their pre-arrival information brochure, “Getting Started”. This brochure is also available online via the university’s website, including a 15 min video tutorial.   </p>\n",
          'safe_summary' => '',
        ),
      ),
    ),
    'field_case_study_contact' => array(),
    'field_case_study_contact_email' => array(
      LANGUAGE_NONE => array(
        array(
          'email' => 'erasmus@ut.ee',
        ),
      ),
    ),
    'field_case_study_contact_name' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'University of Tartu Erasmus Co-ordinator',
          'format' => NULL,
          'safe_value' => 'University of Tartu Erasmus Co-ordinator',
        ),
      ),
    ),
    'field_case_study_country' => array(
      LANGUAGE_NONE => array(
        array(
          'iso2' => 'EE',
        ),
      ),
    ),
    'field_case_study_further_reading' => array(
      LANGUAGE_NONE => array(
        array(
          'url' => 'http://www.ut.ee/en/university',
          'title' => 'About the University',
          'attributes' => array(),
        ),
        array(
          'url' => 'https://www.is.ut.ee/pls/ois/!tere.tulemast',
          'title' => 'Study Information System',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://intl.hkbu.edu.hk/factsheet/Tartu.pdf',
          'title' => 'Factsheets',
          'attributes' => array(),
        ),
      ),
    ),
    'field_case_study_org_type' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '1',
        ),
      ),
    ),
    'field_case_study_organisation' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'Tartu Ülikool / University of Tartu ',
          'format' => NULL,
          'safe_value' => 'Tartu Ülikool / University of Tartu ',
        ),
      ),
    ),
    'field_case_study_introduction' => array(),
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

    'print_html_display' => 0,
    'print_html_display_comment' => 0,
    'print_html_display_urllist' => 0,
    'print_mail_display' => 0,
    'print_mail_display_comment' => 0,
    'print_mail_display_urllist' => 0,
    'print_pdf_display' => 1,
    'print_pdf_display_comment' => 0,
    'print_pdf_display_urllist' => 1,
    'print_pdf_size' => '',
    'print_pdf_orientation' => '',
    'path' => array(

      'alias' => 'case-study/access-course-information-–-online-study-information-system-university-tartu',
      'language' => 'en',
    ),
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
 * Integration and equal access for students within the Erasmus Programme.
 */
function eche_core_create_integration_and_equal_access_page() {
  $title = 'Integration and equal access for students within the Erasmus Programme';
  $type = 'case_study';
  $node = eche_core_case_study_check_if_page_exist($title, $type);

  $node_data = new stdClass();

  $node_data = (object) array(
    'uid' => '1',
    'title' => 'Integration and equal access for students within the Erasmus Programme',
    'log' => '',
    'status' => '1',
    'comment' => '1',
    'promote' => '0',
    'sticky' => '0',
    'body' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '<p>To maximise the benefits of mobility to both individuals and institutions, it is important that incoming staff and students receive equal treatment in all academic and service matters, and have full access to the same range of services and facilities that are available to local staff and students.</p><p>Equal access must also cover provisions to promote mobility and giving appropriate specific support to under-represented groups in mobility (students or staff with special needs, students from lower socio-economic backgrounds, with family responsibilities or with part-time jobs, etc.). Erasmus+ offers additional support for students and staff with special needs (potential participants whose individual physical, mental or health-related situation is such that his/her participation in mobility would not be possible without extra financial support) and for students from disadvantaged backgrounds.</p><p>The universities featured in this case study have demonstrated a high level of commitment through different approaches to equal access for individuals undertaking mobility. The examples, from Austria and Finland, explore how smaller institutions may take hands-on approaches to equal access and integration, while larger institutions might put special measures in place.&nbsp;</p><p>Vorarlberg University of Applied Sciences (Fachhochschule Vorarlberg) in Dornbirn, Austria has around 1,200 students currently enrolled. Vorarlberg receives approximately 100 international students each year from its partner institutions, with a similar number leaving each year for a study period abroad. The university’s strategic aim in the field of student mobility is to make sure that at least 50 % of all fulltime bachelor students are studying abroad for one semester. During the last 10 years the outgoing mobility rate has been in average 58 %. VAMK (Vaasan ammattikorkeakoulu) is a University of Applied Sciences in the western Finnish city of Vaasa, with just over 3,000 students. Every year VAMK receives approximately 100 exchange students from its partner universities, with an estimated 600 leaving to study abroad. The University of Turku (Turun yliopisto) is the largest university in this example, with more than 20,000 students enrolled.</p><p><strong>Vorarlberg </strong><strong>University of Applied Sciences</strong> is a university that takes a strong interest in integration, with a very hands-on approach to integrating incoming students into the life of the institution and the local community. Each exchange student receives individual support from the staff members of the International Office to help with practical matters, and an active social calendar is maintained to regularly bring together incoming students and locals. The university goes beyond ensuring that mobile students are able to access all the laboratories and specialist machinery available to local students, with special attention given to incoming students at Vorarlberg extending to lectures and lessons too. Vorarlberg University of Applied Sciences has received the E-Quality-Label on three consecutive occasions, recognising the university’s performance in student mobility, and has also received the Lifelong Learning Award once. In each fulltime bachelor degree programme one complete semester is offered in English language.&nbsp;</p><p>Many testimonials from international students detail the efforts made by the university’s academic staff to make them comfortable in their classes.&nbsp; This is achieved due to three factors: i) the University’s</p><p>Vorarlberg University of Applied Sciences’ hands-on commitment to equal access extends to its role as a sending institution as well. For example, in 2005, staff at Vorarlberg worked with their counterparts at <strong>VAMK University of Applied Sciences</strong>, to ensure that René Kremser, who is blind and requires the use of a wheelchair, was able to undertake an Erasmus mobility abroad.&nbsp; René’s mobility period consisted of a combination of studying at the university and practical traineeships around Vaasa. &nbsp;The two universities collaborated in supporting René, aiding with the</p><p>&nbsp;Due to the joint efforts and , and the use of the additional support for participants with special needs, René’s placement experiences allowed him to further develop his topic of study and experience mobility to its fullest potential. Following the completion of his degree in social work, René was nominated as an Erasmus+ Ambassador.&nbsp; A film documentary has also been made about René’s experiences by a lecturer from Voralrberg University of Applied Sciences.</p><p>A further example is the <strong>University of Turku</strong>. The university has appointed a specialist Disability Coordinator, who has the responsibility to develop an accessible university. The Disability Coordinator provides counselling services for students and staff members with disabilitiesand assistance to resolve problems, including making recommendations such as extra time for examinations.&nbsp; The International cooperation and experience in exchanges play an important role in understanding how persons with disabilities can be supported. Through learning from the approaches used by other institutions, the Disability Coordinator helps the university to further develop their own approaches to support services, including adjustments made to the learning and communication materials, as well as to the physical environment.&nbsp; The University of Turku has guidelines on special arrangements for students with disabilities and special needs. Special arrangements are made on an individual basis in close cooperation with the student and their faculty. The University organises training on accessibility for staff members and students, and the Disability Coordinator undertakes cooperation with different areas of the university, and within a national network called “Accessible Higher Education”.</p><p>Universities can take specific measures to ensure that mobile students and staff are fully integrated, comfortable and able to maximise the benefits of their experiences. While universities with a relatively small number of incoming international students, such as Vorarlberg and VAMK, can take hands-on approaches with dedicated attention to the individuals, larger universities, such as Turku, can make use of specialists to ensure that particular groups are fully cared for, and that the university environment is optimised for the access and productive experience of individuals in those groups.</p>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => "<p>To maximise the benefits of mobility to both individuals and institutions, it is important that incoming staff and students receive equal treatment in all academic and service matters, and have full access to the same range of services and facilities that are available to local staff and students.</p>\n<p>Equal access must also cover provisions to promote mobility and giving appropriate specific support to under-represented groups in mobility (students or staff with special needs, students from lower socio-economic backgrounds, with family responsibilities or with part-time jobs, etc.). Erasmus+ offers additional support for students and staff with special needs (potential participants whose individual physical, mental or health-related situation is such that his/her participation in mobility would not be possible without extra financial support) and for students from disadvantaged backgrounds.</p>\n<p>The universities featured in this case study have demonstrated a high level of commitment through different approaches to equal access for individuals undertaking mobility. The examples, from Austria and Finland, explore how smaller institutions may take hands-on approaches to equal access and integration, while larger institutions might put special measures in place. </p>\n<p>Vorarlberg University of Applied Sciences (Fachhochschule Vorarlberg) in Dornbirn, Austria has around 1,200 students currently enrolled. Vorarlberg receives approximately 100 international students each year from its partner institutions, with a similar number leaving each year for a study period abroad. The university’s strategic aim in the field of student mobility is to make sure that at least 50 % of all fulltime bachelor students are studying abroad for one semester. During the last 10 years the outgoing mobility rate has been in average 58 %. VAMK (Vaasan ammattikorkeakoulu) is a University of Applied Sciences in the western Finnish city of Vaasa, with just over 3,000 students. Every year VAMK receives approximately 100 exchange students from its partner universities, with an estimated 600 leaving to study abroad. The University of Turku (Turun yliopisto) is the largest university in this example, with more than 20,000 students enrolled.</p>\n<p><strong>Vorarlberg </strong><strong>University of Applied Sciences</strong> is a university that takes a strong interest in integration, with a very hands-on approach to integrating incoming students into the life of the institution and the local community. Each exchange student receives individual support from the staff members of the International Office to help with practical matters, and an active social calendar is maintained to regularly bring together incoming students and locals. The university goes beyond ensuring that mobile students are able to access all the laboratories and specialist machinery available to local students, with special attention given to incoming students at Vorarlberg extending to lectures and lessons too. Vorarlberg University of Applied Sciences has received the E-Quality-Label on three consecutive occasions, recognising the university’s performance in student mobility, and has also received the Lifelong Learning Award once. In each fulltime bachelor degree programme one complete semester is offered in English language. </p>\n<p>Many testimonials from international students detail the efforts made by the university’s academic staff to make them comfortable in their classes.  This is achieved due to three factors: i) the University’s</p>\n<p>Vorarlberg University of Applied Sciences’ hands-on commitment to equal access extends to its role as a sending institution as well. For example, in 2005, staff at Vorarlberg worked with their counterparts at <strong>VAMK University of Applied Sciences</strong>, to ensure that René Kremser, who is blind and requires the use of a wheelchair, was able to undertake an Erasmus mobility abroad.  René’s mobility period consisted of a combination of studying at the university and practical traineeships around Vaasa.  The two universities collaborated in supporting René, aiding with the</p>\n<p> Due to the joint efforts and , and the use of the additional support for participants with special needs, René’s placement experiences allowed him to further develop his topic of study and experience mobility to its fullest potential. Following the completion of his degree in social work, René was nominated as an Erasmus+ Ambassador.  A film documentary has also been made about René’s experiences by a lecturer from Voralrberg University of Applied Sciences.</p>\n<p>A further example is the <strong>University of Turku</strong>. The university has appointed a specialist Disability Coordinator, who has the responsibility to develop an accessible university. The Disability Coordinator provides counselling services for students and staff members with disabilitiesand assistance to resolve problems, including making recommendations such as extra time for examinations.  The International cooperation and experience in exchanges play an important role in understanding how persons with disabilities can be supported. Through learning from the approaches used by other institutions, the Disability Coordinator helps the university to further develop their own approaches to support services, including adjustments made to the learning and communication materials, as well as to the physical environment.  The University of Turku has guidelines on special arrangements for students with disabilities and special needs. Special arrangements are made on an individual basis in close cooperation with the student and their faculty. The University organises training on accessibility for staff members and students, and the Disability Coordinator undertakes cooperation with different areas of the university, and within a national network called “Accessible Higher Education”.</p>\n<p>Universities can take specific measures to ensure that mobile students and staff are fully integrated, comfortable and able to maximise the benefits of their experiences. While universities with a relatively small number of incoming international students, such as Vorarlberg and VAMK, can take hands-on approaches with dedicated attention to the individuals, larger universities, such as Turku, can make use of specialists to ensure that particular groups are fully cared for, and that the university environment is optimised for the access and productive experience of individuals in those groups.</p>\n",
          'safe_summary' => '',
        ),
      ),
    ),
    'field_case_study_contact' => array(),
    'field_case_study_contact_email' => array(),
    'field_case_study_contact_name' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'Vorarlberg International Office international@fhv.at; VAMK International Affairs international@puv.fi; University of Turku Student Mobility Team international@utu.fi ',
          'format' => NULL,
          'safe_value' => 'Vorarlberg International Office international@fhv.at; VAMK International Affairs international@puv.fi; University of Turku Student Mobility Team international@utu.fi ',
        ),
      ),
    ),
    'field_case_study_country' => array(),
    'field_case_study_further_reading' => array(
      LANGUAGE_NONE => array(
        array(
          'url' => 'https://www.utu.fi/en/unit/university-services/academic-and-student-affairs/educational-development-and-counselling-services/Pages/home.aspx',
          'title' => 'Educational Development and Counselling Services, with details of the Disability Services and Accessibility department - Turku',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://www.tyy.fi/en/activities/accessibility',
          'title' => 'Accessibility at the University of Turku',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://www.fhv.at/fhv-studies/international/experiences-of-exchange-students',
          'title' => 'Vorarlberg student testimonials',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://ec.europa.eu/education/library/publications/2012/erasmus25_en.pdf',
          'title' => 'European Commission, 2012. Erasmus: Changing Lives Opening Minds for 25 Years',
          'attributes' => array(),
        ),
      ),
    ),
    'field_case_study_org_type' => array(),
    'field_case_study_organisation' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'Vorarlberg University of Applied Sciences (Fachhochschule Vorarlberg); VAMK (Vaasan ammattikorkeakoulu); University of Turku (Turun yliopisto)',
          'format' => NULL,
          'safe_value' => 'Vorarlberg University of Applied Sciences (Fachhochschule Vorarlberg); VAMK (Vaasan ammattikorkeakoulu); University of Turku (Turun yliopisto)',
        ),
      ),
    ),
    'field_case_study_introduction' => array(),
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

    'print_html_display' => 0,
    'print_html_display_comment' => 0,
    'print_html_display_urllist' => 0,
    'print_mail_display' => 0,
    'print_mail_display_comment' => 0,
    'print_mail_display_urllist' => 0,
    'print_pdf_display' => 1,
    'print_pdf_display_comment' => 0,
    'print_pdf_display_urllist' => 1,
    'print_pdf_size' => '',
    'print_pdf_orientation' => '',
    'path' => array(
      'pid' => '96',
      'source' => 'node/20',
      'alias' => 'case-study/integration-and-equal-access-students-within-erasmus-programme',
      'language' => 'en',
    ),
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
 * Inter-Institutional Agreements.
 */
function eche_core_create_inter_institutional_agreements_page() {
  $title = 'Inter-Institutional Agreements';
  $type = 'case_study';
  $node = eche_core_case_study_check_if_page_exist($title, $type);

  $node_data = new stdClass();

  $node_data = (object) array(

    'uid' => '1',
    'title' => 'Inter-Institutional Agreements',
    'log' => '',
    'status' => '1',
    'comment' => '1',
    'promote' => '0',
    'sticky' => '0',

    'body' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '<p style="font-size:13px">&nbsp;</p><p>Inter-Institutional Agreements (IIAs) make the cooperation between higher education institutions official, and form the basis of mobility activities in Erasmus+. By signing an inter-institutional agreement, the institutions involved agree to cooperate for the exchange of students and / or staff in the context of Erasmus+. They commit themselves to respecting the quality requirements of the Erasmus Charter for Higher Education in all aspects of the organisation and management of mobility and agree on a series of quantitative and qualitative measures to ensure mobility of high quality and impact.</p><p>The choice of partners for international cooperation should be based on areas of mutual interest to improve the quality of learning and teaching in common areas, by using the experience and involvement of academics. The selection can also be based on sound complementarities, and on input from academic staff when identifying and agreeing those areas.</p><p>IIAs set out their partnerships’ key shared elements in advance, including: the area of co-operation, the length of the agreement, a named coordinator for the agreement, activities and quality criteria, and shared commitments. Moreover, they contain useful information on academic or organisational aspects, such as measures for preparing, receiving and integrating mobile students and/or staff, what kind of infrastructure is available to support students and staff with disabilities, etc.</p><p>Institutions should regularly monitor their IIAs to ensure that they are up to date.</p><p>While this practice is evident in all participating institutions, this case study selects three inspirational examples of practice from three countries. The Danish example demonstrates how faculty involvement can be undertaken in identifying and agreeing new IIAs, while the examples from Estonia and Belgium show how the framework of IIAs in place with other institutions shapes the students’ and staff members’ options for mobility placements, and how these can be presented to interested parties when they make choices.</p><p style="margin-left:1.15pt">The universities featured are each different, but all are highly active in internationalisation. The University of Copenhagen is a large and traditional institution, with a student body of almost 40,000 that contains more than 5,000 international students. Tallinn University is newer and smaller, with approximately 9,000 students currently enrolled, including 500 international students. The Université Libre de Bruxelles has 24,000 enrolled students, with almost 8,000 from abroad.</p><p style="margin-left:1.15pt">The <strong>University of Copenhagen</strong> commits to a high degree of staff involvement in establishing all Inter-Institutional Agreements. A Faculty-level approach is taken to establish new agreements, whereby at least three out of the eight faculties in the University must agree to the decision in order to establish a new IIA.</p><p style="margin-left:1.15pt">IIAs create the framework within which all exchanges take place. This is particularly apparent where universities visually demonstrate their array of agreements. The<strong> Université Libre de Bruxelles (ULB)</strong>, for example, has created a browsable map of their framework of 330 bilateral and multilateral agreements between ULB and other institutions around the world. A link is provided to display details of each agreement, including contact details of the university staff member responsible for each country or region. The system makes it easy for interested parties to find information and make informed choices about their mobility destination.</p><p style="margin-left:1.15pt"><strong>Tallinn University’s</strong> IIA database is hosted on a webpage supported by Google Maps. Each of the 400 IIAs is represented by a pin on the map, and each pin can be clicked on to find out more information about the partner university, an existing memorandum of understanding or activity. The examples below show how the database of the IIAs across Europe is displayed, and an example of the information content of an Agreement with a partner abroad.</p><p>[[{"fid":"8","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"","field_file_image_title_text[und][0][value]":"","field_caption[und][0][value]":""},"type":"media","attributes":{"class":"media-element file-default"},"link_text":null}]][[{"fid":"9","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"","field_file_image_title_text[und][0][value]":"","field_caption[und][0][value]":""},"type":"media","attributes":{"class":"media-element file-default"},"link_text":null}]]</p><p style="margin-left:1.15pt">Tallinn University also uses this information in their special “Touch the Exchange” booth, an interactive facility created by a project team from the University’s &nbsp;Designed for students, lecturers and support personnel of the University, this booth displays Tallinn University’s partner universities abroad and, based on the user’s profile (e.g. student/teacher/support personnel, level of study), lists options for scholarships and grants. The user can then browse geographically which suitable agreements exist and where, learn basic information and even directly contact the responsible co-ordinator at Tallinn University. It also includes features for international students, providing them with information about degree studies in English and details of the Summer and Winter Schools.</p><p>IIAs are the foundation of all mobility and co-operation activities. They should be based on input from academics around important areas for co-operation and complementarities. The first example shows that even in a very large university, it is possible to foster a collaborative approach for the establishment of IIAs through the engagement of faculties. The approach taken in Copenhagen ensures broader buy-in to the selection of IIAs. The other two examples, from Brussels and Tallinn, showcase how the framework of IIAs displayed can help students and staff understand what is possible and where, including information on Erasmus+ exchanges and grant. The visual approaches allow interested individuals to explore their options with all information easily in reach to make informed choices more easily.</p><p>&nbsp;</p>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => "<p style=\"font-size:13px\"> </p>\n<p>Inter-Institutional Agreements (IIAs) make the cooperation between higher education institutions official, and form the basis of mobility activities in Erasmus+. By signing an inter-institutional agreement, the institutions involved agree to cooperate for the exchange of students and / or staff in the context of Erasmus+. They commit themselves to respecting the quality requirements of the Erasmus Charter for Higher Education in all aspects of the organisation and management of mobility and agree on a series of quantitative and qualitative measures to ensure mobility of high quality and impact.</p>\n<p>The choice of partners for international cooperation should be based on areas of mutual interest to improve the quality of learning and teaching in common areas, by using the experience and involvement of academics. The selection can also be based on sound complementarities, and on input from academic staff when identifying and agreeing those areas.</p>\n<p>IIAs set out their partnerships’ key shared elements in advance, including: the area of co-operation, the length of the agreement, a named coordinator for the agreement, activities and quality criteria, and shared commitments. Moreover, they contain useful information on academic or organisational aspects, such as measures for preparing, receiving and integrating mobile students and/or staff, what kind of infrastructure is available to support students and staff with disabilities, etc.</p>\n<p>Institutions should regularly monitor their IIAs to ensure that they are up to date.</p>\n<p>While this practice is evident in all participating institutions, this case study selects three inspirational examples of practice from three countries. The Danish example demonstrates how faculty involvement can be undertaken in identifying and agreeing new IIAs, while the examples from Estonia and Belgium show how the framework of IIAs in place with other institutions shapes the students’ and staff members’ options for mobility placements, and how these can be presented to interested parties when they make choices.</p>\n<p style=\"margin-left:1.15pt\">The universities featured are each different, but all are highly active in internationalisation. The University of Copenhagen is a large and traditional institution, with a student body of almost 40,000 that contains more than 5,000 international students. Tallinn University is newer and smaller, with approximately 9,000 students currently enrolled, including 500 international students. The Université Libre de Bruxelles has 24,000 enrolled students, with almost 8,000 from abroad.</p>\n<p style=\"margin-left:1.15pt\">The <strong>University of Copenhagen</strong> commits to a high degree of staff involvement in establishing all Inter-Institutional Agreements. A Faculty-level approach is taken to establish new agreements, whereby at least three out of the eight faculties in the University must agree to the decision in order to establish a new IIA.</p>\n<p style=\"margin-left:1.15pt\">IIAs create the framework within which all exchanges take place. This is particularly apparent where universities visually demonstrate their array of agreements. The<strong> Université Libre de Bruxelles (ULB)</strong>, for example, has created a browsable map of their framework of 330 bilateral and multilateral agreements between ULB and other institutions around the world. A link is provided to display details of each agreement, including contact details of the university staff member responsible for each country or region. The system makes it easy for interested parties to find information and make informed choices about their mobility destination.</p>\n<p style=\"margin-left:1.15pt\"><strong>Tallinn University’s</strong> IIA database is hosted on a webpage supported by Google Maps. Each of the 400 IIAs is represented by a pin on the map, and each pin can be clicked on to find out more information about the partner university, an existing memorandum of understanding or activity. The examples below show how the database of the IIAs across Europe is displayed, and an example of the information content of an Agreement with a partner abroad.</p>\n<p></p><div class=\"media media-element-container media-default\"><div id=\"file-8\" class=\"file file-image file-image-png\">\n\n        <h2 class=\"element-invisible\"><a href=\"/en/file/21png\">2.1.png</a></h2>\n    \n  \n  <div class=\"content\">\n    <img class=\"media-element file-default\" typeof=\"foaf:Image\" src=\"http://eche.waat.eu/en/system/files/2.1.png\" alt=\"\" /><div class=\"field field-name-field-caption field-type-text field-label-hidden\"><div class=\"field-items\"><div class=\"field-item even\"></div></div></div>  </div>\n\n  \n</div>\n</div><div class=\"media media-element-container media-default\"><div id=\"file-9\" class=\"file file-image file-image-png\">\n\n        <h2 class=\"element-invisible\"><a href=\"/en/file/22png\">2.2.png</a></h2>\n    \n  \n  <div class=\"content\">\n    <img class=\"media-element file-default\" typeof=\"foaf:Image\" src=\"http://eche.waat.eu/en/system/files/2.2.png\" alt=\"\" /><div class=\"field field-name-field-caption field-type-text field-label-hidden\"><div class=\"field-items\"><div class=\"field-item even\"></div></div></div>  </div>\n\n  \n</div>\n</div>\n<p style=\"margin-left:1.15pt\">Tallinn University also uses this information in their special “Touch the Exchange” booth, an interactive facility created by a project team from the University’s  Designed for students, lecturers and support personnel of the University, this booth displays Tallinn University’s partner universities abroad and, based on the user’s profile (e.g. student/teacher/support personnel, level of study), lists options for scholarships and grants. The user can then browse geographically which suitable agreements exist and where, learn basic information and even directly contact the responsible co-ordinator at Tallinn University. It also includes features for international students, providing them with information about degree studies in English and details of the Summer and Winter Schools.</p>\n<p>IIAs are the foundation of all mobility and co-operation activities. They should be based on input from academics around important areas for co-operation and complementarities. The first example shows that even in a very large university, it is possible to foster a collaborative approach for the establishment of IIAs through the engagement of faculties. The approach taken in Copenhagen ensures broader buy-in to the selection of IIAs. The other two examples, from Brussels and Tallinn, showcase how the framework of IIAs displayed can help students and staff understand what is possible and where, including information on Erasmus+ exchanges and grant. The visual approaches allow interested individuals to explore their options with all information easily in reach to make informed choices more easily.</p>\n<p> </p>\n",
          'safe_summary' => '',
        ),
      ),
    ),
    'field_case_study_contact' => array(),
    'field_case_study_contact_email' => array(),
    'field_case_study_contact_name' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'Copenhagen International Education and Grants: int-admission@adm.ku.dk; Tallinn Academic Affairs Office: erasmus@tlu.ee;  ULB Student Mobility Office: mobilite@ulb.ac.be ',
          'format' => NULL,
          'safe_value' => 'Copenhagen International Education and Grants: int-admission@adm.ku.dk; Tallinn Academic Affairs Office: erasmus@tlu.ee;  ULB Student Mobility Office: mobilite@ulb.ac.be ',
        ),
      ),
    ),
    'field_case_study_country' => array(),
    'field_case_study_further_reading' => array(
      LANGUAGE_NONE => array(
        array(
          'url' => 'http://ec.europa.eu/education/opportunities/higher-education/quality-framework_en.htm',
          'title' => 'Erasmus+ quality framework ',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://partnersmap.tlu.ee/',
          'title' => 'Tallinn University, Browsable Map of IIAs ',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://www.tlu.ee/en/News/1818/touch-the-exchange-an-academic-tour-of-the-world-in-tallinn-university',
          'title' => 'Tallinn University, “Touch the Exchange” ',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://www.ulb.ac.be/international/Partnerships-Networks-Agreements.html',
          'title' => 'ULB Partnerships, Networks and Agreements ',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://www.sv.uio.no/arena/english/research/projects/flagship/institutional-reports/copenhagen.pdf',
          'title' => 'University of Copenhagen Institutional Report, ',
          'attributes' => array(),
        ),
      ),
    ),
    'field_case_study_org_type' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '1',
        ),
      ),
    ),
    'field_case_study_organisation' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'Tallinn University, University of Copenhagen and Université Libre de Bruxelles',
          'format' => NULL,
          'safe_value' => 'Tallinn University, University of Copenhagen and Université Libre de Bruxelles',
        ),
      ),
    ),
    'field_case_study_introduction' => array(),
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

    'print_html_display' => 0,
    'print_html_display_comment' => 0,
    'print_html_display_urllist' => 0,
    'print_mail_display' => 0,
    'print_mail_display_comment' => 0,
    'print_mail_display_urllist' => 0,
    'print_pdf_display' => 1,
    'print_pdf_display_comment' => 0,
    'print_pdf_display_urllist' => 1,
    'print_pdf_size' => '',
    'print_pdf_orientation' => '',
    'path' => array(
      'alias' => 'case-study/inter-institutional-agreements',
      'language' => 'en',
    ),
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
 * Internationalisation at the Universities of Helsinki and Oslo.
 */
function eche_core_create_internationalisation_at_the_universities_page() {
  $title = 'Internationalisation at the Universities of Helsinki and Oslo';
  $type = 'case_study';
  $node = eche_core_case_study_check_if_page_exist($title, $type);

  $node_data = new stdClass();

  $node_data = (object) array(
    'title' => 'Internationalisation at the Universities of Helsinki and Oslo',
    'log' => '',
    'status' => '1',
    'comment' => '1',
    'promote' => '0',
    'sticky' => '0',
    'body' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '<p>The Universities of Helsinki and Oslo are both traditional comprehensive, research-intensive institutions with a long history of internationalisation. The University of Helsinki has more than 36,000 enrolled students, and receives 1,000 international students per year. The University of Oslo currently has over 27,000 students enrolled, and receives approximately 1,700 international students per year. Both institutions offer a broad range of degree programmes in English.</p><p>The <strong>University of Helsinki</strong> has embedded internationalisation throughout all of its departments, rather than placing responsibility in a central office. As such, internationalisation is part of all day-to-day university activities, from research and teaching to administration and student services. Internationalisation is a part of the support functions for these activities too, meaning that there are ‘international operators’ in all parts of the institution, meaning that services are provided flexibly and equally to all students and staff in three languages (Finnish, Swedish and English) where necessary. The University bases its ‘embedded internationalisation’ approach on four pillars, called ‘ECCE’, which stands for Embedding, Communication, Co-operation and Excellence. These pillars are the key to promoting internationalisation throughout the university, and they can be demonstrated by four practical examples of how internationalisation permeates different university activities:</p><ul><li><strong>Embedding:</strong> International Staff Exchange Week is explicitly inclusive of all staff. Each year, exchanges include staff members from areas such as university finances, Human Resources and strategic management, meaning that these functions are also exposed to international benchmarking.</li><li><strong>Communication:</strong> A large, cross-university project created a new ‘entry portal’ for new international students (both degree and exchange students), bringing together previously isolated channels such as blogs, guides, services and social media pages.</li><li><strong>Co-operation:</strong> Student representatives are a vital partner in internationalisation. They have a large portfolio of important responsibilities that are key to welcoming and supporting students, including accommodation, day care, and running cafeterias and healthcare centres.</li><li><strong>Excellence:</strong> The university has recently established a Teachers’ Academy, to improve teaching quality. Since its beginning, the Academy has worked to tackle issues related to international education.</li></ul><p>These examples were highighted in 2013, when the Univeristy of Helsinki was awarded the European Association for International Education (EAIE) Institutional Award for Innovation in Internationalisation.</p><p>The <strong>University of Oslo’s</strong> commitment to internationalisation is formally and clearly enshrined in its institutional strategies and action plans, in particular its overarching ‘Strategy2020’. Published in 2010, the strategy sets the target of becoming “an attractive, vital and internationally reknown top university” that “contributes to international academic development”.</p><p>The first of Strategy2020’s five pillars is “a university transcending borders”. The main objective of this pillar is to promote the university as an international partner via i) increasing international involvement and participation, ii) increasing the involvement of foreign institutions, and iii) giving all of its educational programmes an international profile.</p><p>An institutional Internationalisation Action Plan was also published along the strategy, covering a three-year period (up to 2014). The action plan tied the University’s strategic objectives to specific actions via 26 targeted initiatives. The institution’s Innovation Action Plan from the same period placed internationalisation to its centre as well. &nbsp;</p><p>Oslo demonstrates an unambiguous focus on building long-term, functional strategic collaborations and long-term relationships. In doing so, the University fosters the internationalisation of its study programmes and strengthens its international research collaborations. This filters down through all levels of the University, as individual faculties are expected to promote internationalisation by including relevant goals and initiatives in their own planning procedures as well.</p><p>Internationalisation can and should form a key part of institutional strategies and operations. In institutions where there is a tradition of devolved responsibility with appropriate support and incentives, such as Helsinki, working on internationalisation in practice across all departments and functions (and putting them in direct control) is a good way to ensure full commitment. In the case of Oslo, there is a close focus on implementing particular activities that align closely to the overarching institutional strategy, and assigning responsibilities to faculties to promote internationalisation through their own planning processes.&nbsp;Internationalisation as a strategic goal of higher education institutions is high on the agenda in Europe, and there are many examples of institutions that successfully supported their internationalisation strategies with an effective structure.</p><p>This case study highlights two particular approaches, one from Finland (University of Helsinki) and one from Norway (University of Oslo). In particular, it explores through the Finnish example how internationalisation is operationalised throughout the day-to-day operations of an institution, and through the Norwegian example how it can reinforce the overall mission and objectives of an institution when internationalisation is linked to other long term institutional strategies.&nbsp;</p><p>&nbsp;</p>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => "<p>The Universities of Helsinki and Oslo are both traditional comprehensive, research-intensive institutions with a long history of internationalisation. The University of Helsinki has more than 36,000 enrolled students, and receives 1,000 international students per year. The University of Oslo currently has over 27,000 students enrolled, and receives approximately 1,700 international students per year. Both institutions offer a broad range of degree programmes in English.</p>\n<p>The <strong>University of Helsinki</strong> has embedded internationalisation throughout all of its departments, rather than placing responsibility in a central office. As such, internationalisation is part of all day-to-day university activities, from research and teaching to administration and student services. Internationalisation is a part of the support functions for these activities too, meaning that there are ‘international operators’ in all parts of the institution, meaning that services are provided flexibly and equally to all students and staff in three languages (Finnish, Swedish and English) where necessary. The University bases its ‘embedded internationalisation’ approach on four pillars, called ‘ECCE’, which stands for Embedding, Communication, Co-operation and Excellence. These pillars are the key to promoting internationalisation throughout the university, and they can be demonstrated by four practical examples of how internationalisation permeates different university activities:</p>\n<ul><li><strong>Embedding:</strong> International Staff Exchange Week is explicitly inclusive of all staff. Each year, exchanges include staff members from areas such as university finances, Human Resources and strategic management, meaning that these functions are also exposed to international benchmarking.</li>\n<li><strong>Communication:</strong> A large, cross-university project created a new ‘entry portal’ for new international students (both degree and exchange students), bringing together previously isolated channels such as blogs, guides, services and social media pages.</li>\n<li><strong>Co-operation:</strong> Student representatives are a vital partner in internationalisation. They have a large portfolio of important responsibilities that are key to welcoming and supporting students, including accommodation, day care, and running cafeterias and healthcare centres.</li>\n<li><strong>Excellence:</strong> The university has recently established a Teachers’ Academy, to improve teaching quality. Since its beginning, the Academy has worked to tackle issues related to international education.</li>\n</ul><p>These examples were highighted in 2013, when the Univeristy of Helsinki was awarded the European Association for International Education (EAIE) Institutional Award for Innovation in Internationalisation.</p>\n<p>The <strong>University of Oslo’s</strong> commitment to internationalisation is formally and clearly enshrined in its institutional strategies and action plans, in particular its overarching ‘Strategy2020’. Published in 2010, the strategy sets the target of becoming “an attractive, vital and internationally reknown top university” that “contributes to international academic development”.</p>\n<p>The first of Strategy2020’s five pillars is “a university transcending borders”. The main objective of this pillar is to promote the university as an international partner via i) increasing international involvement and participation, ii) increasing the involvement of foreign institutions, and iii) giving all of its educational programmes an international profile.</p>\n<p>An institutional Internationalisation Action Plan was also published along the strategy, covering a three-year period (up to 2014). The action plan tied the University’s strategic objectives to specific actions via 26 targeted initiatives. The institution’s Innovation Action Plan from the same period placed internationalisation to its centre as well.  </p>\n<p>Oslo demonstrates an unambiguous focus on building long-term, functional strategic collaborations and long-term relationships. In doing so, the University fosters the internationalisation of its study programmes and strengthens its international research collaborations. This filters down through all levels of the University, as individual faculties are expected to promote internationalisation by including relevant goals and initiatives in their own planning procedures as well.</p>\n<p>Internationalisation can and should form a key part of institutional strategies and operations. In institutions where there is a tradition of devolved responsibility with appropriate support and incentives, such as Helsinki, working on internationalisation in practice across all departments and functions (and putting them in direct control) is a good way to ensure full commitment. In the case of Oslo, there is a close focus on implementing particular activities that align closely to the overarching institutional strategy, and assigning responsibilities to faculties to promote internationalisation through their own planning processes. Internationalisation as a strategic goal of higher education institutions is high on the agenda in Europe, and there are many examples of institutions that successfully supported their internationalisation strategies with an effective structure.</p>\n<p>This case study highlights two particular approaches, one from Finland (University of Helsinki) and one from Norway (University of Oslo). In particular, it explores through the Finnish example how internationalisation is operationalised throughout the day-to-day operations of an institution, and through the Norwegian example how it can reinforce the overall mission and objectives of an institution when internationalisation is linked to other long term institutional strategies. </p>\n<p> </p>\n",
          'safe_summary' => '',
        ),
      ),
    ),
    'field_case_study_contact' => array(),
    'field_case_study_contact_email' => array(),
    'field_case_study_contact_name' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'Helsinki: erasmus-inst@helsinki.fi  Oslo: erasmus-uio@admin.uio.no ',
          'format' => NULL,
          'safe_value' => 'Helsinki: erasmus-inst@helsinki.fi  Oslo: erasmus-uio@admin.uio.no ',
        ),
      ),
    ),
    'field_case_study_country' => array(
      LANGUAGE_NONE => array(
        array(
          'iso2' => 'FI',
        ),
      ),
    ),
    'field_case_study_further_reading' => array(
      LANGUAGE_NONE => array(
        array(
          'url' => 'https://play.google.com/books/reader?id=P0iLBQAAQBAJ&printsec=frontcover&output=reader&hl=ru&pg=GBS.PA1',
          'title' => 'Laitinen, M., 2014. Embedding Internationalisation in the University of Helsinki in Hudzik, J.K. (ed.) Comprehensive Internation',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://www.slideshare.net/EAIE/s714-27690417',
          'title' => 'The European Association for International Education, 2013. EAIE Institutional Award 2013 winner: best practice examples',
          'attributes' => array(),
        ),
        array(
          'url' => 'https://www.uio.no/english/about/strategy/',
          'title' => 'University of Oslo Strategy2020. ',
          'attributes' => array(),
        ),
        array(
          'url' => 'http://www.uio.no/english/about/strategy/internationalisation_actionplan.pdf',
          'title' => 'University of Oslo, 2011. ‘Global presence – global responsibility’, UiO’s Action Plan for Internationalisation 2012-2014',
          'attributes' => array(),
        ),
      ),
    ),
    'field_case_study_org_type' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '1',
        ),
      ),
    ),
    'field_case_study_organisation' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'University of Helsinki (Helsingin yliopiston) & University of Oslo (Universitetet i Oslo)',
          'format' => NULL,
          'safe_value' => 'University of Helsinki (Helsingin yliopiston) &amp; University of Oslo (Universitetet i Oslo)',
        ),
      ),
    ),
    'field_case_study_introduction' => array(),
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
    'print_html_display' => 0,
    'print_html_display_comment' => 0,
    'print_html_display_urllist' => 0,
    'print_mail_display' => 0,
    'print_mail_display_comment' => 0,
    'print_mail_display_urllist' => 0,
    'print_pdf_display' => 1,
    'print_pdf_display_comment' => 0,
    'print_pdf_display_urllist' => 1,
    'print_pdf_size' => '',
    'print_pdf_orientation' => '',
    'path' => array(
      'alias' => 'case-study/internationalisation-universities-helsinki-and-oslo',
      'language' => 'en',
    ),
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
