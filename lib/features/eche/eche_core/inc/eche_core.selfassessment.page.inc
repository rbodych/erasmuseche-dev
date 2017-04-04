<?php

/**
 * @file
 * Holds selflessness refactor page.
 */

/**
 * Create page programmatic.
 *
 * "Complete your self-assessment as Rector / Vice rector / Vice chancellor".
 */
// @codingStandardsIgnoreStart
function eche_core_create_self_assesment_rector_page() {

  $query = db_select('node', 'n');
  $query->fields('n');
  $query->condition('n.title', 'Complete your self-assessment as Rector / Vice rector / Vice chancellor');
  $query->condition('n.type', 'webform');
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
    $node->type = 'webform';
    node_object_prepare($node);
  }
  elseif ($result->rowCount() == 0) {
    $node = new stdClass();
    $node->type = 'webform';
    node_object_prepare($node);
  }

  $node_data = (object) array(

    'uid' => '1',
    'title' => 'Complete your self-assessment as Rector / Vice rector / Vice chancellor',
    'log' => '',
    'status' => '1',
    'comment' => '1',
    'promote' => '0',
    'sticky' => '0',

    'type' => 'webform',
    'language' => 'en',
    'created' => '1477954531',
    'changed' => '1485626462',
    'tnid' => '0',
    'translate' => '0',

    'revision_timestamp' => '1485626462',
    'revision_uid' => '1',
    'field_body' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '&nbsp;',
          'format' => 'full_html',
        ),
      ),
    ),
    'title_field' => array(
      'en' => array(
        array(
          'value' => 'Complete your self-assessment as Rector / Vice rector / Vice chancellor',
          'format' => NULL,
          'safe_value' => 'Complete your self-assessment as Rector / Vice rector / Vice chancellor',
        ),
      ),
    ),
    'field_machine_name' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'rectors-self-assesment',
          'format' => NULL,
          'safe_value' => 'rectors-self-assesment',
        ),
      ),
    ),

    'title_original' => 'Complete your self-assessment as Rector / Vice rector / Vice chancellor',

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

      'alias' => 'rectors-self-assesment',
      'language' => 'en',
    ),
    'webform' => array(

      'confirmation' => '',
      'confirmation_format' => 'full_html',
      'redirect_url' => '<confirmation>',
      'status' => '1',
      'block' => '0',
      'allow_draft' => '0',
      'auto_save' => '0',
      'submit_notice' => '0',
      'confidential' => '0',
      'submit_text' => '',
      'submit_limit' => '-1',
      'submit_interval' => '-1',
      'total_submit_limit' => '-1',
      'total_submit_interval' => '-1',
      'progressbar_bar' => '1',
      'progressbar_page_number' => '0',
      'progressbar_percent' => '0',
      'progressbar_pagebreak_labels' => '1',
      'progressbar_include_confirmation' => '1',
      'progressbar_label_first' => 'Start',
      'progressbar_label_confirmation' => 'Complete',
      'preview' => '0',
      'preview_next_button_label' => '',
      'preview_prev_button_label' => '',
      'preview_title' => '',
      'preview_message' => '',
      'preview_message_format' => 'full_html',
      'preview_excluded_components' => array(),
      'record_exists' => TRUE,
      'roles' => array(
        '2',
        '3',
        '32',
      ),
      'emails' => array(),
      'components' => array(
        7 => array(

          'cid' => '7',
          'pid' => '0',
          'form_key' => 'intro',
          'name' => 'intro',
          'type' => 'markup',
          'value' => '<p>Welcome!</p><p>You have signed, on behalf of your Higher Education Institution, an Erasmus Charter for Higher Education (ECHE). This constitutes your commitment to respect, in full, all of the principles described in this Charter and the condition for your institution to be eligible to receive European funding under the Erasmus+ programme for 2014-2020 period.</p><p>Holding the Charter gives access to numerous opportunities offered by Erasmus+. This is wider than mobility activities for students, trainees, teaching and training staff and reinforces cooperation with peers and socio-economic actors within and outside Europe. These opportunities can support your institution to increase its attractiveness; reinforce and diversify its educational offer as well as modernise teaching and learning methodologies.</p><p>The ECHE principles are the foundation of your participation in the Erasmus+ Programme. It is vital that all 5000+ higher education institutions apply it correctly, as they all depend on each other in Erasmus+ mobility and cooperation projects. Implementing the principles contributes to the internationalisation of your institution, successful cooperation and increases the impact of the Erasmus+ programme.</p><p>A successful implementation of the ECHE requires excellent cooperation at all levels of your institution, starting with YOU! This is a unique opportunity for you to have a comprehensive overview of your institution’s performance in implementing some of the key principles. You may also compare your institution’s results with national and European peers.</p><p>The exercise is entirely voluntary, and the results will only be visible by you. Neither the European Commission nor the National Authorities in charge of Erasmus+ in your country will have access to the results, unless you decide to share them.</p>',
          'extra' => array(
            'format' => 'full_html',
            'private' => 0,
            'display_on' => 'form',
          ),
          'required' => '0',
          'weight' => '6',
          'page_num' => 1,
          '#meta' => array(),
        ),
        8 => array(

          'cid' => '8',
          'pid' => '0',
          'form_key' => 'page_1',
          'name' => 'Page 1',
          'type' => 'pagebreak',
          'value' => '',
          'extra' => array(
            'private' => 0,
            'next_page_label' => '',
            'prev_page_label' => '',
          ),
          'required' => '0',
          'weight' => '7',
          'page_num' => 2,
          '#meta' => array(),
        ),
        15 => array(

          'cid' => '15',
          'pid' => '0',
          'form_key' => 'first',
          'name' => '<div class="question__number">1</div>Your institution has a strategy and an overarching structure supporting internationalisation',
          'type' => 'optionsmarkup',
          'value' => '',
          'extra' => array(
            'items' => "A|<h3>The strategy is:</h3>A. Embedded in the institutional strategic plan\r\nB|B. Communicated to all levels of the institution\r\nC|C. Available and prominently displayed on the website of your institution\r\nD|<h3>Its effective implementation is carried out by:</h3>D. All the relevant staff throughout the institution\r\nE|E. Structures working with mobility and international projects\r\nF|F. The office in charge of international relations\r\nG|G. One single person (e.g. Vice Rector, institutional coordinator, etc.)\r\nH|<h3>The selection of partners for international cooperation is based on:</h3>H. Areas of mutual interest\r\nI|I. The experience and involvement of academics\r\nJ|J. Compatibility of study programmes\r\nK|K. A request from students",
            'multiple' => 1,
            'title_display' => 'before',
            'description_above' => 0,
            'private' => 0,
            'wrapper_classes' => 'question',
            'css_classes' => 'question__items',
            'optrand' => 0,
            'description' => '',
            'aslist' => NULL,
          ),
          'required' => '1',
          'weight' => '9',
          'mandatory' => 0,
          'html' => TRUE,
          'page_num' => 2,
          '#meta' => array(

            'cid' => '15',
            'meta' => array(
              'stars' => array(
                3 => array(
                  'ticked' => array(
                    'condition' => 'at_least',
                    'values' => array(
                      'A' => 'A',
                      'B' => 'B',
                      'C' => 'C',
                      'D' => 'D',
                      'E' => 'E',
                      'F' => 'F',
                      'H' => 'H',
                      'I' => 'I',
                      'J' => 'J',
                    ),
                  ),
                  'not_ticked' => array(
                    'condition' => 'all',
                    'values' => array(),
                  ),
                ),
                2 => array(
                  'ticked' => array(
                    'condition' => 'at_least',
                    'values' => array(
                      'A' => 'A',
                      'C' => 'C',
                      'D' => 'D',
                      'H' => 'H',
                      'I' => 'I',
                    ),
                  ),
                  'not_ticked' => array(
                    'condition' => 'all',
                    'values' => array(),
                  ),
                ),
                1 => array(
                  'ticked' => array(
                    'condition' => 'all',
                    'values' => array(),
                  ),
                  'not_ticked' => array(
                    'condition' => 'all',
                    'values' => array(),
                  ),
                ),
              ),
              'text' => array(
                'value' => '<p class="p1"><span class="s1">The most effective way to have a strategy and overarching structure supporting internationalisation is to ensure that the strategy is embedded in the institutional strategic plan and known, by communicating it at all levels of the institution and displaying it prominently on the institution’s website.</span></p><p class="p1"><span class="s1">All the relevant staff throughout the institution should be involved in its effective implementation. Depending on the size of the institution, the relevant staff could include the person or office in charge of internationalisation, the person or an office in charge of international relations, mobility and international projects, academic and administrative staff in contact with incoming and outgoing mobile participants, etc.</span></p><p class="p1"><span class="s1">The most efficient way to choose partners for international cooperation is to select them based on areas of mutual interest to improve the quality of learning and teaching in common areas, by using the experience and involvement of academics. The selection can also be based on, but not limited to, the compatibility of study programmes. The selection can sometimes start from a request from students, but basing the choice of partners solely on this criterion shows that there is no institutional strategy in place.</span></p>',
                'format' => 'full_html',
              ),
            ),
          ),
        ),
        9 => array(

          'cid' => '9',
          'pid' => '0',
          'form_key' => 'page_2',
          'name' => 'Page 2',
          'type' => 'pagebreak',
          'value' => '',
          'extra' => array(
            'private' => 0,
            'next_page_label' => '',
            'prev_page_label' => '',
          ),
          'required' => '0',
          'weight' => '10',
          'page_num' => 3,
          '#meta' => array(),
        ),
        2 => array(

          'cid' => '2',
          'pid' => '0',
          'form_key' => 'second',
          'name' => '<div class="question__number">2</div>Your institution expresses its commitment to equal access and opportunities to Erasmus+ mobile participants from all backgrounds, by:',
          'type' => 'optionsmarkup',
          'value' => '',
          'extra' => array(
            'items' => "A|A. Ensuring a fair and transparent selection of mobile participants\r\nB|B. Treating all mobile participants equally in all academic and service matters\r\nC|C. Giving appropriate specific support to under-represented groups in mobility\r\nD|D. Promoting mobility of participants from under-represented groups\r\nE|E. Ensuring that no fees are charged to incoming participants\r\n",
            'multiple' => 1,
            'title_display' => 'before',
            'description_above' => 0,
            'private' => 0,
            'wrapper_classes' => 'question',
            'css_classes' => 'question__items',
            'optrand' => 0,
            'description' => '',
            'aslist' => NULL,
          ),
          'required' => '1',
          'weight' => '12',
          'mandatory' => 0,
          'html' => TRUE,
          'page_num' => 3,
          '#meta' => array(

            'cid' => '2',
            'meta' => array(
              'stars' => array(
                3 => array(
                  'ticked' => array(
                    'condition' => 'all',
                    'values' => array(
                      'A' => 'A',
                      'B' => 'B',
                      'C' => 'C',
                      'D' => 'D',
                      'E' => 'E',
                    ),
                  ),
                  'not_ticked' => array(
                    'condition' => 'all',
                    'values' => array(),
                  ),
                ),
                2 => array(
                  'ticked' => array(
                    'condition' => 'at_least',
                    'values' => array(
                      'A' => 'A',
                      'C' => 'C',
                      'E' => 'E',
                    ),
                  ),
                  'not_ticked' => array(
                    'condition' => 'all',
                    'values' => array(),
                  ),
                ),
                1 => array(
                  'ticked' => array(
                    'condition' => 'all',
                    'values' => array(),
                  ),
                  'not_ticked' => array(
                    'condition' => 'all',
                    'values' => array(),
                  ),
                ),
              ),
              'text' => array(
                'value' => '<p>Expressing equal access and opportunities to Erasmus+ mobile participants implies a number of measures, including ensuring that the selection of mobile participants is carried out in both a fair and a transparent way; treating all students and staff equally in all academic and service matters; promoting mobility and giving appropriate specific support to under-represented groups in mobility (students or staff with special needs, students from lower socio-economic backgrounds, with family responsibilities or with part-time jobs, etc.); and ensuring that the principle of charging no fees for tuition, registration, examinations or access to laboratory and library facilities to incoming Erasmus+ participants is respected.</p><p>&nbsp;</p>',
                'format' => 'full_html',
              ),
            ),
          ),
        ),
        10 => array(

          'cid' => '10',
          'pid' => '0',
          'form_key' => 'page_3',
          'name' => 'Page 3',
          'type' => 'pagebreak',
          'value' => '',
          'extra' => array(
            'private' => 0,
            'next_page_label' => '',
            'prev_page_label' => '',
          ),
          'required' => '0',
          'weight' => '13',
          'page_num' => 4,
          '#meta' => array(),
        ),
        3 => array(

          'cid' => '3',
          'pid' => '0',
          'form_key' => 'third',
          'name' => '<div class="question__number">3</div>Your institution provides all the necessary information and support for incoming Erasmus+ participants to best prepare and make the most out of their exchange:',
          'type' => 'optionsmarkup',
          'value' => '',
          'extra' => array(
            'items' => "A|<h3>The institution has:</h3>A. An online course catalogue updated well in advance for incoming students to make their choices when signing the Learning Agreement\r\nB|B. An online course catalogue available only at the beginning of each semester\r\nC|C. A course catalogue for incoming students only upon arrival\r\nD|D. An online list of available courses for incoming students\r\nE|<h3>This is available:</h3>E. In a widely spoken language\r\nF|F. In the local language",
            'multiple' => 1,
            'title_display' => 'before',
            'description_above' => 0,
            'private' => 0,
            'wrapper_classes' => 'question',
            'css_classes' => 'question__items',
            'optrand' => 0,
            'description' => '',
            'aslist' => NULL,
          ),
          'required' => '1',
          'weight' => '15',
          'mandatory' => 0,
          'html' => TRUE,
          'page_num' => 4,
          '#meta' => array(

            'cid' => '3',
            'meta' => array(
              'stars' => array(
                3 => array(
                  'ticked' => array(
                    'condition' => 'all',
                    'values' => array(
                      'A' => 'A',
                      'E' => 'E',
                      'F' => 'F',
                    ),
                  ),
                  'not_ticked' => array(
                    'condition' => 'all',
                    'values' => array(
                      'B' => 'B',
                      'C' => 'C',
                    ),
                  ),
                ),
                2 => array(
                  'ticked' => array(
                    'condition' => 'all',
                    'values' => array(
                      'A' => 'A',
                      'F' => 'F',
                    ),
                  ),
                  'not_ticked' => array(
                    'condition' => 'all',
                    'values' => array(
                      'B' => 'B',
                      'C' => 'C',
                      'E' => 'E',
                    ),
                  ),
                ),
                1 => array(
                  'ticked' => array(
                    'condition' => 'all',
                    'values' => array(),
                  ),
                  'not_ticked' => array(
                    'condition' => 'all',
                    'values' => array(),
                  ),
                ),
              ),
              'text' => array(
                'value' => '<p>The most effective way of providing academic information to incoming Erasmus+ participants is via a course catalogue. This should be developed in line with the ECTS Users’ Guide, available online and updated sufficiently in advance for incoming students to make their choices - i.e. before the end of the previous academic year -, in the local language and in a widely spoken language.</p>',
                'format' => 'full_html',
              ),
            ),
          ),
        ),
        11 => array(

          'cid' => '11',
          'pid' => '0',
          'form_key' => 'page_4',
          'name' => 'Page 4',
          'type' => 'pagebreak',
          'value' => '',
          'extra' => array(
            'private' => 0,
            'next_page_label' => '',
            'prev_page_label' => '',
          ),
          'required' => '0',
          'weight' => '16',
          'page_num' => 5,
          '#meta' => array(),
        ),
        4 => array(

          'cid' => '4',
          'pid' => '0',
          'form_key' => 'fourth',
          'name' => '<div class="question__number">4</div>Your institution ensures integration of incoming participants and equally exploits their experiences to reinforce international cooperation, by:',
          'type' => 'optionsmarkup',
          'value' => '',
          'extra' => array(
            'items' => "A|A. Capitalising on them to ensure internationalisation at home and build future cooperation\r\nB|B. Organising activities to integrate them into the life of the institution and the local community\r\nC|C. Providing opportunities for them to share their experience within the institution and with the local community\r\nD|D. Encouraging them to do activities among themselves",
            'multiple' => 1,
            'title_display' => 'before',
            'description_above' => 0,
            'private' => 0,
            'wrapper_classes' => 'question',
            'css_classes' => 'question__items',
            'optrand' => 0,
            'description' => '',
            'aslist' => NULL,
          ),
          'required' => '1',
          'weight' => '18',
          'mandatory' => 0,
          'html' => TRUE,
          'page_num' => 5,
          '#meta' => array(

            'cid' => '4',
            'meta' => array(
              'stars' => array(
                3 => array(
                  'ticked' => array(
                    'condition' => 'all',
                    'values' => array(
                      'A' => 'A',
                      'B' => 'B',
                      'C' => 'C',
                    ),
                  ),
                  'not_ticked' => array(
                    'condition' => 'all',
                    'values' => array(),
                  ),
                ),
                2 => array(
                  'ticked' => array(
                    'condition' => 'all',
                    'values' => array(
                      'A' => 'A',
                      'B' => 'B',
                      'C' => 'C',
                      'D' => 'D',
                    ),
                  ),
                  'not_ticked' => array(
                    'condition' => 'all',
                    'values' => array(),
                  ),
                ),
                1 => array(
                  'ticked' => array(
                    'condition' => 'all',
                    'values' => array(),
                  ),
                  'not_ticked' => array(
                    'condition' => 'all',
                    'values' => array(),
                  ),
                ),
              ),
              'text' => array(
                'value' => '<p>The most effective measure to ensure integration of incoming participants is to organise joint activities with local students and people - rather than encouraging them to only do activities among themselves - to integrate them into the life of the institution and the local community; to encourage them to share their experience not only within the institution but also with the local community; and to capitalise on them to ensure internationalisation at home but also to build future cooperation.</p>',
                'format' => 'full_html',
              ),
            ),
          ),
        ),
        12 => array(

          'cid' => '12',
          'pid' => '0',
          'form_key' => 'page_5',
          'name' => 'Page 5',
          'type' => 'pagebreak',
          'value' => '',
          'extra' => array(
            'private' => 0,
            'next_page_label' => '',
            'prev_page_label' => '',
          ),
          'required' => '0',
          'weight' => '19',
          'page_num' => 6,
          '#meta' => array(),
        ),
        5 => array(

          'cid' => '5',
          'pid' => '0',
          'form_key' => 'fifth',
          'name' => '<div class="question__number">5</div>Your institution ensures full recognition of student mobility activities successfully completed abroad.',
          'type' => 'optionsmarkup',
          'value' => '',
          'extra' => array(
            'items' => "A|A. Automatically transferred and accounted towards the students' final degree without the need for further requirements from the student\r\nB|B. Included in the Diploma supplement to be issued to all graduates automatically, free of charge and in a major European language\r\nC|C. Analysed by individual academics who decide which credits count towards the students' final degree\r\n",
            'multiple' => 1,
            'title_display' => 'before',
            'description_above' => 0,
            'private' => 0,
            'wrapper_classes' => 'question',
            'css_classes' => 'question__items',
            'optrand' => 0,
            'description' => '',
            'aslist' => NULL,
          ),
          'required' => '1',
          'weight' => '21',
          'mandatory' => 0,
          'html' => TRUE,
          'page_num' => 6,
          '#meta' => array(

            'cid' => '5',
            'meta' => array(
              'stars' => array(
                3 => array(
                  'ticked' => array(
                    'condition' => 'all',
                    'values' => array(
                      'A' => 'A',
                      'B' => 'B',
                    ),
                  ),
                  'not_ticked' => array(
                    'condition' => 'all',
                    'values' => array(),
                  ),
                ),
                2 => array(
                  'ticked' => array(
                    'condition' => 'all',
                    'values' => array(
                      'A' => 'A',
                      'B' => 'B',
                      'C' => 'C',
                    ),
                  ),
                  'not_ticked' => array(
                    'condition' => 'all',
                    'values' => array(),
                  ),
                ),
                1 => array(
                  'ticked' => array(
                    'condition' => 'all',
                    'values' => array(),
                  ),
                  'not_ticked' => array(
                    'condition' => 'all',
                    'values' => array(),
                  ),
                ),
              ),
              'text' => array(
                'value' => "<p>The most effective way to ensure full recognition is to agree on the recognition with the student before the mobility. At the end of the mobility, all credits gained abroad should automatically be transferred and accounted towards the students' final degree; recognition should not be questioned and students should not be asked for any further exams or requirements. Further, these credits should be included in the Diploma supplement, which is an important tool to keep a record of the mobility after the student’s degree.</p>",
                'format' => 'full_html',
              ),
            ),
          ),
        ),
        13 => array(

          'cid' => '13',
          'pid' => '0',
          'form_key' => 'page_6',
          'name' => 'Page 6',
          'type' => 'pagebreak',
          'value' => '',
          'extra' => array(
            'private' => 0,
            'next_page_label' => '',
            'prev_page_label' => '',
          ),
          'required' => '0',
          'weight' => '22',
          'page_num' => 7,
          '#meta' => array(),
        ),
        6 => array(

          'cid' => '6',
          'pid' => '0',
          'form_key' => 'sixth',
          'name' => '<div class="question__number">6</div>Your institution recognises staff mobility as a key component of professional development. ',
          'type' => 'optionsmarkup',
          'value' => '',
          'extra' => array(
            'items' => "A|A. Having it taken into account for their career progression\r\nB|B. Capitalising on their experience abroad to propose improvements to the institution\r\nC|C. Encouraging them to share learning and teaching methods developed or learned abroad with their peers\r\nD|D. Considering the mobility as part of their workload\r\nE|E. Allowing them to participate in other mobility activities",
            'multiple' => 1,
            'title_display' => 'before',
            'description_above' => 0,
            'private' => 0,
            'wrapper_classes' => 'question',
            'css_classes' => 'question__items',
            'optrand' => 0,
            'description' => '',
            'aslist' => NULL,
          ),
          'required' => '1',
          'weight' => '24',
          'mandatory' => 0,
          'html' => TRUE,
          'page_num' => 7,
          '#meta' => array(

            'cid' => '6',
            'meta' => array(
              'stars' => array(
                3 => array(
                  'ticked' => array(
                    'condition' => 'all',
                    'values' => array(
                      'A' => 'A',
                      'B' => 'B',
                      'C' => 'C',
                      'D' => 'D',
                    ),
                  ),
                  'not_ticked' => array(
                    'condition' => 'all',
                    'values' => array(
                      'E' => 'E',
                    ),
                  ),
                ),
                2 => array(
                  'ticked' => array(
                    'condition' => 'all',
                    'values' => array(
                      'A' => 'A',
                      'B' => 'B',
                      'C' => 'C',
                      'D' => 'D',
                      'E' => 'E',
                    ),
                  ),
                  'not_ticked' => array(
                    'condition' => 'all',
                    'values' => array(),
                  ),
                ),
                1 => array(
                  'ticked' => array(
                    'condition' => 'all',
                    'values' => array(),
                  ),
                  'not_ticked' => array(
                    'condition' => 'all',
                    'values' => array(),
                  ),
                ),
              ),
              'text' => array(
                'value' => '<p>The most effective measure to recognise staff mobility is to provide mobile staff with the opportunity to share the outcomes of their mobility abroad with their peers, to build on their experience abroad to propose improvements to the institution, to consider the mobility as part of their workload; and, most importantly, to take their participation in staff mobility into account in the assessment of their professional development and for their career progression.</p><p>&nbsp;</p>',
                'format' => 'full_html',
              ),
            ),
          ),
        ),
      ),
      'conditionals' => array(),
    ),
    'cid' => '0',
    'last_comment_timestamp' => '1477954531',
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

  // Save the node.
  node_save($node);

}

/**
 * Create page programmatic.
 *
 * "Complete your self-assessment as an Erasmus+ coordinator".
 */
function eche_core_create_self_assesment_erasmus_page() {

  $query = db_select('node', 'n');
  $query->fields('n');
  $query->condition('n.title', 'Complete your self-assessment as an Erasmus+ coordinator');
  $query->condition('n.type', 'webform');
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
    $node->type = 'webform';
    node_object_prepare($node);
  }
  elseif ($result->rowCount() == 0) {
    $node = new stdClass();
    $node->type = 'webform';
    node_object_prepare($node);
  }
  $node_data = (object) array(

    'uid' => '1',
    'title' => 'Complete your self-assessment as an Erasmus+ coordinator',
    'log' => '',
    'status' => '1',
    'comment' => '1',
    'promote' => '0',
    'sticky' => '0',
    'vuuid' => '5622361e-a1c1-4b34-a3fd-1463fdf240ef',

    'type' => 'webform',
    'language' => 'en',
    'created' => '1477954531',
    'changed' => '1485803318',
    'tnid' => '0',
    'translate' => '0',

    'revision_timestamp' => '1485803318',
    'revision_uid' => '1',
    'field_body' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => '&nbsp;',
          'format' => 'full_html',
        ),
      ),
    ),
    'title_field' => array(
      'en' => array(
        array(
          'value' => 'Complete your self-assessment as an Erasmus+ coordinator',
          'format' => NULL,
          'safe_value' => 'Complete your self-assessment as an Erasmus+ coordinator',
        ),
      ),
    ),
    'field_machine_name' => array(
      LANGUAGE_NONE => array(
        array(
          'value' => 'self-assesment',
          'format' => NULL,
          'safe_value' => 'self-assesment',
        ),
      ),
    ),
    'translations' => (object) array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'node',
          'entity_id' => '260',
          'revision_id' => '1517',
          'language' => 'en',
          'source' => '',
          'uid' => '0',
          'status' => '1',
          'translate' => '0',
          'created' => '1477954531',
          'changed' => '1477954531',
        ),
      ),
    ),
    'title_original' => 'Complete your self-assessment as an Erasmus+ coordinator',
    'entity_translation_handler_id' => 'node-webform-eid-260-1517',
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
      'alias' => 'self-assesment',
      'language' => 'en',
    ),
    'webform' => array(

      'confirmation' => '',
      'confirmation_format' => 'full_html',
      'redirect_url' => '<confirmation>',
      'status' => '1',
      'block' => '0',
      'allow_draft' => '0',
      'auto_save' => '0',
      'submit_notice' => '0',
      'confidential' => '0',
      'submit_text' => '',
      'submit_limit' => '-1',
      'submit_interval' => '-1',
      'total_submit_limit' => '-1',
      'total_submit_interval' => '-1',
      'progressbar_bar' => '1',
      'progressbar_page_number' => '0',
      'progressbar_percent' => '0',
      'progressbar_pagebreak_labels' => '1',
      'progressbar_include_confirmation' => '1',
      'progressbar_label_first' => 'Start',
      'progressbar_label_confirmation' => 'Complete',
      'preview' => '0',
      'preview_next_button_label' => '',
      'preview_prev_button_label' => '',
      'preview_title' => '',
      'preview_message' => '',
      'preview_message_format' => 'full_html',
      'preview_excluded_components' => array(),
      'record_exists' => TRUE,
      'roles' => array(
        '2',
        '3',
        '32',
      ),
      'emails' => array(),
      'components' => array(
        20 => array(

          'cid' => '20',
          'pid' => '0',
          'form_key' => 'intro',
          'name' => 'Intro',
          'type' => 'markup',
          'value' => '<p>Welcome!</p><p>Your Higher Education Institution has been awarded an Erasmus Charter for Higher Education (ECHE). This constitutes a commitment to respect, in full, all of the principles described in the Charter. This website has been developed with the objective to help you and your peers to <strong>make the ECHE work in practice</strong>.</p><p>The exercise is entirely voluntary, and the results will only be visible to you. Neither the European Commission nor the National Authorities in charge of Erasmus+ in your country (i.e. the Erasmus+ National Agencies) will have access to the results, unless you decide to share them.</p><p>The ECHE principles are the foundation of your participation in the Erasmus+ Programme. Implementing these principles contributes to the internationalisation of your institution, successful cooperation and increases the impact of the Erasmus+ programme. It is vital that all 5000+ higher education institutions apply it correctly, as they all depend on each other in Erasmus+ mobility and cooperation projects.&nbsp;</p><p>As a staff member working at the operational level (e.g. International Relations Offices, Erasmus+ coordinators, faculty colleagues, deans etc.), you have the opportunity to reflect on a number of statements related to the implementation of the Charter in the management of Erasmus+ activities. This exercise will help you identify which areas could be strengthened, and will provide you access to tailored suggestions to improve your institution’s performance in applying the ECHE. You may also compare your institution’s results with national and European peers.</p><p>&nbsp;</p>',
          'extra' => array(
            'format' => 'full_html',
            'private' => 0,
            'display_on' => 'form',
          ),
          'required' => '0',
          'weight' => '34',
          'page_num' => 1,
          '#meta' => array(),
        ),
        16 => array(

          'cid' => '16',
          'pid' => '0',
          'form_key' => 'page_1',
          'name' => 'Page 1',
          'type' => 'pagebreak',
          'value' => '',
          'extra' => array(
            'private' => 0,
            'next_page_label' => '',
            'prev_page_label' => '',
          ),
          'required' => '0',
          'weight' => '35',
          'page_num' => 2,
          '#meta' => array(),
        ),
        1 => array(

          'cid' => '1',
          'pid' => '0',
          'form_key' => 'your_institution_has_a_strategy_and_an_overarching_structure_supporting_internationalisation',
          'name' => '1| Your institution has a strategy and an overarching structure supporting internationalisation:',
          'type' => 'select',
          'value' => '',
          'extra' => array(
            'items' => "1|1.1 The internationalisation strategy is available and prominently displayed on your website\r\n2|1.2 It promotes incoming and outgoing student and staff mobility\r\n3|1.3 It promotes engagement in European and international cooperation projects\r\n4|1.4 The institution has a clear plan to implement the strategy\r\n5|1.5 The implementation of the strategic plan is monitored\r\n6|1.6 Specific support measures are provided to staff working at all levels of the institution with outgoing and incoming participants. For example:  allocation of additional resources, training on intercultural competences and other relevant aspects of the mobility\r\n7|1.7 Incentives are provided to staff involved in international activities",
            'multiple' => 1,
            'title_display' => 'before',
            'description_above' => 0,
            'private' => 0,
            'wrapper_classes' => 'question',
            'css_classes' => 'question__items',
            'aslist' => 0,
            'empty_option' => '',
            'optrand' => 0,
            'other_option' => NULL,
            'other_text' => 'Other...',
            'description' => '',
            'custom_keys' => FALSE,
            'options_source' => '',
            'analysis' => TRUE,
          ),
          'required' => '0',
          'weight' => '37',
          'page_num' => 2,
          '#meta' => array(

            'cid' => '1',
            'answers' => array(
              1 => array(
                'value' => 1,
                'type' => 'select',
                'text' => array(
                  'value' => '<p>Internationalisation is an important driver for institutional change, and has a great influence on the major activities of a higher education institution (HEI) i.e. education and research. The importance of internationalisation is recognised, and most institutions have a strategy for internationalisation. However, for a strategy to be efficient, and for it to drive the HEI&#39;s activities regarding internationalisation, there is a need for its acceptance from across the whole institution. In addition the strategy could also be accessible to external collaborative partners. It is highly important to have the institution&#39;s internationalisation and modernisation strategy published and easily accessible to all.</p>',
                  'format' => 'eche_custom_text_format',
                ),
                'priority' => 'high',
              ),
              2 => array(
                'value' => 2,
                'type' => 'select',
                'text' => array(
                  'value' => '<p>Mobility is important to the development of the institution as a whole as well as for the individual participants. Therefore the HEI should make mobility and international cooperation a central element in its institutional policies, and explicitly and consistently promote and support student and staff mobility. Non-discrimination policies and further emphasis on the promotion of mobility for under-represented groups should also form an integral part of the institutional support structures.</p>',
                  'format' => 'eche_custom_text_format',
                ),
                'priority' => 'regular',
              ),
              3 => array(
                'value' => 3,
                'type' => 'select',
                'text' => array(
                  'value' => '<p>The institution&#39;s internationalisation strategy and policy should explicitly and consistently promote the development of cooperation with partners in other EU and non-EU countries. The activities and co-operation projects agreed by the HEI should be based on identified needs. In addition they should identify geographical and subject priorities of the internationalisation strategy.</p>',
                  'format' => 'eche_custom_text_format',
                ),
                'priority' => 'regular',
              ),
              4 => array(
                'value' => 4,
                'type' => 'select',
                'text' => array(
                  'value' => '<p>The strategy and policy should include explicit allocation of responsibilities for its efficient implementation to individuals at all levels of the institution, from senior management to the heads of departments, schools and faculties, to academic and administrative staff. This will ensure acceptance and accountability for the strategy. The internationalisation strategy and policy should outline a specific implementation plan that sets out explicitly the financial and human resources available.&nbsp; For example, it is recommended to set up an International Relations Office (IRO) to implement mobility and other international projects.</p><p>As with any other activity, the institutional implementation of the internationalisation strategy is dependent on the people behind the activities. It is highly important for an institution to have staff with the right set of skills and knowledge driving the internationalisation agenda and liaising with international students and staff members. Therefore understanding the development needs of the staff and supporting their professional development should be a high priority for the institution. Such development should focus on both staff engaged in international activities as well as the supporting staff, ensuring the most efficient implementation of international activities and cooperative projects across the institution. For example, trainings/webinars/projects could be organised on intercultural competences and communication, project management, enhancement of internationalisation at home/intercultural, or other activities suggested by the staff and supported by the hierarchy.</p>',
                  'format' => 'eche_custom_text_format',
                ),
                'priority' => 'high',
              ),
              5 => array(
                'value' => 5,
                'type' => 'select',
                'text' => array(
                  'value' => '<p>International activity, including co-operation projects and mobility should be carefully monitored. Clear and unambiguous monitoring of such activity are key to ensuring success. Explicit indicators should be developed to show specific success scenarios. The indicators should be SMART.</p>',
                  'format' => 'eche_custom_text_format',
                ),
                'priority' => 'regular',
              ),
              6 => array(
                'value' => 6,
                'type' => 'select',
                'text' => array(
                  'value' => '<p>The institution should allocate additional resources to support staff working at all levels of the institution with outgoing and incoming participants, such as allowing staff adequate time to carry out work with outgoing and incoming participants and providing administrative back-up (e.g. with financial management). Trainings/webinars/projects could be organised on intercultural competences and communication, management of mobility projects&rsquo;, enhancement of internationalisation at home/intercultural, or other activities suggested by the staff and supported by the hierarchy. As part of the institutional modernisation and internationalisation strategy, concrete support measures should be defined at both institutional and departmental levels.</p>',
                  'format' => 'eche_custom_text_format',
                ),
                'priority' => 'regular',
              ),
              7 => array(
                'value' => 7,
                'type' => 'select',
                'text' => array(
                  'value' => '<p>Participation in such international projects should be seen as an important aspect of the professional development of the staff and of the modernisation of the HEI. It should, therefore, be considered a key component in staff evaluation. As part of the institutional modernisation and internationalisation strategy, concrete support measures should be defined at both institutional and departmental levels to encourage and recognise staff participating in such projects, as well as allow adequate time to carry out this work.</p>',
                  'format' => 'eche_custom_text_format',
                ),
                'priority' => 'regular',
              ),
            ),
            'case_studies' => array(
              273 => (object) array(
                'vid' => '1530',
                'uid' => '1',
                'title' => 'The effective management and ownership of Erasmus +’ for ‘internationalisation’',
                'log' => '',
                'status' => '1',
                'comment' => '1',
                'promote' => '0',
                'sticky' => '0',
                'vuuid' => '3fb3b7aa-45b0-4cab-9c91-0ecb8f09815a',
                'nid' => '273',
                'type' => 'case_study',
                'language' => 'en',
                'created' => '1483972193',
                'changed' => '1484234499',
                'tnid' => '0',
                'translate' => '0',
                'uuid' => '9752ebe7-ad0b-4b67-9574-578fb5432354',
                'revision_timestamp' => '1484234499',
                'revision_uid' => '1',
                'body' => array(
                  'en' => array(
                    array(
                      'value' => '<p>The University of Vienna sees&nbsp;<strong>Erasmus+ as central to its internationalisation strategy</strong>&nbsp;and hence has developed a&nbsp;<strong>structure for the management</strong>&nbsp;of the programme. This involves and mobilises stakeholders from across the institution in its delivery of Erasmus+ internationalisation activity in line with its institutional strategy.&nbsp;<strong>Staff</strong>&nbsp;within the University’s faculties and&nbsp;<strong>departments are given Erasmus+ duties</strong>&nbsp;in addition to their regular teaching, research and management tasks.</p><ul><li>More than&nbsp;<strong>150 Erasmus+ departmental coordinators</strong>&nbsp;serve as contact persons for all academic related questions under Erasmus, for example about the availability of courses at partner universities or the level of an exchange. They are responsible for selecting outgoing students as well.</li><li>The&nbsp;<strong>recognition of courses and the compatibility</strong>&nbsp;<strong>of study programmes are clarified</strong>&nbsp;<strong>when an Inter-Institutional Agreement is signed</strong>. This helps avoid issues for individual mobile students.</li><li>In consultation with departmental coordinators,&nbsp;<strong>study programme directors are responsible for the formal academic recognition</strong>&nbsp;of courses completed during mobility placements.</li><li>Recognition is subject to&nbsp;<strong>regulations defined by the college or school rector</strong>, and is&nbsp;<strong>monitored via annual questionnaires&nbsp;</strong>sent to participating students, in addition to the Erasmus+ participants.</li><li>The&nbsp;<strong>central International Office</strong>&nbsp;is responsible for the&nbsp;<strong>overall administration</strong>&nbsp;of the Erasmus+ programme; the administration of Inter-Institutional Agreements; and the maintenance of a mobility database, on which students are required to register to apply for Erasmus+ mobility placements.</li><li>While the central office has overall responsibility for the administration,&nbsp;<strong>Inter-Institutional Agreements and mobility placements are associated with departments</strong>&nbsp;and study programmes, and underpinned by departmental coordinators to ensure ‘ownership’, effectiveness, sustainability and ongoing relevance of mobility.&nbsp;</li></ul>',
                      'summary' => '',
                      'format' => 'full_html',
                    ),
                  ),
                ),
                'field_case_study_contact' => array(),
                'field_case_study_contact_email' => array(
                  LANGUAGE_NONE => array(
                    array(
                      'email' => 'karin.krall@univie.ac.at',
                    ),
                  ),
                ),
                'field_case_study_contact_name' => array(
                  LANGUAGE_NONE => array(
                    array(
                      'value' => 'Karin Krall',
                      'format' => NULL,
                      'safe_value' => 'Karin Krall',
                    ),
                  ),
                ),
                'field_case_study_country' => array(
                  LANGUAGE_NONE => array(
                    array(
                      'iso2' => 'AT',
                    ),
                  ),
                ),
                'field_case_study_further_reading' => array(
                  LANGUAGE_NONE => array(
                    array(
                      'url' => 'http://www.univie.ac.at',
                      'title' => '',
                      'attributes' => array(),
                    ),
                    array(
                      'url' => 'http://international.univie.ac.at',
                      'title' => '',
                      'attributes' => array(),
                    ),
                  ),
                ),
                'field_case_study_introduction' => array(),
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
                      'value' => 'University of Vienna / Universität Wien',
                      'format' => NULL,
                      'safe_value' => 'University of Vienna / Universität Wien',
                    ),
                  ),
                ),
                'field_case_study_about' => array(
                  LANGUAGE_NONE => array(
                    array(
                      'value' => '<table class="centered"><tbody><tr><th>Key figures</th></tr><tr><td><ul><li>93,000 students</li></ul></td></tr><tr><td><ul><li>1,300 outgoing students per year</li></ul></td></tr><tr><td><ul><li>1,000 incoming students per year</li></ul></td></tr><tr><td><ul><li>120 outgoing staff per year</li></ul></td></tr></tbody></table>',
                      'summary' => '',
                      'format' => 'full_html',
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
                  'pathauto' => '1',
                ),
                'cid' => '0',
                'last_comment_timestamp' => '1483972193',
                'last_comment_name' => NULL,
                'last_comment_uid' => '1',
                'comment_count' => '0',
                'name' => 'fpfis-admin',
                'picture' => '0',
                'data' => 'a:1:{s:7:"contact";i:1;}',
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
              ),
            ),
            'category' => 'general',
            'rectors_question' => 'first',
          ),
        ),
        2 => array(

          'cid' => '2',
          'pid' => '0',
          'form_key' => 'your_institution_has_established_a_framework_of_inter_institutional_agreements_for_international_erasmus_mobility',
          'name' => '2| Inter-Institutional Agreements for Erasmus+ mobility:',
          'type' => 'select',
          'value' => '',
          'extra' => array(
            'items' => "1|Are based on areas of mutual interest\r\n2|Are based on the compatibility of study programmes\r\n3|Are based on shared quality requirements, student and staff  selection for mobility and clear timelines at all stages of the mobility\r\n4|Are regularly monitored and if necessary adapted.\r\n",
            'multiple' => 1,
            'title_display' => 'before',
            'description_above' => 0,
            'private' => 0,
            'wrapper_classes' => 'question',
            'css_classes' => 'question__items',
            'aslist' => 0,
            'empty_option' => '',
            'optrand' => 0,
            'other_option' => NULL,
            'other_text' => 'Other...',
            'description' => '',
            'custom_keys' => FALSE,
            'options_source' => '',
            'analysis' => TRUE,
          ),
          'required' => '0',
          'weight' => '38',
          'page_num' => 2,
          '#meta' => array(

            'cid' => '2',
            'answers' => array(
              1 => array(
                'value' => 1,
                'type' => 'select',
                'text' => array(
                  'value' => '<p>It is vital that Inter-Institutional Agreements are based on areas of mutual interest. These agreements should identify shared quality requirements specific to the planned exchanges, including concrete proposals as to how these activities will contribute to the development of learning and teaching in participating institutions. The involvement of academic staff is key to ensuring that the selection of partners is based on sufficient knowledge of the area. Each HEI should decide who is responsible for initiating, signing and implementing these agreements and the list of responsible persons should be available on the website for contact and consultation purposes.</p>',
                  'format' => 'eche_custom_text_format',
                ),
                'priority' => 'high',
              ),
              2 => array(
                'value' => 2,
                'type' => 'select',
                'text' => array(
                  'value' => '<p>Inter-Institutional Agreements should be based on a comprehensive understanding of the partner HEIs, the compatibility of study programmes, quality levels and standards considered adequate for student and staff mobility activities. For example, selected partners should have learning, teaching and assessment procedures that can be accepted by the sending institution without requiring mobile students to do any additional work or take examinations upon returning from the receiving institution. The compatibility of the programmes should be reflected in the learning outcomes to be achieved.</p>',
                  'format' => 'eche_custom_text_format',
                ),
                'priority' => 'high',
              ),
              3 => array(
                'value' => 3,
                'type' => 'select',
                'text' => array(
                  'value' => '<p>A key role of Inter-Institutional Agreements is to set out agreed, shared quality criteria and clear timelines for all stages of the mobility.<br />Shared quality criteria may include, but are not limited to: selection criteria for the nomination of students and staff, recommended language skills, grading systems, measures for preparing, receiving and integrating Erasmus+ participants. These might be expanded with geographic and subject-specific criteria.<br />In terms of the timelines set out for the mobility activities, particular attention should be paid to:</p><ul><li>The nomination of mobile students by the sending HEI,</li><li>The acceptance of nominees, and</li><li>The issuing of the Transcript of Records after the study period abroad by the receiving HEI. This is normally issued within five weeks after the end date of the mobility period.</li></ul>',
                  'format' => 'eche_custom_text_format',
                ),
                'priority' => 'regular',
              ),
              4 => array(
                'value' => 4,
                'type' => 'select',
                'text' => array(
                  'value' => '<p>Establishing Inter-Institutional Agreements is only the first step in promoting mobility. Once signed, Agreements should be actively honoured and adjusted over time as needed. To ensure that an institution&rsquo;s Inter-Institutional Agreements continue addressing well-defined needs and opportunities, such agreements should be monitored regularly both in quantitative (e.g. number of mobilities) and qualitative (e.g. shared quality criteria) terms. This can be done in a number of ways for example by a designated responsible individual, office or an established process. Seeking input from across the organisation helps create acceptance at all levels of the institution and reinforces commitment towards mobility.</p>',
                  'format' => 'eche_custom_text_format',
                ),
                'priority' => 'regular',
              ),
            ),
            'case_studies' => array(
              274 => (object) array(
                'vid' => '1531',
                'uid' => '1',
                'title' => 'Establishing a framework of Inter-Institutional Agreements for international Erasmus+ mobility',
                'log' => '',
                'status' => '1',
                'comment' => '1',
                'promote' => '0',
                'sticky' => '0',
                'vuuid' => '1cb232be-3eaa-4619-8ce7-d24a30e7a3d1',
                'nid' => '274',
                'type' => 'case_study',
                'language' => 'en',
                'created' => '1483972545',
                'changed' => '1484234296',
                'tnid' => '0',
                'translate' => '0',
                'uuid' => 'd36323b1-626e-4bef-a7ef-ee45185065ea',
                'revision_timestamp' => '1484234296',
                'revision_uid' => '1',
                'body' => array(
                  'en' => array(
                    array(
                      'value' => '<p>Polytechnic Instituto of Castelo Branco (IPCB) ensures that Inter-Institutional Agreements (IIAs) deliver the strategic goal of&nbsp;<strong>integrating the institute into the European scientific and technological community</strong>. IPCB has more than 170 Erasmus partners with most Erasmus+ programme countries. The partnership IIAs cover all areas taught in the IPCB’s six schools, supporting diversity and full recognition of study periods.</p><ul><li><strong>IIAs are initiated by the IPCB’s International Relations Office</strong>&nbsp;(IRO), which ensures that IIAs implement the Polytechnic internationalisation strategy</li><li>When transitioning to the Erasmus+ programme, IPCB took the opportunity to&nbsp;<strong>maintain, renew and extend partnerships</strong>&nbsp;that had over the years shown quality and success while at the same time&nbsp;<strong>diversifying academic areas and countries</strong></li><li>Taking advantage of the possibility offered by the new Erasmus+ programme to work with scanned copies (including documents such as the learning agreements), IPCB&nbsp;<strong>switched to a digital format for all paperwork</strong></li><li>Now, all basic, essential information for the preparation of a mobility is gathered in a single document (contacts, deadline for applications, accommodation, insurance) which avoids having this information scattered across multiple documents. The IPCB makes online copies of&nbsp;<strong>all IIAs available on the institute’s website,</strong>&nbsp;so that a candidate, when choosing a particular partner, can access almost all the essential information for the application via a single click.</li></ul>',
                      'summary' => '',
                      'format' => 'full_html',
                    ),
                  ),
                ),
                'field_case_study_contact' => array(),
                'field_case_study_contact_email' => array(
                  LANGUAGE_NONE => array(
                    array(
                      'email' => 'gri@ipcb.pt',
                    ),
                  ),
                ),
                'field_case_study_contact_name' => array(
                  LANGUAGE_NONE => array(
                    array(
                      'value' => 'Erasmus Institutional Coordinator',
                      'format' => NULL,
                      'safe_value' => 'Erasmus Institutional Coordinator',
                    ),
                  ),
                ),
                'field_case_study_country' => array(
                  LANGUAGE_NONE => array(
                    array(
                      'iso2' => 'PT',
                    ),
                  ),
                ),
                'field_case_study_further_reading' => array(
                  LANGUAGE_NONE => array(
                    array(
                      'url' => 'http://www.ipcb.pt/index.php/mobilidade-internacional',
                      'title' => '',
                      'attributes' => array(),
                    ),
                    array(
                      'url' => 'http://www.ipcb.pt/index.php/instituicoes-parceiras',
                      'title' => '',
                      'attributes' => array(),
                    ),
                  ),
                ),
                'field_case_study_introduction' => array(),
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
                      'value' => 'Polytechnic Institute of Castelo Branco (Instituto Politécnico de Castelo Branco)',
                      'format' => NULL,
                      'safe_value' => 'Polytechnic Institute of Castelo Branco (Instituto Politécnico de Castelo Branco)',
                    ),
                  ),
                ),
                'field_case_study_about' => array(
                  LANGUAGE_NONE => array(
                    array(
                      'value' => '<table class="centered"><tbody><tr><th>Key figures</th></tr><tr><td><ul><li>5,000 students</li></ul></td></tr><tr><td><ul><li>500 academic staff</li></ul></td></tr></tbody></table>',
                      'summary' => '',
                      'format' => 'full_html',
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
                  'pathauto' => '1',
                ),
                'cid' => '0',
                'last_comment_timestamp' => '1483972545',
                'last_comment_name' => NULL,
                'last_comment_uid' => '1',
                'comment_count' => '0',
                'name' => 'fpfis-admin',
                'picture' => '0',
                'data' => 'a:1:{s:7:"contact";i:1;}',
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
              ),
            ),
            'category' => 'general',
            'rectors_question' => 'first',
          ),
        ),
        3 => array(

          'cid' => '3',
          'pid' => '0',
          'form_key' => 'your_institution_expresses_its_commitment_to_equal_access_and_opportunities_to_mobile_participants_through',
          'name' => '3| Your institution expresses its commitment to equal access and opportunities to mobile participants, through:',
          'type' => 'select',
          'value' => '',
          'extra' => array(
            'items' => "1|Specific provisions e.g. in the general policies, rules and regulations of the institution\r\n2|The implementation of the principle that extra fees are not being charged to incoming mobile students\r\n3|Treating all students and staff (incoming and outgoing) equally in all academic and service matters\r\n4|Providing access to the same services and facilities available to local students and staff also to incoming mobile participants\r\n",
            'multiple' => 1,
            'title_display' => 'before',
            'description_above' => 0,
            'private' => 0,
            'wrapper_classes' => 'question',
            'css_classes' => 'question__items',
            'aslist' => 0,
            'empty_option' => '',
            'optrand' => 0,
            'other_option' => NULL,
            'other_text' => 'Other...',
            'description' => '',
            'custom_keys' => FALSE,
            'options_source' => '',
            'analysis' => TRUE,
          ),
          'required' => '0',
          'weight' => '39',
          'page_num' => 2,
          '#meta' => array(

            'cid' => '3',
            'answers' => array(
              1 => array(
                'value' => 1,
                'type' => 'select',
                'text' => array(
                  'value' => '<p>In signing the Erasmus Charter for Higher Education, the institution agrees to respect <strong>in full</strong> the principles of non-discrimination as set out in the Programme. The institution must clearly demonstrate through its policies, rules and regulations that equal access and opportunities to mobile participants from all backgrounds. Which means that all individuals or groups will be treated equally, irrespective of their characteristics. In accordance with Article 21 of the Charter of Fundamental Rights of the European Union, there should be no discrimination &quot;based on sex, race, colour, ethnic or social origin, genetic features, language, religion or belief, political or any other opinion, membership of a national minority, property, birth, disability, age or sexual orientation&quot;. For more information, see: <a href="http://www.europarl.europa.eu/charter/pdf/text_en.pdf">http://www.europarl.europa.eu/charter/pdf/text_en.pdf</a></p>',
                  'format' => 'eche_custom_text_format',
                ),
                'priority' => 'high',
              ),
              2 => array(
                'value' => 2,
                'type' => 'select',
                'text' => array(
                  'value' => '<p>The receiving institution must <strong>not </strong>charge any type of fees to incoming mobility students for the tuition, registration or examination of these students or for their access to laboratory, library and other facilities offered to local students.<br />In certain cases, however, mobile students may be required to pay small fees for insurance, student unions, use of miscellaneous materials (e.g. photocopies, laboratory products) on the same basis as these are charged to local students. Students should be made aware of these extra costs before the start of mobility. Fees may only be charged in the case of full degree mobility or for students registered in joint degree programmes.&nbsp;</p>',
                  'format' => 'eche_custom_text_format',
                ),
                'priority' => 'regular',
              ),
              3 => array(
                'value' => 3,
                'type' => 'select',
                'text' => array(
                  'value' => '<p>In accordance with equal access and opportunities, all students and staff should be treated equally in all academic and service matters. Clear appeal procedures should be in place to ensure equal treatment. There should be individuals - such as mentors and counsellors - available to offer support.</p>',
                  'format' => 'eche_custom_text_format',
                ),
                'priority' => 'regular',
              ),
              4 => array(
                'value' => 4,
                'type' => 'select',
                'text' => array(
                  'value' => '<p>It is vital to ensure that incoming mobility participants have full access to the same services and facilities as local students and staff. For example, mobility participants with special needs can benefit from the support services that the receiving institution offers to its local students and staff.</p>',
                  'format' => 'eche_custom_text_format',
                ),
                'priority' => 'regular',
              ),
            ),
            'case_studies' => array(
              275 => (object) array(
                'vid' => '1532',
                'uid' => '1',
                'title' => 'Ensuring equal access and opportunities to mobile participants',
                'log' => '',
                'status' => '1',
                'comment' => '1',
                'promote' => '0',
                'sticky' => '0',
                'vuuid' => 'fc80de59-4170-4ade-943a-a48dac9a82d5',
                'nid' => '275',
                'type' => 'case_study',
                'language' => 'en',
                'created' => '1483972666',
                'changed' => '1484234268',
                'tnid' => '0',
                'translate' => '0',
                'uuid' => '42918298-6d40-4f7f-8850-9affc3b3f510',
                'revision_timestamp' => '1484234268',
                'revision_uid' => '1',
                'body' => array(
                  'en' => array(
                    array(
                      'value' => '<p>This example focuses on how the Alma Mater Studiorum, University of Bologna, ensures&nbsp;<strong>equal opportunity and access</strong>&nbsp;to mobility placements for its students and staff through:</p><ul><li>An&nbsp;<strong>online tool&nbsp;</strong>to manage the application procedure and the the entire study period</li><li>A&nbsp;<strong>dedicated ‘Service for Students with Special Needs’</strong>, which participates in EU projects to exchange good practice</li><li>Implementing&nbsp;<strong>dedicated resources and services</strong>&nbsp;to remove obstacles for participation in international mobility among schools that have traditionally experienced barriers.</li></ul><p>The University’s&nbsp;<strong>online tool</strong>&nbsp;simplifies and reduces the time for setting up and approving the Learning Agreement, and the recognition of credits upon return.</p><ul><li>It allows the&nbsp;<strong>needs of different target groups to be met</strong>&nbsp;from students with special needs to part time or distance-learning students, and to have a successful mobility experience.</li><li>The tool ensures&nbsp;&nbsp;<strong>transparent, consistent procedures</strong>&nbsp;for all the mobile students, and thus prevents unequal treatment.</li><li>Finally,&nbsp;<strong>every student can check the state of the procedures</strong>&nbsp;and the steps to be taken.</li></ul><p>The participation of disadvantaged students is supported through a&nbsp;<strong>number of measures</strong>:</p><ul><li>The University receives&nbsp;<strong>specific funding</strong>&nbsp;for disadvantaged mobile students through Erasmus+ KA103 from the Italian national agency.</li><li>The University publishes a special call in collaboration with the regional authority to&nbsp;<strong>top up grants for disadvanted students</strong>, awarding 38 grants in 2015.</li><li>A dedicated ‘Service for Students with Special Needs’ (Servizio Disabili di Ateneo) &nbsp;participates in EU-funded projects to&nbsp;<strong>exchange good practice for inclusion</strong>&nbsp;and improve its services for international students.</li></ul><p>The University has worked to convince “mobility- disinclined” students of the efficacy of international mobility. Since 2012, there has been a&nbsp;<strong>constant increase</strong>&nbsp;in the number of mobility placements among students from Science, Medicine and Agriculture, subjects that previously demonstrated barriers to mobility.</p><ul><li>The University has implemented&nbsp;<strong>dedicated services</strong>&nbsp;- a team of International Relations officers (IROs), exchange coordinators and International Relations Delegates&nbsp;<strong>in each school</strong>, who collaborate to develop inernationalisation policies, promote mobility opportunities and support mobile students in all the academic requirements (Learning Agreements and recognition of credits).</li><li>This team helps to remove obstacles&nbsp; especially relating to to Learning Agreements-related issues. For example, the IRO of the School of Medicine in collaboration with universities in the ECTS Medicine Association has established best practice to ensure the acceptance&nbsp; of Learning Agreements and subsequent recocognition of the achieved outcomes.</li></ul>',
                      'summary' => '',
                      'format' => 'full_html',
                    ),
                  ),
                ),
                'field_case_study_contact' => array(),
                'field_case_study_contact_email' => array(
                  LANGUAGE_NONE => array(
                    array(
                      'email' => 'giovanna.filippini@unibo.it   ',
                    ),
                  ),
                ),
                'field_case_study_contact_name' => array(
                  LANGUAGE_NONE => array(
                    array(
                      'value' => 'Giovanna Filippini ',
                      'format' => NULL,
                      'safe_value' => 'Giovanna Filippini ',
                    ),
                  ),
                ),
                'field_case_study_country' => array(
                  LANGUAGE_NONE => array(
                    array(
                      'iso2' => 'IT',
                    ),
                  ),
                ),
                'field_case_study_further_reading' => array(
                  LANGUAGE_NONE => array(
                    array(
                      'url' => 'www.unibo.it',
                      'title' => "Institution's webpage",
                      'attributes' => array(),
                    ),
                    array(
                      'url' => 'http://www.unibo.it/en/international/agreements-and-networks/erasmus-charter-for-higher-education',
                      'title' => 'ECHE webpage',
                      'attributes' => array(),
                    ),
                  ),
                ),
                'field_case_study_introduction' => array(),
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
                      'value' => 'Alma Mater Studiorum, University of Bologna / Università di Bologna',
                      'format' => NULL,
                      'safe_value' => 'Alma Mater Studiorum, University of Bologna / Università di Bologna',
                    ),
                  ),
                ),
                'field_case_study_about' => array(
                  LANGUAGE_NONE => array(
                    array(
                      'value' => '<table class="centered"><tbody><tr><th>Key figures</th></tr><tr><td><ul><li>84,000 students</li></ul></td></tr></tbody></table>',
                      'summary' => '',
                      'format' => 'full_html',
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
                  'pathauto' => '1',
                ),
                'cid' => '0',
                'last_comment_timestamp' => '1483972666',
                'last_comment_name' => NULL,
                'last_comment_uid' => '1',
                'comment_count' => '0',
                'name' => 'fpfis-admin',
                'picture' => '0',
                'data' => 'a:1:{s:7:"contact";i:1;}',
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
              ),
            ),
            'category' => 'general',
            'rectors_question' => 'second',
          ),
        ),
        17 => array(

          'cid' => '17',
          'pid' => '0',
          'form_key' => 'page_2',
          'name' => 'Page 2',
          'type' => 'pagebreak',
          'value' => '',
          'extra' => array(
            'private' => 0,
            'next_page_label' => '',
            'prev_page_label' => '',
          ),
          'required' => '0',
          'weight' => '40',
          'page_num' => 3,
          '#meta' => array(),
        ),
        4 => array(

          'cid' => '4',
          'pid' => '0',
          'form_key' => 'your_institution_has_a_course_catalogue_that_is',
          'name' => '4| Your institution has a Course Catalogue, that is:',
          'type' => 'select',
          'value' => '',
          'extra' => array(
            'items' => "1|Up-to-date, ECTS based and available on the institution's website\r\n2|Covering all educational components (course units, laboratory work, modules) offered by the institution\r\n3|Updated regularly and sufficiently in advance for prospective mobile students to make their choices\r\n4|Available in a widely spoken international language\r\n",
            'multiple' => 1,
            'title_display' => 'before',
            'description_above' => 0,
            'private' => 0,
            'wrapper_classes' => 'question',
            'css_classes' => 'question__items',
            'aslist' => 0,
            'empty_option' => '',
            'optrand' => 0,
            'other_option' => NULL,
            'other_text' => 'Other...',
            'description' => '',
            'custom_keys' => FALSE,
            'options_source' => '',
            'analysis' => TRUE,
          ),
          'required' => '0',
          'weight' => '41',
          'page_num' => 3,
          '#meta' => array(

            'cid' => '4',
            'answers' => array(
              1 => array(
                'value' => 1,
                'type' => 'select',
                'text' => array(
                  'value' => '<p>It is important for each HEI to produce an online Course Catalogue, which includes detailed, user-friendly and up-to-date information on the institution&rsquo;s educational offer and learning environment to enable students to make the right choices and use their time most efficiently, before and during their study period. The Course Catalogue should follow the guidelines set out in the ECTS Users&#39; Guide (http://ec.europa.eu/education/ects/users-guide/index.htm) to increase comparability and transparency. It should be published on the institution&#39;s website sufficiently in advance i.e. to enable prospective mobile students to make their choices.</p><p>It should include general information on the institution, its resources and services, as well as academic information on its programmes and individual educational components. The ECTS Users&#39; Guide recommends using the following common structure:</p><ul><li>General information</li><li>Resources and services</li><li>Information on study programmes</li><li>Information on single course units</li></ul><p>The Course Catalogue should also include the names of people to contact, with information about how, when and where to contact them.&nbsp;</p>',
                  'format' => 'eche_custom_text_format',
                ),
                'priority' => 'high',
              ),
              2 => array(
                'value' => 2,
                'type' => 'select',
                'text' => array(
                  'value' => '<p>The Course Catalogue should be comprehensive, listing all educational components (course units, modules, laboratory work) offered by the institution, in order to enable students to make the right choices and use their time most efficiently, before and during their study period. Having all the educational components offered by the institution - not only those available to mobile students - fosters the use of ECTS at its best. It also enables transparency. It is good practice to keep reference to any changes made during the degree course of any registered student, for example via an archive section containing earlier editions of the Course Catalogue.</p><p>For further information see the guidelines set out in the ECTS Users&#39; Guide (<a href="http://ec.europa.eu/education/ects/users-guide/index.htm">http://ec.europa.eu/education/ects/users-guide/index.htm</a>)</p>',
                  'format' => 'eche_custom_text_format',
                ),
                'priority' => 'regular',
              ),
              3 => array(
                'value' => 3,
                'type' => 'select',
                'text' => array(
                  'value' => '<p>The Course Catalogue should be updated regularly and sufficiently in advance for prospective mobile students to make their choices. Ideally, the edition of the Course Catalogue for the upcoming academic year should be available by the early spring of the preceding academic year.</p>',
                  'format' => 'eche_custom_text_format',
                ),
                'priority' => 'high',
              ),
              4 => array(
                'value' => 4,
                'type' => 'select',
                'text' => array(
                  'value' => '<p>The Course Catalogue must be in the national language (or regional language, if relevant) and in a widely spoken international language, so that all interested parties can easily access it.</p>',
                  'format' => 'eche_custom_text_format',
                ),
                'priority' => 'regular',
              ),
            ),
            'case_studies' => array(
              21 => (object) array(
                'vid' => '1369',
                'uid' => '2',
                'title' => 'Higher education',
                'log' => 'Edited by Dominique - Chris - Fred & Jamie Smith Yeo.',
                'status' => '1',
                'comment' => '1',
                'promote' => '0',
                'sticky' => '0',
                'vuuid' => '37d463dd-5ca0-40a7-91fa-3c395115cea9',
                'nid' => '21',
                'type' => 'opportunities_for_individuals',
                'language' => 'en',
                'created' => '1453198669',
                'changed' => '1461933818',
                'tnid' => '0',
                'translate' => '0',
                'uuid' => 'd9bb8b29-f124-4f18-8114-4679434d3750',
                'revision_timestamp' => '1461933818',
                'revision_uid' => '2',
                'body' => array(
                  'bg' => array(
                    array(
                      'value' => '<h2>Общ преглед</h2><p>С „Еразъм+“ се подкрепят периоди на обучение на служители, работещи във висши учебни заведения.</p><p>Благодарение на „Еразъм+“ можете да се обучавате във висше училище в <a href="[node:3:url]">държава по програмата или държава партньор</a> на „Еразъм+“, както и в организация извън сектора в държава по програмата.</p><p>Такива организации са например предприятия, обществени органи, социални партньори, изследователски институти и неправителствени организации.</p><h2>Продължителност</h2><p>Периодът на обучение между две <a href="[node:3:url]">държави по програмата</a> трябва да бъде най-малко <strong>2 дни</strong> и не повече от <strong>2 месеца</strong>. Това не включва времето за пътуване.</p><p>Периодът на обучение между държава по програмата и държава партньор трябва да бъде най-малко <strong>5 дни</strong> и не повече от <strong>2 месеца</strong>. Това не включва времето за пътуване.</p><h2>Условия</h2><p>За да участва в обучения в чужбина по „Еразъм+“, вашето висше учебно заведение, ако е установено в държава по програмата, трябва да притежава <a href="[node:69:url]">харта за висше образование „Еразъм+“</a>, а ако се намира в <a href="[node:3:url]">държава партньор</a>, трябва да е подписало <a href="[node:71:url]">междуинституционално споразумение</a> с приемащото заведение.</p><p>Вашето висше учебно заведение и организацията, в която ще се обучавате, трябва да принадлежат към <a href="[node:67:url]">националния консорциум за мобилност</a> на „Еразъм+“.</p><p>Преди започване на обучението вие, вашето висше учебно заведение и приемащото заведение подписвате <a href="[node:70:url]">споразумение за мобилност</a>. В него се описват целите на вашето обучение, правата и отговорностите, а също и как обучението ще се признае официално.</p><h2>Финансова подкрепа</h2><p>Чрез безвъзмездни средства на ЕС се покриват част от <b>пътните и дневните разходи</b> в чужбина и те варират в зависимост от:</p><ol><li>Приемащата страна</li><li>В случай на мобилност между държави по програмата - от търсенето от страна на служители от вашата страна, желаещи да провеждат обучение в чужбина</li><li>Разстоянието между вашата страна и приемащата страна</li><li>За периоди на обучение между държави по програмата - от наличието на други финансови източници във вашата страна или регион</li></ol><p>Ако вашето обучение в чужбина е между държави по програмата, вашата изпращаща институция е отговорна за всички плащания. Ако обучението е между държава по програмата и държава партньор, изпращащата и приемащата институция решават коя от тях ще извършва плащанията.</p><p>Размерът на безвъзмездните средства за мобилност между държави по програмата и държави партньори е публикуван в <a href="[node:62:url]">Ръководството за програмата</a>. Проверете на уебсайта на вашата <a href="[node:80:url]">Национална агенция</a> и във висшето учебно заведение, което ви изпраща, за приложимите суми за периоди на обучение в държави по програмата. Повече информация за размера на безвъзмездните средства ще намерите в <a href="[node:62:url]">Ръководството за програмата</a><a>.</a></p><h2>Как да кандидатствате</h2><p><span style="line-height: 28.57px; font-weight: 700;">Кандидатстването за безвъзмездни средства е чрез вашето висше учебно заведение.</span> <abbr style="line-height: 28.57px;" title="&#x412;&#x438;&#x441;&#x448;&#x438;&#x442;&#x435; &#x443;&#x447;&#x435;&#x431;&#x43D;&#x438; &#x437;&#x430;&#x432;&#x435;&#x434;&#x435;&#x43D;&#x438;&#x44F;">ВУЗ</abbr> подбират кандидати за периоди на обучение в чужбина сред своите служители.</p><p>Изборът на служители трябва да е справедлив, прозрачен и добре документиран.</p><h2>Научете повече</h2><p>Свържете се с <b>международното бюро или с бюрото на „Еразъм+“ във вашето висше учебно заведение</b>, за да научите дали има налични възможности.</p><p><span style="line-height: 1.4285;">В </span><a href="[node:80:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">Националните агенции</a><span style="line-height: 1.4285;"> за държавите по програмата и в </span><a href="[node:81:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">Националните бюра</a><span style="line-height: 1.4285;"> за държавите партньори (където са налице) могат да ви помогнат при въпроси и кандидатстване, а освен това можете да </span><a href="[node:82:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">се свържете с Европейската комисия чрез EuropeDirect</a><span style="line-height: 1.4285;">.</span></p>',
                      'summary' => NULL,
                      'format' => 'full_html',
                    ),
                  ),
                  'cs' => array(
                    array(
                      'value' => '<h2>Přehled</h2><p>Program Erasmus+ podporuje programy školení pro pracovníky vysokoškolských institucí.</p><p>Díky Erasmu+ se můžete zúčastnit školení ve vysokoškolské instituci v <a href="[node:3:url]">programové nebo partnerské zemi</a> nebo v jiné organizaci v programové zemi.</p><p>Mezi tyto organizace mohou patřit podniky, subjekty veřejného sektoru, sociální partneři, výzkumné ústavy nebo nevládní organizace.</p><h2>Doba trvání</h2><p>Mobilita mezi dvěma <a href="[node:3:url]">programovými zeměmi</a> pro účely školení musí trvat minimálně <b>2 dny</b>, maximálně <b>2 měsíce</b>. Do daného období se nezapočítává doba přepravy.</p><p>Mobilita mezi programovou a partnerskou zemí pro účely školení musí trvat minimálně <b>5 dní</b>, maximálně <b>2 měsíce</b>. Do daného období se nezapočítává doba přepravy.</p><h2>Podmínky</h2><p>Pokud máte zájem o školení v rámci programu Erasmus+, musí vaše vysokoškolská instituce být v případě zemí programu držitelem <a href="[node:69:url]">Listiny programu Erasmus+ pro vysokoškolské vzdělávání</a> a v případě <a href="[node:3:url]">partnerských zemí</a> musí mít podepsánu <a href="[node:71:url]">interinstitucionální dohodu</a> s přijímající institucí.</p><p>Vaše vysokoškolská instituce a organizace, kde se budete školit, musí být součástí <a href="[node:67:url]">národního konsorcia v oblasti mobility</a> Erasmus+.</p><p>Před začátkem školení musíte vy, vaše vysokoškolská instituce a ta, která vás přijímá, podepsat <a href="[node:70:url]">dohodu o mobilitě</a>. Tento dokument stanoví vaše studijní cíle, práva a povinnosti a také způsob, jak bude školení formálně uznáno.</p><h2>Finanční podpora</h2><p>Během vašeho působení v zahraničí vám EU bude přispívat na cestovní a pobytové náklady, přičemž výše příspěvku bude záležet na těchto skutečnostech:</p><ol><li>přijímající zemi</li><li>v případě mobility v rámci zemí programu na úrovni poptávky pracovníků z vaší země, kteří se chtějí školit v zahraničí</li><li>na vzdálenosti mezi vaší a přijímající zemí</li><li>v případě školení v rámci zemí programu na dostupnosti jiných finančních zdrojů ve vaší zemi nebo regionu</li></ol><p>Pokud období školení v zahraničí probíhá mezi zeměmi programu, bude za všechny platby odpovídat vysílající instituce. Pokud probíhá mezi programovou a partnerskou zemí, rozhodují o tom, kdo bude provádět platby, společně vysílající a přijímající instituce.</p><p>Výše grantů vztahující se na mobilitu mezi programovými a partnerskými zeměmi jsou uvedeny v <a href="[node:62:url]">Příručce k programu Erasmus+</a>. Informace o výši příslušných částek týkajících se období školení v rámci mobility mezi programovými zeměmi najdete na stránkách vaší <a href="[node:80:url]">národní agentury</a>. Podrobnější informace o výši grantů obsahuje <a href="[node:62:url]"/><a href="[node:62:url]">Příručka k programu Erasmus+</a><a>.</a></p><h2>Jak o grant zažádat</h2><p><span style="line-height: 28.57px; font-weight: 700;">Zažádat o grant je potřeba prostřednictvím vaší vysokoškolské instituce.</span> <abbr style="line-height: 28.57px;" title="vysoko&#x161;kolsk&#xE9; instituce">Nejvhodnější uchazeče o účast na školicích pobytech vybírá vaše instituce</abbr> z řad svých zaměstnanců.</p><p>Výběr těchto pracovníků by měl být spravedlivý, transparentní a náležitě dokumentovaný.</p><h2>Další informace</h2><p>Pokud máte zájem zjistit, zda se máte i vy možnost ucházet o účast na tomto programu, obraťte se na <b>mezinárodní oddělení vaší vysokoškolské instituce nebo na její specializované pracoviště pro program Erasmus+</b>.</p><p><span style="line-height: 1.4285;">Dotazy mohou zodpovědět a s podáním přihlášek pomoci</span> <a href="[node:80:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">národní agentury</a> <span style="line-height: 1.4285;">(v případě zemí programu)</span> a <a href="[node:81:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">národní kanceláře</a> <span style="line-height: 1.4285;">(v případě partnerských zemí, pokud je tam kancelář zřízena)</span>.  <a href="[node:82:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">Na Evropskou komisi se také můžete obrátit prostřednictvím centra EuropeDirect</a><span style="line-height: 1.4285;">.</span></p>',
                      'summary' => NULL,
                      'format' => 'full_html',
                    ),
                  ),
                  'da' => array(
                    array(
                      'value' => '<h2>Oversigt</h2><p>Erasmus+ understøtter læringsforløb i udlandet for personale ved højere læreanstalter.</p><p>Med Erasmus+ får du mulighed for et læringsforløb på en højere læreanstalt i <a href="[node:3:url]">et land, der deltager i Erasmus+ eller et partnerland</a> eller i en organisation uden for undervisningssektoren i et land, der deltager i Erasmus+.</p><p>En sådan organisation kunne f.eks. være en erhvervsvirksomhed, en offentlig institution, et forskningsinstitut eller en ngo.</p><h2>Varighed</h2><p>Et læringsforløb, der involverer to <a href="[node:3:url]">programlande</a>, skal have en varighed på mindst <strong>2 dage</strong> og må ikke vare længere end <strong>2 måneder</strong>. Hertil kommer rejsetid.</p><p>Et læringsforløb, der involverer et programland og et partnerland, skal have en varighed på mindst <strong>5 dage</strong> og må ikke vare længere end <strong>2 måneder</strong>. Hertil kommer rejsetid.</p><h2>Betingelser</h2><p>For at du kan deltage i et læringsforløb i udlandet med Erasmus+, skal din egen uddannelsesinstitution enten (hvis der er tale om samarbejde mellem institutioner i to programlande) have underskrevet <a href="[node:69:url]">Erasmuschartret for videregående uddannelse</a>, eller (hvis den samarbejder med en institution i et <a href="[node:3:url]">partnerland</a>) have underskrevet en <a href="[node:71:url]">interinstitutionel aftale</a> med værtsinstitutionen.</p><p>Din hjeminstitution og værtsinstitutionen skal begge være partnere i et <a href="[node:67:url]">nationalt mobilitetskonsortium</a> for Erasmus+.</p><p>Inden du begynder på dit læringsforløb, skal du, din hjeminstitution og værtsinstitutionen underskrive en <a href="[node:70:url]">mobilitetsaftale</a>. I denne aftale angives dine læringsmål, rettigheder og forpligtelser, og der står også, hvordan dit læringsforløb anerkendes formelt.</p><h2>Finansiel støtte</h2><p>EU-tilskuddet er et bidrag til dine <strong>rejse- og leveomkostninger</strong> i løbet af læringsperioden og afhænger af:</p><ol><li>værtslandet</li><li>antallet af ansatte fra dit land, som ønsker et læringsforløb i udlandet (hvis det drejer sig om aftaler mellem programlande)</li><li>afstanden mellem dit land og værtslandet</li><li>adgangen til andre finansieringskilder i dit hjemland eller din region (hvis det drejer sig om aftaler mellem programlande)</li></ol><p>Hvis dit læringsforløb i udlandet foregår som et samarbejde mellem to programlande, er det din egen uddannelsesinstitution, som skal betale alle udgifter. Hvis det involverer både et programland og et partnerland, skal din hjeminstitution og værtsinstitutionen blive enige om, hvem der skal betale for dig.</p><p>Tilskudssatserne for læringsmobilitet mellem programlande og partnerlande er angivet i <a href="[node:62:url]">programguiden</a>. Du kan se tilskudssatserne for læringsmobilitet mellem programlande på dit hjemlands <a href="[node:80:url]">nationale agenturs</a> og din egen uddannelsesinstitutions websites. Læs mere om tilskudssatser i <a href="[node:62:url]">programguiden</a><a>.</a></p><h2>Sådan søger du</h2><p><span style="line-height: 28.57px; font-weight: 700;">Du skal søge om tilskud via din egen uddannelsesinstitution.</span> <abbr style="line-height: 28.57px;" title="">Videregående uddannelsesinstitutioner</abbr> udvælger ansøgere til læringsforløb i udlandet blandt deres ansatte.</p><p>Denne udvælgelse skal være retfærdig, gennemsigtig og veldokumenteret.</p><h2>Få mere at vide</h2><p>Kontakt <strong>det internationale kontor for Erasmus+ i din egen uddannelsesinstitution</strong> for at få at vide, om du har adgang til læringsforløb via Erasmus+.</p><p>For at få hjælp med ansøgninger eller få besvaret spørgsmål skal du kontakte <span style="line-height: 1.4285;">det </span><a href="[node:80:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">nationale agentur</a><span style="line-height: 1.4285;"> i dit hjemland, hvis det drejer sig om læringsforløb i et programland, og henvende dig til det pågældende </span><a href="[node:81:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">nationale kontor</a><span style="line-height: 1.4285;">, hvis det drejer sig om partnerlande (hvor sådanne læringsforløb er tilgængelige), og du kan desuden kontakte </span><a href="[node:82:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">Europa-Kommissionen via EuropeDirect</a><span style="line-height: 1.4285;">.</span></p>',
                      'summary' => NULL,
                      'format' => 'full_html',
                    ),
                  ),
                  'de' => array(
                    array(
                      'value' => '<h2>Überblick</h2><p>Erasmus+ unterstützt Fort- und Weiterbildungsaufenthalte für Hochschulpersonal. </p><p>Sie können mit Erasmus+ eine Fort- oder Weiterbildung in einer Hochschuleinrichtung in einem <a href="[node:3:url]">Erasmus+-Programm- oder Partnerland</a> oder in einer Organisation außerhalb dieses Bereichs in einem Programmland absolvieren. </p><p>Darunter fallen beispielsweise Unternehmen, öffentliche Einrichtungen, Sozialpartner, Forschungsinstitute und Nichtregierungsorganisationen. </p><h2>Dauer </h2><p>Eine Fort- und Weiterbildungsmaßnahme zwischen zwei <a href="[node:3:url]">Programmländern</a> dauert mindestens<b> zwei Tage</b> und höchstens <b>zwei Monate</b>.  An- und Abreise sind dabei nicht einbezogen. </p><p>Eine Fort- und Weiterbildungsmaßnahme zwischen einem Programmland und einem Partnerland dauert mindestens<b> zwei Tage</b> und höchstens <b>zwei Monate</b>. An- und Abreise sind dabei nicht einbezogen.</p><h2>Bedingungen</h2><p>Um über Erasmus+ eine Fort- und Weiterbildungsmaßnahme durchführen zu können, muss Ihre Hochschuleinrichtung im Falle von Programmländern die <a href="[node:69:url]">Erasmus+-Charta für die Hochschulbildung</a> oder im Falle von <a href="[node:3:url]">Partnerländern</a> eine <a href="[node:71:url]">interinstitutionelle Mobilitätsvereinbarung</a> mit der aufnehmenden Einrichtung unterzeichnet haben. </p><p>Ihre Hochschuleinrichtung und die Organisation, an der Sie diese Maßnahme absolvieren, müssen zu einem <a href="[node:67:url]">nationalen Mobilitätskonsortium</a> gehören. </p><p>Bevor Sie mit Ihrer Fort- oder Weiterbildungsmaßnahme beginnen, unterzeichnen Ihre Hochschuleinrichtung und die aufnehmende Einrichtung eine <a href="[node:70:url]">Mobilitätsvereinbarung</a>.   In diesem Dokument werden Ihre Lernziele, Rechte und Pflichten sowie die Modalitäten für die formelle Anerkennung Ihrer Weiterbildungsmaßnahme aufgeführt.  </p><h2>Finanzielle Unterstützung</h2><p>Die EU-Zuschüsse decken einen Teil Ihrer <b>Reise- und Aufenthaltskosten</b> im Ausland. Ihre Höhe ist abhängig von </p><ol><li>dem Zielland, </li><li>im Falle von Mobilität zwischen Programmländern: der Nachfrage nach Hochschulbediensteten aus Ihrem Land, die im Ausland unterrichten wollen, </li><li>der Entfernung zwischen Ihrem Land und dem Zielland, </li><li>bei Ausbildungsaufenthalten im Austausch zwischen Programmländern: der Verfügbarkeit anderer Finanzquellen in Ihrem Land oder in Ihrer Region. </li></ol><p>Findet Ihr Fort- und Weiterbildungsaufenthalt im Austausch zwischen Programmländern statt, ist Ihre entsendende Einrichtung für alle Zahlungen verantwortlich.  Handelt es sich um eine Mobilitätsmaßnahme zwischen Programm- und Partnerländern, entscheiden die entsendende und die aufnehmende Einrichtung, wer Ihre Zahlungen vornimmt. </p><p>Die Höhe der Zuschüsse für die Mobilität zwischen Programm- und Partnerländern ist im <a href="[node:62:url]">Programmleitfaden</a> veröffentlicht.  Auf der Website Ihrer <a href="[node:80:url]">nationalen Agentur</a> und Ihrer entsendenden Hochschuleinrichtung finden Sie die geltenden Raten für Fort- und Weiterbildungsmaßnahmen zwischen Programmländern.  Im <a href="[node:62:url]">Programmleitfaden</a> finden Sie weitere Informationen zur Höhe der Zuschüsse<a>. </a></p><h2>Antragstellung</h2><p><span style="line-height: 28.57px; font-weight: 700;">Sie können sich über Ihre Hochschuleinrichtung für einen Zuschuss bewerben. </span> <abbr style="line-height: 28.57px;" title="Hochschuleinrichtungen">Hochschuleinrichtungen </abbr> wählen unter ihren Beschäftigten Kandidatinnen und Kandidaten für Fort- und Weiterbildungsaufenthalte im Ausland aus. </p><p>Die Auswahl sollte fair, transparent und gut dokumentiert sein. </p><h2>Weitere Informationen</h2><p>Fragen Sie das <b>Auslandsamt oder das Erasmus+-Büro Ihrer Hochschuleinrichtung</b>, ob diese Möglichkeiten auch Ihnen offen stehen. </p><p><span style="line-height: 1.4285;">Die</span> <a href="[node:80:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">nationalen Agenturen</a> <span style="line-height: 1.4285;">für Programmländer und</span> die <a href="[node:81:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">nationalen Büros</a> <span style="line-height: 1.4285;">für Partnerländer (soweit vorhanden) helfen bei Fragen und Bewerbungen</span>. Über <a href="[node:82:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">EuropeDirect </a> können Sie sich auch an die Europäische Kommission wenden<span style="line-height: 1.4285;">.</span></p>',
                      'summary' => NULL,
                      'format' => 'full_html',
                    ),
                  ),
                  'el' => array(
                    array(
                      'value' => '<h2>Παρουσίαση</h2><p>Το Erasmus+ στηρίζει περιόδους κατάρτισης για το προσωπικό ανώτατων εκπαιδευτικών ιδρυμάτων.</p><p>Με το Erasmus+ η κατάρτιση αυτή μπορεί να πραγματοποιηθεί σε ανώτατο εκπαιδευτικό ίδρυμα <a href="[node:3:url]">χώρας του προγράμματος ή χώρας-εταίρου</a> Erasmus+ ή σε οργανισμό εκτός του κλάδου σε χώρα του προγράμματος.</p><p>Στους  οργανισμούς αυτούς συγκαταλέγονται επιχειρήσεις, δημόσιοι φορείς, κοινωνικοί εταίροι, ερευνητικά ιδρύματα και μη κυβερνητικές οργανώσεις.</p><h2>Διάρκεια</h2><p>Μια περίοδος κατάρτισης μεταξύ δύο <a href="[node:3:url]"><strong>χωρών του προγράμματος</strong></a> πρέπει να διαρκεί τουλάχιστον <b>2 ημέρες</b>, ενώ δεν μπορεί να υπερβαίνει τους <b>2 μήνες</b>. Στο διάστημα αυτό δεν περιλαμβάνεται ο χρόνος ταξιδιού.</p><p>Μια περίοδος κατάρτισης μεταξύ μιας χώρας του προγράμματος και μιας χώρας-εταίρου πρέπει να διαρκεί τουλάχιστον <b>5 ημέρες</b>, ενώ δεν μπορεί να υπερβαίνει τους <b>2 μήνες</b>. Στο διάστημα αυτό δεν περιλαμβάνεται ο χρόνος ταξιδιού.</p><h2>Όροι συμμετοχής</h2><p>Για να μπορέσετε να συμμετάσχετε σε κατάρτιση στο εξωτερικό με το Erasmus+, το ανώτατο ίδρυμά σας πρέπει, στην περίπτωση χωρών του προγράμματος, να διαθέτει τον <a href="[node:69:url]">Χάρτη Erasmus+ για την τριτοβάθμια εκπαίδευση</a> ή, στην περίπτωση <a href="[node:3:url]">χωρών-εταίρων</a>, να έχει υπογράψει <a href="[node:71:url]">συμφωνία μεταξύ ιδρυμάτων</a> με το ίδρυμα υποδοχής σας.</p><p>Το ανώτατο εκπαιδευτικό σας ίδρυμα και ο οργανισμός στον οποίο θα μεταβείτε για κατάρτιση πρέπει να είναι μέλη μιας <a href="[node:67:url]">εθνικής κοινοπραξίας κινητικότητας</a> Erasmus+.</p><p>Προτού ξεκινήσετε την κατάρτισή σας, εσείς, το ανώτατο εκπαιδευτικό σας ίδρυμα και το ίδρυμα υποδοχής πρέπει να έχουν υπογράψει <a href="[node:70:url]">συμφωνία κινητικότητας</a>, η οποία καθορίζει τους στόχους της κατάρτισης, τα δικαιώματα και τις υποχρεώσεις σας καθώς και τον τρόπο επίσημης αναγνώρισης της κατάρτισής σας.</p><h2>Χρηματοδοτική στήριξη</h2><p>Οι επιχορηγήσεις της ΕΕ καλύπτουν μέρος των <b>εξόδων ταξιδιού και διαβίωσης</b> στο εξωτερικό  και το μέγεθός  τους ποικίλλει ανάλογα με</p><ol><li>τη χώρα υποδοχής</li><li>στην περίπτωση κινητικότητας εντός των χωρών του προγράμματος, ανάλογα με τον αριθμό των αιτήσεων ατόμων από τη χώρα σας που επιθυμούν να επιμορφωθούν στο εξωτερικό</li><li>την απόσταση μεταξύ της χώρας σας και της χώρας υποδοχής</li><li>στην περίπτωση κατάρτισης μεταξύ χωρών του προγράμματος, ανάλογα με τη διαθεσιμότητα άλλων χρηματοδοτικών πηγών στη χώρα ή την περιοχή σας</li></ol><p>Αν η κατάρτισή σας στο εξωτερικό πραγματοποιείται μεταξύ χωρών του προγράμματος, το ίδρυμα αποστολής σας θα είναι υπεύθυνο για την καταβολή όλων των ποσών. Αν η κατάρτιση γίνεται μεταξύ χωρών του προγράμματος και χωρών-εταίρων, το ίδρυμα αποστολής σας και το ίδρυμα υποδοχής θα αποφασίσουν μεταξύ τους για τον τρόπο πληρωμής σας.</p><p>Τα επίπεδα των επιχορηγήσεων για κινητικότητα μεταξύ χωρών του προγράμματος και χωρών-εταίρων δημοσιεύονται στον <a href="[node:62:url]">οδηγό του προγράμματος</a>. Συμβουλευθείτε τον ιστότοπο του <a href="[node:80:url]">εθνικού φορέα</a> σας και του ανώτατου ιδρύματος αποστολής σας σχετικά με το τι ισχύει για περιόδους κατάρτισης μεταξύ χωρών του προγράμματος. Περισσότερες πληροφορίες μπορείτε να βρείτε στον <a href="[node:62:url]">οδηγό του προγράμματος</a><a>.</a></p><h2>Πως να υποβάλετε αίτηση</h2><p><span style="line-height: 28.57px; font-weight: 700;">Πρέπει να υποβάλετε αίτηση επιχορήγησης μέσω του ανώτατου εκπαιδευτικού σας ιδρύματος.</span> <abbr style="line-height: 28.57px;" title="&#x3A4;&#x3B1; &#x3B1;&#x3BD;&#x3CE;&#x3C4;&#x3B1;&#x3C4;&#x3B1; &#x3B5;&#x3BA;&#x3C0;&#x3B1;&#x3B9;&#x3B4;&#x3B5;&#x3C5;&#x3C4;&#x3B9;&#x3BA;&#x3AC; &#x3B9;&#x3B4;&#x3C1;&#x3CD;&#x3BC;&#x3B1;&#x3C4;&#x3B1; ">ΑΕΙ</abbr> επιλέγουν τους υποψηφίους για κατάρτιση στο εξωτερικό μέσα από το προσωπικό τους.</p><p>Η επιλογή των υποψηφίων πρέπει να είναι δίκαιη, διαφανής και καλά τεκμηριωμένη.</p><h2>Περισσότερες πληροφορίες</h2><p>Επικοινωνήστε με το <b>διεθνές γραφείο Erasmus+ του ανώτατου εκπαιδευτικού σας ιδρύματος</b> για να ενημερωθείτε σχετικά με τις υπάρχουσες δυνατότητες.</p><p><span style="line-height: 1.4285;">Οι </span><a href="[node:80:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">εθνικοί φορείς</a><span style="line-height: 1.4285;">, για τις χώρες του προγράμματος, και τα </span><a href="[node:81:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">εθνικά γραφεία</a><span style="line-height: 1.4285;">, για τις χώρες-εταίρους (όπου υπάρχουν), μπορούν να απαντήσουν στις απορίες σας και να σας βοηθήσουν στην υποβολή αιτήσεων. Μπορείτε επίσης </span><a href="[node:82:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">να επικοινωνήσετε με την Ευρωπαϊκή Επιτροπή μέσω της υπηρεσίας EuropeDirect</a><span style="line-height: 1.4285;">.</span></p>',
                      'summary' => NULL,
                      'format' => 'full_html',
                    ),
                  ),
                  'en' => array(
                    array(
                      'value' => '',
                      'summary' => '',
                      'format' => 'full_html',
                    ),
                  ),
                  'es' => array(
    array(
      'value' => '<h2>Panorama</h2><p>Erasmus+ apoya los periodos de formación del personal que trabaja en centros de enseñanza superior (CES).</p><p>Con el programa Erasmus+, los interesados pueden formarse en un centro de enseñanza superior de <a href="[node:3:url]">un país del programa o un país asociado</a> o en una organización ajena al sector radicada en un país del programa.</p><p>Estas organizaciones pueden ser, por ejemplo, empresas, organismos públicos, interlocutores sociales, institutos de investigación u organizaciones no gubernamentales.</p><h2>Duración</h2><p>Los periodos de formación entre dos <a href="[node:3:url]">países del programa</a> deben tener una duración mínima de <b>dos días</b> y máxima de <b>dos meses</b>, sin contar el tiempo del viaje.</p><p>Los periodos de formación entre un país del programa y un país asociado deben tener una duración mínima de <b>cinco días</b> y máxima de <b>dos meses</b>, sin contar el tiempo del viaje.</p><h2>Condiciones</h2><p>Para poder optar a la formación en el extranjero con Erasmus+, el CES en el que trabaja el interesado debe poseer una <a href="[node:69:url]">Carta Erasmus+ de Educación Superior</a> (en el caso de los países del programa) o haber firmado un <a href="[node:71:url]">acuerdo interinstitucional</a> con el centro de acogida (en el caso de los <a href="[node:3:url]">países asociados</a>).</p><p>El CES y la organización en la que vaya a formarse el interesado deben formar parte de un <a href="[node:67:url]">consorcio nacional de movilidad</a> de Erasmus+.</p><p>Antes de iniciar la formación, el interesado, su CES y la institución de acogida tendrán que firmar un <a href="[node:70:url]">acuerdo de movilidad</a> en el que se establezcan los objetivos de aprendizaje y los derechos y responsabilidades del participante, así como la modalidad de reconocimiento oficial del periodo de formación.</p><h2>Ayudas económicas</h2><p>La UE contribuye a costear los <b>gastos de desplazamiento y estancia</b> en el extranjero. La cuantía de las ayudas varía en función de:</p><ol><li>el país de destino</li><li>en los casos de movilidad en países del programa, el nivel de demanda entre los profesionales del país de origen para enseñar en el extranjero</li><li>la distancia entre los países de origen y de acogida</li><li>en los casos de movilidad entre países del programa, la existencia de otras fuentes de financiación a nivel nacional o regional.</li></ol><p>En los periodos de formación en el extranjero realizados entre países del programa, el centro de origen será responsable de efectuar todos los pagos. Cuando se trate de periodos de formación entre países del programa y países asociados, los centros de origen y acogida podrán determinar a quién corresponde realizar los pagos.</p><p>Los niveles de las ayudas para la movilidad entre países del programa y países asociados se publican en la <a href="[node:62:url]">Guía del programa</a>. Consulte la web de su <a href="[node:80:url]">agencia nacional</a> y su centro de enseñanza superior de origen para conocer la cuantía de las ayudas aplicables a los periodos de formación entre países del programa. Para más información sobre los niveles de las ayudas, consulte la <a href="[node:62:url]">Guía del programa</a><a>.</a></p><h2>Cómo solicitar las ayudas</h2><p><span style="line-height: 28.57px; font-weight: 700;">Los interesados pueden solicitar las ayudas a través de su centro de enseñanza superior.</span> <abbr style="line-height: 28.57px;" title="Centros de ense&#xF1;anza superior">Los CES</abbr> seleccionan a los miembros de su personal que se presentan como candidatos para un periodo de formación en el extranjero.</p><p>La selección de los candidatos debe ser justa y transparente y estar bien documentada.</p><h2>Más información</h2><p>Póngase en contacto con la <b>oficina de relaciones internacionales de Erasmus+ o la de su centro de enseñanza superior</b> para averiguar si puede optar a estas ayudas.</p><p><span style="line-height: 1.4285;">Las</span> <a href="[node:80:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">agencias nacionales</a><span style="line-height: 1.4285;"> de los países del programa (y las </span><a href="[node:81:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">oficinas nacionales</a><span style="line-height: 1.4285;"> de determinados países asociados) pueden atender consultas y ayudar con las solicitudes. Además, puede </span><a href="[node:82:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">contactar con la Comisión Europea a través de Europe Direct</a><span style="line-height: 1.4285;">.</span></p>',
      'summary' => NULL,
      'format' => 'full_html',
    ),
  ),
                  'et' => array(
    array(
      'value' => '<h2>Ülevaade</h2><p>Erasmus+ toetab kõrgkoolide töötajate koolituslähetusi.</p><p>Programmi Erasmus+ raames saate osaleda koolitustel <a href="[node:3:url]">programmi- või partnerriikide</a> kõrgkoolides ja programmiriikide muudes organisatsioonides.</p><p>Sellisteks organisatsioonideks võivad olla näiteks ettevõtted, riigiasutused, tööturu osapooled, teadusasutused ning vabaühendused.</p><h2>Kestus</h2><p>Kahe <a href="[node:3:url]">programmiriigi</a> vaheline koolituslähetus kestab kõige vähem <strong>kaks päeva</strong> ja kõige rohkem <strong>kaks kuud</strong>. See ei sisalda sõiduaega.</p><p>Programmiriigi ja partnerriigi vaheline koolituslähetus kestab kõige vähem <strong>viis päeva</strong> ja kõige rohkem <strong>kaks kuud</strong>. See ei sisalda sõiduaega.</p><h2>Tingimused</h2><p>Selleks et saaksite minna koolitusele välismaale, peab teie tööandjaks olev kõrgkool olema ühinenud <a href="[node:69:url]">Erasmus+ kõrgharidushartaga</a> (kui ta asub programmiriigis) või olema alla kirjutanud <a href="[node:71:url]">asutustevahelise kokkuleppe</a> vastuvõtva asutusega (kui ta asub <a href="[node:3:url]">partnerriigis</a>).</p><p>Teie kõrgkool ning vastuvõttev organisatsioon peavad olema osalised Erasmus+ <a href="[node:67:url]">riiklikus õpirände konsortsiumis</a>.</p><p>Enne koolituslähetuse algust tuleb teie, teid lähetava kõrgkooli ning vastuvõtva asutuse vahel sõlmida <a href="[node:70:url]">õpirände leping</a>. Selle dokumendiga nähakse ette teie õppe-eesmärgid, õigused ja kohustused ning koolituse ametliku tunnustamise viis.</p><h2>Rahaline toetus</h2><p>ELi stipendiumid on mõeldud <strong>reisi- ja elamiskulude</strong> katmiseks välismaal ning nende suurus oleneb järgmistest asjaoludest:</p><ol><li>vastuvõttev riik;</li><li>programmiriikide vahelise õpirände puhul – kui palju inimesi teie koduriigist soovivad minna koolitusele välismaale;</li><li>teie koduriigi kaugus vastuvõtvast riigist;</li><li>programmiriikide vahelise õpirände puhul – milliseid muid rahastamisallikaid on võimalik kasutada teie koduriigis või piirkonnas.</li></ol><p>Kui olete pärit Erasmus+ programmiriigist ning koolitusele välismaale lähete samuti programmiriiki, siis vastutab kõikide maksete eest teid lähetav asutus. Kui programmiriigi töötaja suundub koolitusele partnerriiki või vastupidi, siis lepivad lähetav ja vastuvõttev asutus omavahel kokku, kes lähetatule makseid teeb.</p><p>Programmi- ja partnerriikide vaheliste koolituslähetuste puhul kehtivate toetuste suurused on avaldatud <a href="[node:62:url]">Erasmus+ programmijuhendis</a>. Teavet programmiriikide vaheliste koolituslähetuste puhul kehtivate toetuste suuruse kohta saate oma koduriigi <a href="[node:80:url]">riikliku büroo</a> veebilehelt ning teid lähetavalt kõrgkoolilt. Lisateavet toetuste suuruse kohta leiate <a href="[node:62:url]">Erasmus+ programmijuhendist</a><a>.</a></p><h2>Kuidas taotleda?</h2><p><span style="line-height: 28.57px; font-weight: 700;">Toetuse taotlemine toimub selle kõrgkooli kaudu, milles te töötate.</span> <abbr style="line-height: 28.57px;" title="k&#xF5;rgharidusasutused">Kõrgkoolid</abbr> valivad kandidaadid koolituslähetusteks välismaale oma töötajate hulgast.</p><p>Lähetatavate töötajate valimine peab olema õiglane, läbipaistev ja põhjalikult dokumenteeritud.</p><h2>Lisateave</h2><p>Teavet koolitusvõimaluste kohta välismaal küsige <strong>oma kõrgkooli rahvusvaheliste suhete osakonnalt või Erasmus+ büroost</strong>.</p><p><span style="line-height: 1.4285;">Päringute ja küsimuste korral aitavad teid programmiriikide </span><a href="[node:80:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">riiklikud bürood</a><span style="line-height: 1.4285;"> ja partnerriikide </span><a href="[node:81:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">riiklikud asutused</a><span style="line-height: 1.4285;"> (vastavalt võimalustele), samuti on teil võimalik abi saamiseks </span><a href="[node:82:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">pöörduda Euroopa Komisjoni poole võrgustiku Europe Direct kaudu</a><span style="line-height: 1.4285;">.</span></p>',
      'summary' => NULL,
      'format' => 'full_html',
    ),
  ),
                  'fi' => array(
    array(
      'value' => '<h2>Yleiskatsaus</h2><p>Erasmus+ -ohjelmasta tuetaan korkea-asteen oppilaitosten henkilöstön kouluttautumisjaksoja.</p><p>Koulutusjakso voidaan suorittaa <a href="[node:3:url]">Erasmus+ -ohjelmamaiden tai -kumppanimaiden</a> korkea-asteen oppilaitoksissa tai jossakin ohjelmamaassa sijaitsevassa opetusalan ulkopuolisissa organisaatiossa.</p><p>Tällaisia organisaatioita voivat olla esimerkiksi yritykset, julkisen sektorin elimet, työmarkkinajärjestöt, tutkimuslaitokset ja kansalaisjärjestöt.</p><h2>Kesto</h2><p>Kahden <a href="[node:3:url]">ohjelmamaan</a> välisen koulutusjakson vähimmäispituus on <strong>2 päivää</strong> ja enimmäispituus <strong>2 kuukautta</strong>. Matkaan käytettyä aikaa ei lasketa jakson kestoon.</p><p>Ohjelmamaan ja kumppanimaan välisen koulutusjakson vähimmäispituus on <strong>5 päivää</strong> ja enimmäispituus <strong>2 kuukautta</strong>. Matkaan käytettyä aikaa ei lasketa jakson kestoon.</p><h2>Osallistumisen ehdot</h2><p>Erasmus+ ‑koulutusjakson edellytyksenä on, että lähtijän korkea-asteen oppilaitoksella on ohjelmamaassa sijaitsevan vastaanottavan oppilaitoksen kanssa <a href="[node:69:url]">korkea-asteen koulutusta koskeva Erasmus-peruskirja (ECHE)</a>. Jos kyseessä on <a href="[node:3:url]">kumppanimaassa</a> sijaitseva vastaanottava oppilaitos, oppilaitosten välillä on oltava voimassa oleva <a href="[node:71:url]">korkeakoulujen välinen sopimus</a>.</p><p>Lähtijän korkea-asteen oppilaitoksen ja vastaanottavan organisaation on kuuluttava <a href="[node:67:url]">kansalliseen Erasmus+ -liikkuvuuskonsortioon</a>.</p><p>Ennen koulutusjakson alkua lähtijän, tämän oppilaitoksen ja vastaanottavan organisaation on tehtävä <a href="[node:70:url]">liikkuvuussopimus</a>. Siinä määritellään lähtijän oppimistavoitteet, oikeudet ja vastuut sekä koulutuksen virallinen tunnustaminen.</p><h2>Taloudellinen tuki</h2><p>EU:n apurahoilla katetaan ulkomailla oleskelun <strong>matka- ja oleskelukustannuksia</strong>. Rahoitusosuus riippuu seuraavista tekijöistä:</p><ol><li>Vastaanottava maa</li><li>Jos kyseessä on liikkuvuus ohjelmamaissa, kysynnän taso ulkomailla kouluttautumisesta kiinnostuneen henkilöstön keskuudessa</li><li>Oman ja vastaanottavan maan välinen etäisyys</li><li>Jos koulutusjakson lähtö- ja kohdemaa ovat ohjelmamaita, muiden rahoituslähteiden saatavuus omassa maassa tai alueella</li></ol><p>Jos sekä lähettävä että vastaanottava maa ovat ohjelmamaita, lähettävä oppilaitos vastaa kaikkien maksujen suorittamisesta. Jos toinen maista on ohjelmamaa ja toinen kumppanimaa, lähettävä ja vastaanottava oppilaitos sopivat keskenään maksujen suorittajasta.</p><p>Ohjelma- ja kumppanimaiden välisten harjoittelujaksojen apurahojen määrät julkaistaan <a href="[node:62:url]">Erasmus+ ‑ohjelmaoppaassa</a>. Ohjelmamaiden välisten harjoittelujaksojen apurahojen määrästä saa tietoa <a href="[node:80:url]">kansallisten toimistojen</a> verkkosivuilta ja lähettävistä oppilaitoksista. Lisätietoa apurahojen määristä on myös <a href="[node:62:url]">ohjelmaoppaassa</a><a/>.</p><h2>Hakumenettely</h2><p><span style="line-height: 28.57px; font-weight: 700;">Apurahaa haetaan oman oppilaitoksen kautta.</span> Oppilaitos valitsee henkilöstöstään ehdokkaat koulutusjaksoja varten.</p><p>Koulutettavien valinnan on oltava oikeudenmukaista, avointa ja riittävän dokumentoitua.</p><h2>Lisätietoja</h2><p>Kysy <strong>korkeakoulusi kansainvälisten asioiden toimistosta tai Erasmus+ -toimistosta</strong> tarjolla olevista mahdollisuuksista.</p><p><span style="line-height: 1.4285;">Ohjelmamaiden </span><a href="[node:80:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">kansalliset toimistot</a><span style="line-height: 1.4285;"> ja joissakin kumppanimaissa toimivat </span><a href="[node:81:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">kansalliset yhteyspisteet</a><span style="line-height: 1.4285;"> antavat lisätietoa ja auttavat hakemusten tekemisessä. </span> Euroopan komissioon voi ottaa yhteyttä <a href="[node:82:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">EuropeDirect</a><span style="line-height: 1.4285;"> -palvelun kautta.</span></p>',
      'summary' => NULL,
      'format' => 'full_html',
    ),
  ),
                  'fr' => array(
    array(
      'value' => "<h2>Vue d'ensemble</h2><p>Erasmus+ soutient la formation du personnel des établissements d’enseignement supérieur.</p><p>Avec Erasmus+, vous pouvez vous former dans un établissement d'enseignement supérieur situé dans un <a href=\"[node:3:url]\">pays participant au programme ou dans un pays partenaire</a>, ou dans une organisation ne faisant pas partie du secteur et située dans un pays participant.</p><p>Il peut s'agir d'entreprises, d'organismes publics, de partenaires sociaux, d'instituts de recherche ou d'organisations non gouvernementales.</p><h2>Durée</h2><p>La durée d'une période de formation entre deux <a href=\"[node:3:url]\">pays participants</a> doit être comprise entre <strong>2 jours</strong> et <strong>2 mois</strong>, voyage non inclus.</p><p>La durée d'une période de formation entre un pays participant et un pays partenaire doit être comprise entre <strong>5 jours</strong> et <strong>2 mois</strong>, voyage non inclus.</p><h2>Conditions</h2><p>Pour que vous puissiez vous former à l'étranger dans le cadre d'Erasmus+, votre établissement d'enseignement supérieur doit, dans le cas de pays participants, être en possession d'une <a href=\"[node:69:url]\">charte Erasmus+ pour l'enseignement supérieur</a> ou, dans le cas de <a href=\"[node:3:url]\">pays partenaires</a>, avoir signé un <a href=\"[node:71:url]\">accord interinstitutionnel</a> avec l'établissement d'accueil.</p><p>Votre établissement d'enseignement supérieur et l'organisation dans laquelle vous vous formerez doivent faire partie d'un <a href=\"[node:67:url]\">consortium de mobilité national</a> Erasmus+.</p><p>Avant d'entamer votre formation, vous devez signer un <a href=\"[node:70:url]\">accord de mobilité</a> avec votre établissement d’enseignement supérieur et l'établissement d'accueil. Cet accord définit vos objectifs d'apprentissage, vos droits et obligations, ainsi que les modalités de reconnaissance officielle de votre formation.</p><h2>Soutien financier</h2><p>Les subventions de l'UE contribuent aux <strong>frais de voyage et de séjour</strong> à l'étranger et varient en fonction des critères suivants:</p><ol><li>le pays d'accueil;</li><li>en cas de mobilité au sein de pays participant au programme, le nombre de demandes du personnel de votre pays souhaitant enseigner à l'étranger;</li><li>la distance entre votre pays et le pays d'accueil;</li><li>en cas de périodes de formation entre des pays participant au programme, la disponibilité d'autres sources de financement dans votre pays ou région.</li></ol><p>Si votre période de formation à l'étranger se déroule entre des pays participant au programme, votre établissement d'envoi sera chargé d'effectuer tous les paiements. Si elle se déroule entre des pays participants et des pays partenaires, les établissements d'envoi et d'accueil devront décider qui est responsable des paiements.</p><p>Les montants des subventions pour la mobilité entre des pays participant au programme et des pays partenaires sont publiés dans le <a href=\"[node:62:url]\">guide du programme</a>. Consultez le site web de votre <a href=\"[node:80:url]\">agence nationale</a> et l'établissement d’enseignement supérieur qui vous envoie afin de connaître les taux applicables pour les périodes de formation entre pays participant au programme. Pour en savoir plus sur les montants des subventions, consultez le <a href=\"[node:62:url]\">guide du programme</a><a>.</a></p><h2>Comment poser sa candidature?</h2><p><span style=\"line-height: 28.57px; font-weight: 700;\">Vous devez introduire votre demande de bourse par l'intermédiaire de votre établissement d'enseignement supérieur.</span> <abbr style=\"line-height: 28.57px;\" title=\"Les &#xE9;tablissements d'enseignement sup&#xE9;rieur\">Les établissements d’enseignement supérieur</abbr> sélectionnent ensuite parmi les membres de leur personnel les candidats intéressés par des formations à l'étranger.</p><p>Les critères de sélection doivent être équitables, transparents et bien établis.</p><h2>En savoir plus</h2><p>Contactez le <strong>bureau international ou le bureau Erasmus+ de votre établissement d'enseignement supérieur</strong> pour savoir si ces possibilités existent.</p><p><span style=\"line-height: 1.4285;\">Les </span><a href=\"[node:80:url]\" style=\"line-height: 1.4285; background-color: rgb(255, 255, 255);\">agences nationales</a><span style=\"line-height: 1.4285;\">, pour les pays participant au programme, et les </span><a href=\"[node:81:url]\" style=\"line-height: 1.4285; background-color: rgb(255, 255, 255);\">bureaux nationaux</a><span style=\"line-height: 1.4285;\">, pour les pays partenaires (le cas échéant), peuvent répondre à vos questions et vous aider à poser votre candidature. Vous pouvez également </span><a href=\"[node:82:url]\" style=\"line-height: 1.4285; background-color: rgb(255, 255, 255);\">contacter la Commission européenne par l'intermédiaire d'EuropeDirect</a><span style=\"line-height: 1.4285;\">.</span></p>",
      'summary' => NULL,
      'format' => 'full_html',
    ),
  ),
                  'ga' => array(
    array(
      'value' => "<h2>Forléargas</h2><p>Cuireann Erasmus+ tacaíocht ar fáil le haghaidh tréimhsí oiliúna do bhaill foirne atá ag obair in institiúidí ardoideachais.</p><p>A bhuí le Erasmus+ féadfaidh tú dul faoi oiliúint in institiúid ardoideachais <a href=\"[node:3:url]\">i dtír atá páirteach i gClár Erasmus+</a> nó i dtír chomhpháirtíochta nó in eagraíocht lasmuigh den earnáil atá lonnaithe i dtír chláir.</p><p>Ar na heagraíochtaí a d'fhéadfadh a bheith i gceist tá gnólachtaí, comhlachtaí poiblí, comhpháirtithe sóisialta, institiúidí taighde agus eagraíochtaí neamhrialtasacha.</p><h2>Fad</h2><p>Tréimhse nach lú ná <b>2 lá</b> agus nach mó ná <b>2 mhí</b> a bheidh i gceist leis an tréimhse oiliúna idir dhá <a href=\"[node:3:url]\">thír chláir</a>. Níl an t-am taistil san áireamh.</p><p>Tréimhse nach lú ná <b>5 lá</b> agus nach mó ná <b>2 mhí</b> a bheidh i gceist leis an tréimhse oiliúna idir tír chláir agus tír chomhpháirtíochta. Níl an t-am taistil san áireamh.</p><h2>Coinníollacha</h2><p>Más mian leat dul faoi oiliúint ar an gcoigríoch faoi choimirce Erasmus+, caithfidh <a href=\"[node:69:url]\">Cairt Ardoideachais Erasmus+</a> a bheith ag an institiúid lena mbaineann tú más i dtír chláir atá sí, nó, más <a href=\"[node:3:url]\">i dtír chomhpháirtíochta</a> atá, caithfidh <a href=\"[node:71:url]\">comhaontú idirinstitiúideach</a> a bheith sínithe aici leis an institiúid ina mbeidh tú.</p><p>Caithfidh an institiúid lena mbaineann tú agus an eagraíocht a chuirfidh oiliúint ar fáil duit a bheith ina mbaill <a href=\"[node:67:url]\">de Chuibhreannas Náisiúnta Soghluaisteachta</a> de chuid Erasmus+. </p><p>Sula dtosaíonn tú do thréimhse oiliúna, síneoidh tú, an institiúid ardoideachais lena mbaineann tú agus an institiúid ina mbeidh tú <a href=\"[node:70:url]\">Comhaontú Soghluaisteachta</a>. Leagfar amach sa doiciméad sin na spriocanna foghlama agus na cearta a bheidh agat, na freagrachtaí a bheidh ort chomh maith leis an gcaoi a n-aithneofar an tréimhse oiliúna ar bhonn foirmiúil.</p><h2>Maoiniú</h2><p>I dtaca le deontais de chuid an Aontais Eorpaigh, cuimsítear leo cuid áirithe de do <b>chostais taistil agus chothabhála</b>, agus d'fhéadfadh difear a bheith eatarthu de réir na nithe seo a leanas:</p><ol><li>An tír ina mbeidh tú</li><li>(I gcás soghluaisteacht laistigh de thíortha cláir) leibhéal an éilimh ó bhaill foirne ó do thír féin a bhfuil sé ar intinn acu dul faoi oiliúint ar an gcoigríoch</li><li>An t-achar atá idir do thír féin agus an tír ar a mbeidh do thriall</li><li>(I gcás tréimhsí oiliúna idir tíortha cláir) fáil a bheith ar acmhainní airgeadais eile i do thír nó do réigiún</li></ol><p>Más idir tíortha cláir a bheidh do thréimhse oiliúna ar an gcoigríoch á socrú, is í an institiúid ónar seoladh thú a bheidh freagrach as na híocaíochtaí uile a dhéanamh. Más idir tíortha cláir agus tíortha comhpháirtíochta a shocrófar do thréimhse oiliúna ar an gcoigríoch, cinnfidh an institiúid ónar seoladh thú agus an institiúid ina mbeidh tú cé acu a dhéanfaidh na híocaíochtaí leat.</p><p>Tá eolas le fáil sa <a href=\"[node:62:url]\">Treoirleabhar</a> maidir le leibhéal na ndeontas a bhronntar le haghaidh soghluaisteacht idir tíortha cláir agus tíortha comhpháirtíochta. Féach ar shuímh ghréasáin na <a href=\"[node:80:url]\">Gníomhaireachta Náisiúnta</a> agat féin agus na hinstitiúide ardoideachais a bheidh do do sheoladh le haghaidh na rátaí is infheidhme maidir le tréimhsí oiliúna a shocraítear idir tíortha cláir. Tá tuilleadh eolais maidir le leibhéil na ndeontas le fáil sa <a href=\"[node:62:url]\">Treoirleabhar</a><a>.</a></p><h2>Conas iarratas a dhéanamh</h2><p><span style=\"line-height: 28.57px; font-weight: 700;\">Is tríd an Institiúid Ardoideachais agat féin a chuirfidh tú isteach ar dheontas.</span> <abbr style=\"line-height: 28.57px;\" title=\"Na hInstiti&#xFA;id&#xED; Ardoideachais\">Roghnaíonn na hInstitiúidí Ardoideachais</abbr> as measc a mball foirne féin na hiarrthóirí a chuirfear chun tosaigh le haghaidh tréimhsí oiliúna.</p><p>Ba cheart baill foirne a roghnú ar bhealach cothrom trédhearcach agus gach doiciméad is gá a chur ar fáil.</p><h2>Tuilleadh eolais</h2><p>Déan teagmháil <b>le hoifig idirnáisiúnta nó oifig Erasmus+ na hinstitiúide agat féin</b> lena fháil amach an bhfuil na deiseanna seo ar fáil duit.</p><p><span style=\"line-height: 1.4285;\">Is féidir cabhair maidir le fiosruithe agus iarratais a fháil ó na</span> <a href=\"[node:80:url]\" style=\"line-height: 1.4285; background-color: rgb(255, 255, 255);\">Gníomhaireachtaí Náisiúnta</a> <span style=\"line-height: 1.4285;\">i gcás tíortha cláir, agus</span> (más ann dóibh) ó <a href=\"[node:81:url]\" style=\"line-height: 1.4285; background-color: rgb(255, 255, 255);\">na hOifigí Náisiúnta</a><span style=\"line-height: 1.4285;\">, i gcás tíortha comhpháirtíochta agus is féidir leat</span> <a href=\"[node:82:url]\" style=\"line-height: 1.4285; background-color: rgb(255, 255, 255);\">dul i dteagmháil leis an gCoimisiún Eorpach tríd an tseirbhís EuropeDirect</a><span style=\"line-height: 1.4285;\">.</span></p>",
      'summary' => NULL,
      'format' => 'full_html',
    ),
  ),
                  'hr' => array(
    array(
      'value' => '<h2>Pregled</h2><p>U okviru programa Erasmus+ podupire se stručno usavršavanje osoblja na visokim učilištima.</p><p>Unutar programa možete se usavršavati na visokom učilištu u <a href="[node:3:url]">državi sudionici u programu Erasmus+ ili partnerskoj zemlji</a> ili u organizaciji izvan obrazovnog sektora u državi sudionici.</p><p>Te organizacije mogu biti poduzeća, javna tijela, socijalni partneri, istraživački instituti i nevladine organizacije.</p><h2>Trajanje</h2><p>Usavršavanje koje se odvija između dvije <a href="[node:3:url]">države sudionice u programu</a> mora trajati najmanje <b>dva dana</b>, ali ne može trajati dulje od <b>dva mjeseca</b>. U trajanje nije uključeno vrijeme putovanja.</p><p>Usavršavanje koje se odvija između države sudionice u programu i partnerske zemlje mora trajati najmanje <b>pet dana</b>, ali ne može trajati dulje od <b>dva mjeseca</b>. U trajanje nije uključeno vrijeme putovanja.</p><h2>Uvjeti</h2><p>Kako biste se mogli usavršavati u inozemstvu u okviru Erasmusa+, vaše visoko učilište mora, ako je riječ o državama sudionicama, biti nositelj <a href="[node:69:url]">Povelje Erasmus+ za visoko obrazovanje</a> ili ako je riječ o <a href="[node:3:url]">partnerskim zemljama</a>, imati potpisan <a href="[node:71:url]">međuinstitucijski sporazum</a> sa ustanovom primateljicom.</p><p>Vaše visoko učilište i organizacija u kojoj ćete se usavršavati moraju biti dio <a href="[node:67:url]">nacionalnog konzorcija za mobilnost</a> u okviru Erasmusa+.</p><p>Prije početka usavršavanja vi, vaše visoko učilište i ustanova primateljica potpisujete <a href="[node:70:url]">Ugovor o mobilnosti</a>. U tom se dokumentu navode vaši ciljevi učenja, prava i odgovornosti te kako će se vaše usavršavanje službeno priznati.</p><h2>Financijska potpora</h2><p>Bespovratna sredstva EU-a namijenjena su <b>pokrivanju troškova putovanja i dnevnica</b> za vrijeme vašeg boravka u inozemstvu i njihov iznos razlikuje se ovisno o:</p><ol><li>državi primateljici</li><li>ako je riječ o mobilnosti unutar država sudionica u programu, broju kandidata iz vaše države koji se namjeravaju usavršavati u inozemstvu</li><li>udaljenosti između vaše države i države primateljice</li><li>ako je riječ o usavršavanju koje se odvija između država sudionica u programu, dostupnosti ostalih sredstava financiranja u vašoj državi ili regiji.</li></ol><p>Ako se vaše usavršavanje u inozemstvu odvija između država sudionica u programu, vaša ustanova pošiljateljica bit će odgovorna za sva plaćanja. Ako se ono odvija između država sudionica u programu i partnerskih zemalja, vaša ustanova pošiljateljica i ustanova primateljica odlučuju o tome koja će od njih obavljati plaćanja.</p><p>Visina bespovratnih sredstava za mobilnost između država sudionica u programu i partnerskih zemalja navedena je u <a href="[node:62:url]">Vodiču programa</a>. Primjenjive iznose sredstava za usavršavanje koje se odvija između država sudionica u programu provjerite na <i>web</i>-mjestu svoje <a href="[node:80:url]">nacionalne agencije</a> i visokog učilišta koje vaš šalje. Dodatne informacije o visini bespovratnih sredstava pronađite u <a href="[node:62:url]">Vodiču programa</a><a>.</a></p><h2>Kako se prijaviti</h2><p><span style="line-height: 28.57px; font-weight: 700;">Za bespovratna sredstva prijavljujete se preko svojeg visokog učilišta.</span> <abbr style="line-height: 28.57px;" title="Visoka u&#x10D;ili&#x161;ta">Visoka učilišta</abbr> među svojim osobljem odabiru kandidate za stručno usavršavanje u inozemstvu.</p><p>Odabir osoblja trebao bi biti pravedan, transparentan i potkrijepljen dokumentacijom.</p><h2>Saznajte više</h2><p>Kontaktirajte <b>ured za međunarodnu suradnju ili Erasmus+ na svojem visokom učilištu</b> kako biste saznali o dostupnosti tih mogućnosti.</p><p><span style="line-height: 1.4285;"> </span><a href="[node:80:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">Nacionalne agencije</a><span style="line-height: 1.4285;">, za države sudionice u programu, i </span><a href="[node:81:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">nacionalni uredi</a><span style="line-height: 1.4285;">, za partnerske zemlje (gdje postoje), mogu vam pomoći s upitima i prijavama, a možete </span><a href="[node:82:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">kontaktirati i Europsku komisiju putem EuropeDirect</a><span style="line-height: 1.4285;">.</span></p>',
      'summary' => NULL,
      'format' => 'full_html',
    ),
  ),
                  'hu' => array(
    array(
      'value' => '<h2>Áttekintés</h2><p>Az Erasmus+ támogatást biztosít ahhoz, hogy a felsőoktatási intézményekben dolgozó szakemberek meghatározott ideig képzésben vegyenek részt külföldön.</p><p>A program jóvoltából az érdeklődők <a href="[node:3:url]">programországban vagy partnerországban</a> működő felsőoktatási intézményekben, illetve programországban működő, oktatási ágazaton kívüli szervezeteknél részesülhetnek képzésben.</p><p>Ezeknek a szervezeteknek a körébe többek között vállalkozások, közintézmények, szociális partnerek, kutatóintézetek és nem kormányzati szervezetek tartozhatnak.</p><h2>Időtartam</h2><p>Két <a href="[node:3:url]">programország</a> közötti mobilitás esetében a képzési időszak hossza minimum <strong>2 nap</strong>, maximum <strong>2 hónap</strong> lehet. Ebbe nem számít bele az utazással töltött idő.</p><p>Ha a mobilitás egy programország és egy partnerország között valósul meg, a képzési időszak hossza <strong>5 naptól</strong> <strong>2 hónapig</strong> terjedhet. Ebbe ugyancsak nem számít bele az utazással töltött idő.</p><h2>Feltételek</h2><p>Ahhoz, hogy Ön az Erasmus+ program keretében képzésben részesüljön külföldön, az Ön felsőoktatási intézményének – ha programországban működik – rendelkeznie kell <a href="[node:69:url]">Erasmus Felsőoktatási Chartával</a>, ha pedig <a href="[node:3:url]">partnerországban</a> működik, akkor <a href="[node:71:url]">intézményközi megállapodást</a> kell kötnie a fogadó intézménnyel.</p><p>Az Ön felsőoktatási intézményének és annak a szervezetnek, ahol képzésben vesz majd részt, Erasmus+ <a href="[node:67:url]">nemzeti mobilitási konzorcium</a> tagjának kell lennie.</p><p>A képzési időszak kezdete előtt Önnek, az Ön felsőoktatási intézményének és a fogadó intézménynek <a href="[node:70:url]">mobilitási megállapodást</a> kell kötnie. Ez a dokumentum rögzíti, hogy Önnek milyen tanulási célokat kell elérnie a mobilitási időszak során, továbbá hogy milyen jogai és kötelezettségei vannak, illetve hogy milyen módon kerül majd sor a képzési időszak hivatalos elismerésére.</p><h2>Pénzügyi támogatás</h2><p>Az Európai Unió támogatást biztosít az Ön számára a külföldi képzési időszak során felmerülő <b>utazási és megélhetési költségekhez</b>. A hozzájárulás összege a következő tényezők függvénye:</p><ol><li>a fogadó ország,</li><li>programországok közötti mobilitás esetében a külföldön képzésben részesülni szándékozó szakemberek számára szükséges támogatás mértéke,</li><li>az Ön országa és a fogadó ország közötti távolság,</li><li>programországok közötti mobilitás esetében egyéb finanszírozási források elérhetősége az Ön országában vagy régiójában.</li></ol><p>Ha Ön programország felsőoktatási intézményében dolgozó szakemberként részesül képzésben másik programországban, a képzési időszak során a küldő intézmény lesz felelős az Önt megillető összes kifizetés folyósításáért. Ha a képzési célú mobilitás program- és partnerországok között valósul meg, a küldő és a fogadó intézmény közösen dönti el, melyikük fogja a támogatást kifizetni.</p><p>A programországok és partnerországok közötti képzési célú mobilitásra vonatkozóan a támogatások szintjét a <a href="[node:62:url]">programkalauz (Erasmus+ – Pályázati útmutató)</a> teszi közzé. Ha mind a küldő, mind a fogadó ország programország, a pénzügyi támogatás összegéről a <a href="[node:80:url]">nemzeti irodák</a> és a küldő felsőoktatási intézmények honlapjai tudnak felvilágosítással szolgálni. A támogatások szintjéről a <a href="[node:62:url]">programkalauzban (Erasmus+ – Pályázati útmutató)</a><a/> találhatók részletes információk.</p><h2>Pályázati tudnivalók</h2><p><span style="line-height: 28.57px; font-weight: 700;">Ön saját felsőoktatási intézményén keresztül pályázhat támogatásra.</span> <abbr style="line-height: 28.57px;" title="fels&#x151;oktat&#xE1;si int&#xE9;zm&#xE9;nyek">A felsőoktatási intézmények</abbr> választják ki saját alkalmazottaik közül a külföldi képzési tevékenységben részt vevő jelölteket.</p><p>A szakemberek kiválasztását tisztességes, átlátható és jól dokumentált módon kell lefolytatni.</p><h2>További információk</h2><p>Ön <strong>saját felsőoktatási intézményének nemzetközi tanulmányi osztályán</strong> <b>vagy Erasmus+ programmal foglalkozó irodájánál</b> érdeklődhet arról, hogy igénybe veheti-e az ezen az oldalon ismertetett lehetőségeket.</p><p><span style="line-height: 1.4285;">A programországok </span><a href="[node:80:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">nemzeti irodái</a><span style="line-height: 1.4285;"> és (adott esetben) a partnerországok </span><a href="[node:81:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">nemzeti irodái</a><span style="line-height: 1.4285;"> segíteni tudnak az esetleges kérdésekkel és a jelentkezési eljárással kapcsolatban. Önnek arra is lehetősége van, hogy </span><a href="[node:82:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">a EuropeDirect szolgálaton keresztül felvegye a kapcsolatot az Európai Bizottsággal</a><span style="line-height: 1.4285;">.</span></p>',
      'summary' => NULL,
      'format' => 'full_html',
    ),
  ),
                  'it' => array(
    array(
      'value' => "<h2>Sintesi</h2><p>Erasmus+ sostiene periodi di formazione per il personale che lavora presso gli istituti di istruzione superiore.</p><p>Con Erasmus+ puoi seguire una formazione presso un istituto di istruzione superiore di un <a href=\"[node:3:url]\">paese partecipante al programma o paese partner</a> o presso un'organizzazione attiva al di fuori del settore in paese partecipante al programma.</p><p>Tra queste possono figurare imprese, enti pubblici, partner sociali, istituti di ricerca e organizzazioni non governative.</p><h2>Durata</h2><p>Un periodo di formazione fra due <a href=\"[node:3:url]\">paesi partecipanti al programma</a> deve durare da un minimo di <strong>2 giorni</strong> a un massimo di <strong>2 mesi</strong>, esclusa la durata del viaggio.</p><p>Un periodo di formazione fra un paese partecipante al programma e un paese partner deve durare da un minimo di <strong>5 giorni</strong> a un massimo di <strong>2 mesi</strong>, esclusa la durata del viaggio.</p><h2>Condizioni</h2><p>Per consentirti di seguire una formazione all'estero con Erasmus+, il tuo istituto deve, nel caso dei paesi partecipanti al programma, essere titolare della <a href=\"[node:69:url]\">carta Erasmus+ per l'istruzione superiore</a> o, nel caso dei <a href=\"[node:3:url]\">paesi partner</a>, aver firmato un <a href=\"[node:71:url]\">accordo interistituzionale</a> con l'istituto di destinazione.</p><p>Il tuo istituto di istruzione superiore e l'organizzazione dove intendi seguire la formazione devono far parte di un <a href=\"[node:67:url]\">consorzio di mobilità nazionale</a> di Erasmus+. </p><p>Prima di avviare il periodo di formazione, tu, il tuo istituto di istruzione superiore e l'organizzazione di destinazione dovete concludere un <a href=\"[node:70:url]\">accordo di mobilità</a>. Questo documento definisce gli obiettivi di apprendimento, i diritti e i doveri del partecipante così come le modalità di riconoscimento formale del periodo di formazione.</p><h2>Sostegno finanziario</h2><p>L'UE eroga sovvenzioni per contribuire alle <strong>spese di viaggio e di vitto e alloggio</strong> durante il soggiorno all'estero. L'importo dipende da diversi elementi:</p><ol><li>il paese di destinazione</li><li>in caso di mobilità fra paesi partecipanti al programma, il numero di richieste da parte del personale del tuo paese che intende seguire una formazione all'estero</li><li>la distanza fra il tuo paese e quello di destinazione</li><li>in caso di periodi di formazione fra paesi partecipanti al programma, la disponibilità di altre fonti finanziarie nel tuo paese o nella tua regione.</li></ol><p>Se il periodo di formazione all'estero riguarda i paesi partecipanti al programma, l'istituto di provenienza deve effettuare tutti i pagamenti. Se è organizzato fra paesi partecipanti al programma e paesi partner, l'istituto di provenienza e di destinazione decidono quale dei due effettuerà i pagamenti.</p><p>I tassi di sovvenzionamento per la mobilità tra i paesi partecipanti al programma e i paesi partner sono pubblicati nella <a href=\"[node:62:url]\">guida del programma Erasmus+</a>. Consulta il sito della tua <a href=\"[node:80:url]\">agenzia nazionale</a> e dell'istituto di istruzione superiore di provenienza per conoscere i tassi applicabili ai periodi di formazione fra paesi partecipanti al programma. Per saperne di più sui livelli di sovvenzionamento, consulta la <a href=\"[node:62:url]\">guida del programma</a><a>.</a></p><h2>Come fare domanda</h2><p><span style=\"line-height: 28.57px; font-weight: 700;\">Puoi chiedere una sovvenzione mediante il tuo istituto di istruzione superiore.</span> <abbr style=\"line-height: 28.57px;\" title=\"Gli\">istituti</abbr> selezionano fra il loro personale i candidati per i periodi di formazione all'estero.</p><p>La selezione deve avvenire secondo criteri equi, trasparenti e opportunamente documentati.</p><h2>Per saperne di più</h2><p>Contatta l'<strong>ufficio internazionale o l'ufficio Erasmus+ del tuo istituto di istruzione superiore</strong> per sapere se puoi usufruire di queste opportunità.</p><p><span style=\"line-height: 1.4285;\">Le </span><a href=\"[node:80:url]\" style=\"line-height: 1.4285; background-color: rgb(255, 255, 255);\">agenzie nazionali</a><span style=\"line-height: 1.4285;\"> (per i paesi partecipanti al programma) e gli </span><a href=\"[node:81:url]\" style=\"line-height: 1.4285; background-color: rgb(255, 255, 255);\">uffici nazionali</a><span style=\"line-height: 1.4285;\"> (per i paesi partner, ove presenti) sono a disposizione per fornire ulteriori chiarimenti e assistenza per fare domanda. Puoi anche </span><a href=\"[node:82:url]\" style=\"line-height: 1.4285; background-color: rgb(255, 255, 255);\">contattare la Commissione europea tramite EuropeDirect</a><span style=\"line-height: 1.4285;\">.</span></p>",
      'summary' => NULL,
      'format' => 'full_html',
    ),
  ),
                  'lt' => array(
    array(
      'value' => '<h2>Apžvalga</h2><p>Pagal programą „Erasmus+“ remiamos laikinos aukštojo mokslo įstaigų darbuotojų išvykos mokytis į užsienį.</p><p>Naudodamiesi „Erasmus+“ galite kurį laiką mokytis <a href="[node:3:url]">„Erasmus+“ programos šalies arba šalies partnerės</a> aukštojo mokslo įstaigoje arba programos šalies ne sektoriaus organizacijoje.</p><p>Tai gali būti, pavyzdžiui, verslo įmonės, viešosios įstaigos, socialinių partnerių organizacijos, mokslinių tyrimų institutai ir nevyriausybinės organizacijos.</p><h2>Trukmė</h2><p>Jeigu vykstama iš vienos <a href="[node:3:url]">programos šalies</a> į kitą, mokymosi laikotarpis turi būti ne trumpesnis kaip <strong>2 dienos</strong> ir ne ilgesnis kaip <strong>2 mėnesiai</strong> neįskaičiuojant kelionės laiko.</p><p>Jeigu atvejis susijęs su judumu tarp programos šalies ir šalies partnerės, mokymosi laikotarpis turi būti ne trumpesnis kaip <strong>5 dienos</strong> ir ne ilgesnis kaip <strong>2 mėnesiai</strong> neįskaičiuojant kelionės laiko.</p><h2>Sąlygos</h2><p>Kad galėtumėte laikinai mokytis užsienyje pagal „Erasmus+“, jūsų aukštojo mokslo įstaigai turi būti suteikta <a href="[node:69:url]">„Erasmus+“ aukštojo mokslo chartija</a> (programos šalių atveju) arba ji turi būti pasirašiusi <a href="[node:71:url]">tarpinstitucinį susitarimą</a> su priimančiąja įstaiga (<a href="[node:3:url]">šalių partnerių</a> atveju). </p><p>Jūsų aukštojo mokslo įstaiga ir organizacija, kurioje mokysitės, turi būti „Erasmus+“ <a href="[node:67:url]">nacionalinio judumo konsorciumo</a> dalimi.</p><p>Prieš jūsų mokymosi laikotarpio pradžią jūs, jūsų aukštojo mokslo įstaiga ir priimančioji įstaiga pasirašote <a href="[node:70:url]">judumo susitarimą</a>. Šiame dokumente išdėstomi jūsų mokymosi tikslai, teisės ir pareigos ir nurodoma, kaip jūsų mokymasis bus pripažintas oficialiai.</p><h2>Finansinė parama</h2><p>ES dotacijomis iš dalies padengiamos jūsų <strong>kelionės ir pragyvenimo</strong> buvimo užsienyje laikotarpiu <strong>išlaidos</strong>. Jos gali skirtis priklausomai nuo:</p><ol><li>Priimančiosios šalies.</li><li>Judumo tarp programos šalių atveju – jūsų šalies darbuotojų paraiškų dėstyti užsienyje skaičiaus.</li><li>Atstumo tarp jūsų ir priimančiosios šalių.</li><li>Judumo mokymosi tikslais tarp programos šalių atveju – galimybės naudotis kitais finansiniais šaltiniais jūsų šalyje arba regione.</li></ol><p>Jeigu vykstate mokytis iš vienos programos šalies į kitą, jus siunčianti įstaiga bus atsakinga už visų išmokų mokėjimą. Jeigu jūsų išvyka susijusi su judumu tarp programos šalies ir šalies partnerės, jus siunčianti ir priimanti įstaigos tarpusavyje nuspręs, kuri išmokės jums lėšas.</p><p>Judumo tarp programos šalies ir šalies partnerės atvejais skiriamų stipendijų dydžiai paskelbti <a href="[node:62:url]">programos vadove</a>. Jeigu vykstate mokytis iš vienos programos šalies į kitą, stipendijos dydžio teiraukitės savo <a href="[node:80:url]">nacionalinėje agentūroje</a> ir siunčiančioje aukštojo mokslo įstaigoje. Daugiau informacijos apie stipendijų dydžius pateikiama <a href="[node:62:url]">programos vadove</a><a>.</a></p><h2>Kaip pateikti paraišką</h2><p><span style="line-height: 28.57px; font-weight: 700;">Stipendijos paraišką reikia teikti savo aukštojo mokslo įstaigai.</span> <abbr style="line-height: 28.57px;" title="Auk&#x161;tojo mokslo &#x12F;staigos">Aukštojo mokslo įstaigos</abbr> iš savo darbuotojų atrinks kandidatus laikinai mokytis užsienyje.</p><p>Kandidatų atranka turėtų būti teisinga, skaidri ir tinkamai pagrįsta dokumentais.</p><h2>Daugiau informacijos</h2><p>Ar galite pasinaudoti šiomis galimybėmis, teiraukitės <strong>savo aukštojo mokslo įstaigos tarptautinių ryšių skyriuje arba „Erasmus+“ biure</strong>.</p><p><a href="[node:80:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">Nacionalinės agentūros</a> <span style="line-height: 1.4285;">programos šalyse ir </span><a href="[node:81:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">nacionaliniai biurai</a> <span style="line-height: 1.4285;">šalyse partnerėse (kur jų yra) gali atsakyti į klausimus ir padėti iškilus klausimams dėl paraiškų. Taip pat galite</span> <a href="[node:82:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">per tarnybą „Europe Direct“ kreiptis į Europos Komisiją</a><span style="line-height: 1.4285;">.</span></p>',
      'summary' => NULL,
      'format' => 'full_html',
    ),
  ),
                  'lv' => array(
    array(
      'value' => '<h2>Pārskats</h2><p>“Erasmus+” atbalsta augstākās izglītības iestāžu personāla mācības.</p><p>Pateicoties “Erasmus+”, varat mācīties augstākās izglītības iestādē  <a href="[node:3:url]">programmas valstī vai partnervalstī</a>, kā arī ar šo sektoru nesaistītā organizācijā programmas valstī.</p><p>Runa ir par uzņēmumiem, publiskām iestādēm, sociālajiem partneriem, pētniecības institūtiem un nevalstiskajām organizācijām.</p><h2>Ilgums</h2><p>Mācību periods <a href="[node:3:url]">programmas valstīs</a> nedrīkst būt īsāks par <b>2 dienām</b> vai ilgāks par <b>2 mēnešiem</b>, neskaitot ceļošanas laiku.</p><p>Tādu mācību periods, kurās iesaistīta programmas valsts un partnervalsts, nedrīkst būt īsāks par <b>5 dienām</b> vai ilgāks par <b>2 mēnešiem</b>, neskaitot ceļošanas laiku.</p><h2>Nosacījumi</h2><p>Lai jūs “Erasmus+” ietvaros varētu mācīties ārzemēs, jūsu iestādei programmas valstu gadījumā ir jāpieņem <a href="[node:69:url]">“Erasmus+” Augstākās izglītības harta</a> vai <a href="[node:3:url]">partnervalstu</a> gadījumā tai ir jābūt parakstījušai <a href="[node:71:url]">starpiestāžu līgumu</a> ar uzņemošo iestādi.</p><p>Jūsu augstākās izglītības iestādei un organizācijai, kurā mācīsieties, ir jābūt <a href="[node:67:url]">mobilitātes nacionālajā konsorcijā</a>.</p><p>Pirms sākat mācības, jums, jūsu iestādei un uzņemošajai iestādei jānoslēdz <a href="[node:70:url]">mobilitātes līgums</a>. Šajā līgumā tiek norādīti mācību mērķi, jūsu tiesības un pienākumi, kā arī ziņas par to, kā tiks atzīts jūsu mācību periods.</p><h2>Finansiālais atbalsts</h2><p>ES stipendijas palīdz segt <b>ceļa izdevumus un uzturēšanos ārzemēs</b>. To apjoms ir atkarīgs no:</p><ol><li>uzņemošās valsts;</li><li>tā, cik daudz jūsu valsts darbinieku vēlas mācīties ārzemēs (runa ir par mobilitāti programmas valstu ietvaros);</li><li>attāluma starp jūsu valsti un uzņemošo valsti;</li><li>citu finansiālo avotu pieejamības jūsu valstī vai reģionā (runa ir par mācību periodiem programmas valstu ietvaros).</li></ol><p>Ja jūsu mācību periods ārzemēs tiek īstenots starp programmas valstīm, nosūtošā iestāde ir atbildīga par visu maksājumu veikšanu. Ja tas tiek īstenots starp “Erasmus” programmas valsti un partnervalsti, nosūtošajai iestādei un uzņemošajai iestādei būs jānolemj, kura no tām veiks maksājumus jums.</p><p>Mobilitātei starp programmas valstīm un partnervalstīm pieejamo stipendiju summas ir publicētas <a href="[node:62:url]">“Erasmus+” programmas vadlīnijās</a>. Ieskatieties savas <a href="[node:80:url]">valsts aģentūras</a> tīmekļa vietnē un tās  augstākās izglītības iestādes tīmekļa vietnē, kura jūs nosūta, lai noskaidrotu likmes, kas ir piemērojamas mācību periodiem starp programmas valstīm. Lai uzzinātu vairāk par stipendiju apjomu, ieskatieties <a href="[node:62:url]">Programmas vadlīnijās</a><a>.</a></p><h2>Kā pieteikties</h2><p><span style="line-height: 28.57px; font-weight: 700;">Stipendija jums jālūdz ar savas augstākās izglītības iestādes starpniecību.</span> <abbr style="line-height: 28.57px;" title="Augst&#x101;k&#x101;s izgl&#x12B;t&#x12B;bas iest&#x101;des">Augstākās izglītības iestādes</abbr> atlasa kandidātus mācībām ārzemēs no savu darbinieku vidus.</p><p>Šādai atlasei jānotiek taisnīgi un caurskatāmi, un tai jātiek pienācīgi dokumentētai.</p><h2>Plašāka informācija</h2><p>Sazinieties ar <b>savas augstskolas starptautiskās sadarbības <b>biroju </b>vai “Erasmus+” biroju</b>, lai noskaidrotu, vai šādas iespējas ir pieejamas.</p><p><span style="line-height: 1.4285;"/><a href="[node:80:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">Valsts aģentūras</a> <span style="line-height: 1.4285;">programmas valstīs</span> un <a href="[node:81:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">valsts biroji</a> <span style="line-height: 1.4285;">partnervalstīs (jā tādi ir) var atbildēt uz jūsu jautājumiem un palīdzēt jums iesniegt pieteikumu, un jūs varat</span> <a href="[node:82:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">sazināties ar Eiropas Komisiju, vēršoties dienestā “EuropeDirect”</a><span style="line-height: 1.4285;">.</span></p>',
      'summary' => NULL,
      'format' => 'full_html',
    ),
  ),
                  'mt' => array(
    array(
      'value' => "<h2>Ħarsa ġenerali</h2><p>Erasmus+ jappoġġja perjodi ta' taħriġ għal persunal li jaħdem f'istituzzjonijiet ta’ edukazzjoni għolja.</p><p>B'Erasmus+, int tista' titħarreġ f'istituzzjoni ta’ edukazzjoni għolja f'<a href=\"[node:3:url]\">Pajjiż tal-Programm Erasmus+ jew f'Pajjiż sieħeb</a> jew f'organizzazzjoni barra s-settur f'Pajjiż tal-programm.</p><p>Eżempji ta' organizzazzjonijiet bħal dawn jinkludu negozji, korpi pubbliċi, imsieħba soċjali, istituzzjonijiet ta' riċerka u organizzazzjonijiet mhux governattivi.</p><h2>Tul ta' żmien</h2><p>Perjodu ta' taħriġ bejn żewġ <a href=\"[node:3:url]\">Pajjiżi tal-programm</a> irid idum minimu ta' <strong>jumejn</strong> u ma jistax idum iktar minn <strong>xahrejn</strong>. Dan jeskludi ż-żmien  tal-ivvjaġġar.</p><p>Perjodu ta' taħriġ bejn Pajjiż tal-programm u Pajjiż sieħeb irid idum minimu ta' <strong>5 ijiem</strong> u ma jistax idum iktar minn <strong>xahrejn</strong>. Dan jeskludi ż-żmien tal-ivvjaġġar.</p><h2>Kundizzjonijiet</h2><p>Biex titħarreġ barra l-pajjiż ma' Erasmus+, l-istituzzjoni ta' edukazzjoni għolja tiegħek trid jew, fil-każ ta' Pajjiżi tal-programm, ikollha <a href=\"[node:69:url]\">Karta ta' Ersamus għall-Edukazzjoni Għolja</a> jew, fil-każ ta' <a href=\"[node:3:url]\">Pajjiżi sieħba</a>, tkun iffirmat <a href=\"[node:71:url]\">ftehim interistituzzjonali</a> mal-istituzzjoni riċeventi.</p><p>L-istituzzjoni ta’ edukazzjoni għolja tiegħek u l-organizzazzjoni li fiha se titħarreġ iridu jkunu parti minn <a href=\"[node:67:url]\">Konsorzju ta' Mobilità Nazzjonali</a> ta' Erasmus+.</p><p>Qabel tibda l-perjodu ta' taħriġ tiegħek, int, l-istituzzjoni tiegħek u l-organizzazzjoni riċeventi tiffirmaw <a href=\"[node:70:url]\">Ftehim ta' Mobilità</a>. Dan id-dokument jistabbilixxi l-għanijiet ta' tagħlim, id-drittijiet u r-responsabbiltajiet tiegħek u wkoll kif it-taħriġ tiegħek se jiġi formalment rikonoxxut.</p><h2>Appoġġ finanzjarju</h2><p>L-għotjiet tal-UE jipprovdu kontribuzzjoni għall-ispejjeż tal-ivvjaġġar u sussistenza matul iż-żmien li tqatta' barra l-pajjiż u din tista' tvarja skont:</p><ol><li>il-pajjiż riċeventi</li><li>fil-każ ta' mobilità bejn Pajjiżi tal-programm, il-livell ta domanda mill-persunal minn pajjiżek li għandhomm il-ħsieb li jitħarrġu barra l-pajjiż</li><li>id-distanza bejn pajjiżek u l-pajjiż riċeventi</li><li>fil-każ ta' perjodi ta' taħriġ bejn Pajjiżi tal-programm, id-disponibbiltà ta' sorsi finanzjarji oħrajn f'pajjiżek jew ir-reġjun tiegħek</li></ol><p>Jekk il-perjodu ta' taħriġ tiegħek barra l-pajjiż hu bejn Pajjiżi tal-programm, l-istituzzjoni li qed tibgħatek se tkun responsabbli mill-ħlas tal-ispejjeż kollha. Jekk hu bejn Pajjiż tal-programm u Pajjiż sieħeb, l-istituzzjoni li qed tibgħat u dik riċeventi se jiddeċiedu min minnhom se jħallas il-pagamenti tiegħek.</p><p>Il-livelli tal-għotjiet għall-mobilità bejn Pajjiż tal-programm u Pajjiż sieħeb huma ppubblikati fil-<a href=\"[node:62:url]\">Gwida tal-Programm</a>. Iċċekkja s-sit web tal-<a href=\"[node:80:url]\">Aġenzija Nazzjonali</a> u tal-istituzzjoni ta’ edukazzjoni għolja tiegħek għar-rati applikabbli għal perjodi ta' taħriġ bejn Pajjiżi tal-programm. Għal aktar informazzjoni dwar il-livelli tal-għotjiet, iċċekkja l-<a href=\"[node:62:url]\">Gwida tal-Programm</a><a>.</a></p><h2>Kif tapplika</h2><p><span style=\"line-height: 28.57px; font-weight: 700;\">Int tapplika għal għotja permezz tal-istituzzjoni ta’ edukazzjoni għolja tiegħek.</span> <abbr style=\"line-height: 28.57px;\" title=\"Istituzzjonijiet ta&#x2019; edukazzjoni g&#x127;olja\">L-HEIs</abbr> jagħżlu l-kandidati għall-perjodi ta' taħriġ barra l-pajjiż mill-persunal tagħhom.</p><p>L-għażla tal-persunal għandha tkun ġusta, trasparenti u ddokumentata kif xieraq.</p><h2>Sir af aktar</h2><p>Ikkuntattja lill-<strong>uffiċċju internazzjonali jew ta' Erasmus+ tal-istituzzjoni ta’ edukazzjoni għolja tiegħek</strong> biex issir taf jekk dawn l-opportunitajiet humiex disponibbli.</p><p><span style=\"line-height: 1.4285;\">L-</span><a href=\"[node:80:url]\" style=\"line-height: 1.4285; background-color: rgb(255, 255, 255);\">Aġenziji Nazzjonali</a><span style=\"line-height: 1.4285;\">, għall-Pajjiżi tal-programm, u l-</span><a href=\"[node:81:url]\" style=\"line-height: 1.4285; background-color: rgb(255, 255, 255);\">Uffiċċji Nazzjonali</a><span style=\"line-height: 1.4285;\">, għall-Pajjiżi sieħba (fejn huma disponibbli), jistgħu jgħinu bil-mistoqsijiet u l-applikazzjonijiet, u tista' </span><a href=\"[node:82:url]\" style=\"line-height: 1.4285; background-color: rgb(255, 255, 255);\">tikkuntattja lill-Kummissjoni Ewropea permezz ta' EuropeDirect</a><span style=\"line-height: 1.4285;\">.</span></p>",
      'summary' => NULL,
      'format' => 'full_html',
    ),
  ),
                  'nl' => array(
    array(
      'value' => "<h2>Overzicht</h2><p>Erasmus+ ondersteunt opleidingsperiodes voor personeel in het hoger onderwijs.</p><p>Met Erasmus+ kunt u naar een instelling voor hoger onderwijs in een <a href=\"[node:3:url]\">programma- of partnerland</a> of naar een relevante organisatie buiten de sector in een programmaland.</p><p>Denk daarbij aan bedrijven, overheidsinstanties, sociale partners, onderzoeksinstellingen en ngo's.</p><h2>Duur</h2><p>Een opleiding in een ander <a href=\"[node:3:url]\">programmaland</a> kan minimaal <strong>2 dagen</strong> en maximaal <strong>2 maanden</strong> duren. Reistijd is daarbij niet inbegrepen.</p><p>Een opleiding in (of vanuit) een partnerland kan minimaal <strong>5 dagen</strong> en maximaal <strong>2 maanden</strong> duren. Reistijd is daarbij niet inbegrepen.</p><h2>Voorwaarden</h2><p>Wilt u met Erasmus+ voor een opleiding naar het buitenland, dan moet uw instelling voor hoger onderwijs (in een programmaland) het <a href=\"[node:69:url]\">Erasmus-handvest voor het hoger onderwijs</a> onderschrijven of (in een <a href=\"[node:3:url]\">partnerland</a>) een <a href=\"[node:71:url]\">interinstitutionele overeenkomst</a> hebben gesloten met de ontvangende instelling.</p><p>Uw instelling en de organisatie waar u naar toe gaat, moeten samen deel uitmaken van een <a href=\"[node:67:url]\">mobiliteitsconsortium</a>.</p><p>Voordat u aan de opleiding begint, moeten u, uw instelling en de ontvangende instelling een <a href=\"[node:70:url]\">mobiliteitsovereenkomst</a> ondertekenen. Daarin staan uw leerdoelen, rechten en plichten en afspraken over de formele erkenning van uw opleiding.</p><h2>Financiële steun</h2><p>De EU draagt bij in uw <strong>reis- en verblijfkosten</strong> tijdens uw verblijf in het buitenland, afhankelijk van:</p><ol><li>het ontvangende land</li><li>bij mobiliteit tussen programmalanden, de vraag vanuit uw land om in een ander land te gaan lesgeven</li><li>de afstand tussen beide landen</li><li>bij opleidingsperiodes (tussen programmalanden) de beschikbaarheid van andere financiële steun in uw land of regio</li></ol><p>Gaat u vanuit een programmaland een opleiding volgen in een ander programmaland, dan moet uw instellingen alle betalingen doen. Zijn er een programmaland en een partnerland bij betrokken, dan moeten de zendende en de ontvangende instelling onderling afspreken wie wat betaalt.</p><p>De bedragen van de subsidie voor mobiliteit tussen programma- en partnerlanden staan in de <a href=\"[node:62:url]\">programmagids</a>. Controleer de website van uw <a href=\"[node:80:url]\">nationaal agentschap</a> en van uw eigen instelling voor de tarieven voor opleidingen van het ene in het andere programmaland. Meer informatie over de hoogte van de bijdragen vindt u in de <a href=\"[node:62:url]\">programmagids</a><a>.</a></p><h2>Hoe vraag ik het aan?</h2><p><span style=\"line-height: 28.57px; font-weight: 700;\">U kunt subsidie aanvragen via uw eigen instelling voor hoger onderwijs.</span> <abbr style=\"line-height: 28.57px;\" title=\"Instellingen voor hoger onderwijs\">Hogescholen en universiteiten</abbr> kiezen zelf kandidaten voor een opleiding in het buitenland onder hun eigen medewerkers.</p><p>Die selectie moet eerlijk en transparant verlopen en goed gedocumenteerd worden.</p><h2>Lees verder</h2><p>U kunt informeren naar de mogelijkheden bij het bureau buitenland of het Erasmus+-bureau van uw hogeschool of universiteit.</p><p><span style=\"line-height: 1.4285;\">De </span><a href=\"[node:80:url]\" style=\"line-height: 1.4285; background-color: rgb(255, 255, 255);\">nationale agentschappen</a><span style=\"line-height: 1.4285;\"> (programmalanden), en eventuele </span><a href=\"[node:81:url]\" style=\"line-height: 1.4285; background-color: rgb(255, 255, 255);\">nationale bureaus</a><span style=\"line-height: 1.4285;\"> (partnerlanden), kunnen informatie geven en helpen bij een aanvraag, en u kunt </span><a href=\"[node:82:url]\" style=\"line-height: 1.4285; background-color: rgb(255, 255, 255);\">contact opnemen met de Europese Commissie via EuropeDirect</a><span style=\"line-height: 1.4285;\">.</span></p>",
      'summary' => NULL,
      'format' => 'full_html',
    ),
  ),
                  'pl' => array(
    array(
      'value' => '<h2>Informacje ogólne</h2><p>Erasmus+ wspiera wyjazdy w celach szkoleniowych pracowników uczelni wyższych.</p><p>Szkolenia mogą odbywać się w instytucjach szkolnictwa wyższego <a href="[node:3:url]">w kraju uczestniczącym w programie Erasmus+ lub kraju partnerskim</a>, lub w organizacji spoza sektora w kraju uczestniczącym w programie.</p><p>Do takich organizacji należą np. przedsiębiorstwa, organy publiczne, partnerzy społeczni, instytuty badawcze i organizacje pozarządowe.</p><h2>Czas trwania</h2><p>Okres szkolenia w ramach współpracy między dwoma <a href="[node:3:url]">krajami uczestniczącymi w programie</a> musi trwać co najmniej dwa<b> dni</b> i co najwyżej <strong>dwa miesiące</strong>. Nie obejmuje to czasu podróży.</p><p>Okres szkolenia w ramach współpracy między krajem uczestniczącym w programie a krajem partnerskim musi trwać co najmniej pięć<b> dni</b> i co najwyżej <strong>dwa miesiące</strong>. Nie obejmuje to czasu podróży.</p><h2>Warunki</h2><p>Twoja uczelnia wyższa musi, albo – w przypadku krajów uczestniczących w programie – posiadać <a href="[node:69:url]">Kartę Erasmusa+ dla szkolnictwa wyższego</a>, albo – w przypadku <a href="[node:3:url]">krajów partnerskich</a> – mieć podpisaną <a href="[node:71:url]">umowę międzyinstytucjonalną</a> z uczelnią przyjmującą.</p><p>Twoja uczelnia wyższa i placówka, w której odbędzie się szkolenie, muszą wchodzić w skład <a href="[node:67:url]">krajowego konsorcjum w ramach projektu mobilności</a> programu Erasmus+.</p><p>Przed rozpoczęciem szkolenia podpisz ze swoją uczelnią wyższą oraz uczelnią przyjmującą <a href="[node:70:url]">porozumienie o mobilności</a>. Dokument ten będzie określać Twoje cele edukacyjne, prawa i obowiązki oraz w jaki sposób zrealizowane szkolenie zostanie formalnie uznane.</p><h2>Wsparcie finansowe</h2><p>Dofinansowanie unijne pokrywa w części <strong>koszty podróży i utrzymania</strong> podczas Twojego pobytu za granicą. Jego wysokość zależy od:</p><ol><li>kraju przyjmującego</li><li>w przypadku współpracy między krajami uczestniczącymi w programie – zainteresowania szkoleniami za granicą wśród pracowników z Twojego kraju</li><li>odległości między Twoim krajem a krajem przyjmującym</li><li>w przypadku szkoleń w ramach współpracy między krajami uczestniczącymi w programie – dostępności innych źródeł wsparcia finansowego w Twoim kraju lub regionie.</li></ol><p>Jeśli Twój wyjazd szkoleniowy za granicę odbywa się w ramach współpracy między krajami uczestniczącymi w programie, za wszystkie płatności będzie odpowiadać Twoja uczelnia macierzysta. Natomiast jeśli wyjazd odbywa się w ramach współpracy między krajami uczestniczącymi w programie a krajami partnerskimi, instytucja wysyłająca i przyjmująca zadecydują wspólnie o tym, która z nich będzie odpowiadać za dokonanie płatności.</p><p>Stawki dofinansowania przysługującego w przypadku wyjazdu zorganizowanego wspólnie przez kraje uczestniczące w programie i kraje partnerskie są publikowane w <a href="[node:62:url]">Przewodniku po programie Erasmus+</a>. Dowiedz się na stronach <a href="[node:80:url]">agencji krajowej</a> lub swojej uczelni, jakie stawki obowiązują w przypadku szkoleń realizowanych w ramach współpracy między krajami uczestniczącymi w programie. Więcej informacji o wysokości dofinansowania można znaleźć w <a href="[node:62:url]">przewodniku po programie</a><a>.</a></p><h2>Jak złożyć wniosek</h2><p><span style="line-height: 28.57px; font-weight: 700;">Wniosek o dofinansowanie składa się za pośrednictwem swojej instytucji szkolnictwa wyższego.</span> <abbr style="line-height: 28.57px;" title="Uczelnie wy&#x17C;sze">Instytucje szkolnictwa wyższego</abbr> wybierają uczestników wyjazdu za granicę spośród swoich pracowników.</p><p>Selekcja kandydatów powinna odbywać się w uczciwy i przejrzysty sposób i zostać starannie udokumentowana.</p><h2>Więcej informacji</h2><p>Skontaktuj się z <strong>biurem współpracy międzynarodowej lub biurem programu Erasmus+ na swojej uczelni</strong>, aby dowiedzieć się, czy możesz zgłosić swoją kandydaturę.</p><p>W razie pytań i problemów z wypełnieniem wniosku pomocy udzielą Ci – <span style="line-height: 1.4285;">w przypadku krajów uczestniczących w programie </span><a href="[node:80:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">agencje krajowe</a><span style="line-height: 1.4285;">, a w przypadku krajów partnerskich </span><a href="[node:81:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">biura krajowe</a><span style="line-height: 1.4285;"> (o ile istnieją). Możesz również </span><a href="[node:82:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">skontaktować się z Komisją Europejską za pośrednictwem EuropeDirect</a><span style="line-height: 1.4285;">.</span></p>',
      'summary' => NULL,
      'format' => 'full_html',
    ),
  ),
                  'pt' => array(
    array(
      'value' => '<h2>Apresentação</h2><p>O Erasmus+ apoia períodos de formação para as pessoas que trabalham em instituições de ensino superior.</p><p>Graças ao Erasmus+, pode seguir uma formação numa instituição de ensino superior num <a href="[node:3:url]">país do programa ou num país parceiro</a> ou numa organização de outro setor num país do programa.</p><p>Exemplos de tais organizações são empresas, organismos públicos, parceiros sociais, institutos de investigação e organizações não governamentais.</p><h2>Duração</h2><p>Um período de formação que envolva dois <a href="[node:3:url]">países do programa</a> deve ter uma duração mínima de <strong>2 dias</strong> e máxima de <strong>2 meses</strong> (excluindo o tempo de viagem).</p><p>Um período de formação que envolva um país do programa e um país parceiro deve ter uma duração mínima de <strong>5 dias</strong> e máxima de <strong>2 meses</strong> (excluindo o tempo de viagem).</p><h2>Condições</h2><p>Para fazer uma formação no estrangeiro ao abrigo do Erasmus+, a sua instituição deve, no caso dos países do programa, ser titular da <a href="[node:69:url]">Carta Erasmus+ para o Ensino Superior</a> ou, no caso dos <a href="[node:3:url]">países parceiros</a>, ter assinado um <a href="[node:71:url]">acordo interinstitucional</a> com a instituição de acolhimento.</p><p>A sua instituição de ensino superior e a organização onde fará a formação devem fazer parte de um <a href="[node:67:url]">consórcio de mobilidade nacional</a> Erasmus+.</p><p>Antes de iniciar a sua formação, deve assinar um <a href="[node:70:url]">acordo de mobilidade</a> com a sua instituição de ensino superior e com a instituição de acolhimento. Este documento estabelece os objetivos de aprendizagem, os direitos e responsabilidades das partes e a forma como a formação será formalmente reconhecida.</p><h2>Apoio financeiro</h2><p>As subvenções da UE contribuem para cobrir as <strong>despesas de viagem e de estadia</strong> durante o período no estrangeiro. O seu montante pode variar em função:</p><ol><li>do país de acolhimento</li><li>do número de pedidos de pessoas do seu país interessadas em seguir uma formação no estrangeiro (no caso da mobilidade envolver dois países do programa)</li><li>da distância entre o seu país e o país de acolhimento</li><li>da existência de outras fontes de financiamento no seu país ou região (no caso do período de formação envolver dois países do programa)</li></ol><p>Se o período de formação no estrangeiro envolver dois países do programa, a sua instituição de envio é responsável por todos os pagamentos devidos. Se o período de formação no estrangeiro envolver um país do programa e um país parceiro, a instituição de envio e de acolhimento decidirão qual delas será responsável pelos pagamentos.</p><p>Os níveis das subvenções para períodos de mobilidade que envolvem países do programa e países parceiros estão publicados no <a href="[node:62:url]">Guia do Programa Erasmus+</a>. Consulte o sítio da sua <a href="[node:80:url]">agência nacional</a> e a instituição de ensino superior de envio para informações sobre as taxas aplicáveis a períodos de formação que envolvem dois países do programa. Para mais informações sobre os níveis das subvenções, consulte o <a href="[node:62:url]">guia do programa</a><a>.</a></p><h2>Candidaturas</h2><p><span style="line-height: 28.57px; font-weight: 700;">Pode candidatar-se a uma subvenção através da sua instituição de ensino superior.</span> <abbr style="line-height: 28.57px;" title="Institui&#xE7;&#xF5;es de Ensino Superior">As IES</abbr> selecionam os candidatos a períodos de formação no estrangeiro entre o seu pessoal.</p><p>O processo de seleção deve ser justo, transparente e bem documentado.</p><h2>Mais informações</h2><p>Contacte o <strong>serviço responsável pelas relações internacionais ou pelo Erasmus+ da sua instituição de ensino superior</strong> para se informar sobre as oportunidades disponíveis.</p><p><span style="line-height: 1.4285;">As </span><a href="[node:80:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">agências nacionais</a><span style="line-height: 1.4285;">, para os países do programa, e os </span><a href="[node:81:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">gabinetes nacionais</a><span style="line-height: 1.4285;"> (caso existam), para os países parceiros, podem responder a perguntas e ajudar na apresentação das candidaturas.  Pode também </span><a href="[node:82:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">contactar a Comissão Europeia através do serviço EuropeDirect</a><span style="line-height: 1.4285;">.</span></p>',
      'summary' => NULL,
      'format' => 'full_html',
    ),
  ),
                  'ro' => array(
    array(
      'value' => '<h2>Prezentare</h2><p>Erasmus+ sprijină formarea personalului instituțiilor de învățământ superior.</p><p>Cu Erasmus+, vă puteți forma într-o universitate dintr-o <a href="[node:3:url]">țară participantă la program sau dintr-o țară parteneră</a> sau într-o organizație din afara sectorului, aflată într-o țară participantă.</p><p>Acestea pot fi întreprinderi, instituții publice, parteneri sociali, institute de cercetare și organizații neguvernamentale.</p><h2>Durată</h2><p>Un stagiu de formare care implică două <a href="[node:3:url]">țări participante la program</a> trebuie să dureze minimum <strong>2 zile</strong> și maximum <strong>2 luni</strong>. Timpul necesar deplasării nu este inclus.</p><p>Un stagiu de formare care implică o țară participantă la program și o țară parteneră trebuie să dureze minimum <strong>5 zile</strong> și maximum <strong>2 luni</strong>. Timpul necesar deplasării nu este inclus.</p><h2>Condiții</h2><p>Pentru a vă putea forma în străinătate cu Erasmus+, instituția dvs. de învățământ superior trebuie să fie semnatară a <a href="[node:69:url]">Cartei Universitare Erasmus+</a> (în cazul țărilor participante la program) sau a unui <a href="[node:71:url]">acord interinstituțional</a> cu instituția gazdă (în cazul <a href="[node:3:url]">țărilor partenere</a>).</p><p>Instituția dvs. de învățământ superior și organizația în cadrul căreia vă formați trebuie să facă parte dintr-un <a href="[node:67:url]">consorțiu național de mobilitate</a> Erasmus+.</p><p>Înainte de a începe perioada de formare, instituția dvs. și instituția gazdă trebuie să semneze un <a href="[node:70:url]">acord de mobilitate</a>. Acest document stabilește obiectivele dvs. de învățare, drepturile și obligațiile care vă revin și cum va fi recunoscută oficial perioada de formare.</p><h2>Sprijin financiar</h2><p>Bursele UE acoperă o parte din <strong>cheltuielile dvs. de călătorie și întreținere</strong> pe perioada șederii în străinătate și variază în funcție de:</p><ol><li>țara gazdă</li><li>numărul cererilor depuse de personalul din țara dvs. care dorește să predea în străinătate (în cazul mobilității în țările participante la program)</li><li>distanța dintre țara dvs. și țara gazdă</li><li>disponibilitatea altor surse de finanțare în țara sau regiunea dvs. (în cazul perioadelor de formare între țări participante la program).</li></ol><p>Dacă stagiul de formare se desfășoară între țări participante, instituția dvs. va fi cea care se va ocupa de toate plățile. Dacă se desfășoară între țări participante la program și țări partenere, instituția de trimitere și instituția gazdă decid care dintre ele va efectua plățile.</p><p>Nivelurile burselor pentru mobilitatea între țări participante la program și țări partenere sunt publicate în <a href="[node:62:url]">Ghidul programului</a>. Consultați site-ul <a href="[node:80:url]">agenției dvs. naționale</a> și adresați-vă instituției de învățământ superior de trimitere pentru a afla mai multe despre nivelurile aplicabile în cazul perioadelor de formare între țări participante la program. Pentru mai multe informații cu privire la nivelurile granturilor, consultați <a href="[node:62:url]">Ghidul programului</a><a>.</a></p><h2>Depunerea cererii</h2><p><span style="line-height: 28.57px; font-weight: 700;">Trebuie să depuneți cererea de bursă prin intermediul instituției dvs. de învățământ superior.</span> <abbr style="line-height: 28.57px;" title="Institu&#x21B;iile de &#xEE;nv&#x103;&#x21B;&#x103;m&#xE2;nt superior">Universitățile</abbr> selectează apoi candidații care doresc să se formeze în străinătate din rândul personalului lor.</p><p>Criteriile de selecție trebuie să fie echitabile, transparente și bine documentate.</p><h2>Informații suplimentare</h2><p>Pentru a afla dacă puteți accesa astfel de oportunități, contactați <strong>biroul de relații internaționale sau biroul Erasmus+ din instituția dvs. de învățământ superior</strong>.</p><p><span style="line-height: 1.4285;"/><a href="[node:80:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">Agențiile Naționale</a><span style="line-height: 1.4285;"> (în cazul țărilor participante la program și </span><a href="[node:81:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">Birourile naționale</a><span style="line-height: 1.4285;"> (în cazul țărilor partenere care dețin un astfel de birou) vă pot răspunde la întrebări, inclusiv la cele privind depunerea cererii. De asemenea, puteți </span><a href="[node:82:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">contacta Comisia Europeană prin intermediul EuropeDirect</a><span style="line-height: 1.4285;">.</span></p>',
      'summary' => NULL,
      'format' => 'full_html',
    ),
  ),
                  'sk' => array(
    array(
      'value' => '<h2>Prehľad</h2><p>Jedným z cieľov programu Erasmus+ je podporovať pobyty odbornej prípravy pre zamestnancov pracujúcich v inštitúciách vysokoškolského vzdelávania.</p><p>V rámci programu Erasmus+ môžete absolvovať odbornú prípravu v inštitúcii vysokoškolského vzdelávania v <a href="[node:3:url]">krajine účastniacej sa programu alebo v partnerskej krajine</a>, príp. v organizácii pôsobiacej mimo sektora vzdelávania v krajine účastniacej sa programu.</p><p>Ide napríklad o podniky, verejné orgány, sociálnych parterov, výskumné ústavy a mimovládne organizácie.</p><h2>Trvanie</h2><p>Ak sa obdobie odbornej prípravy uskutočňuje medzi dvoma <a href="[node:3:url]">krajinami účastniacimi sa programu</a>, musí trvať minimálne <b>2 dni</b> a maximálne <b>2 mesiace</b> (do tohto obdobia sa nezapočítava čas potrebný na cestovanie).</p><p>Ak sa obdobie odbornej prípravy uskutočňuje medzi krajinou účastniacou sa programu a partnerskou krajinou, musí trvať minimálne <b>5 <b>dn</b>í</b> a maximálne <b>2 mesiace</b> (do tohto obdobia sa nezapočítava čas potrebný na cestovanie).</p><h2>Podmienky</h2><p>Aby ste sa mohli v rámci programu Erasmus+ zúčastniť odbornej prípravy, musí byť vaša inštitúcia signatárom <a href="[node:69:url]">Charty Erasmus+ pre vysokoškolské vzdelávanie</a> (v prípade krajín účastniacich sa programu) alebo musela podpísať s prijímajúcou inštitúciou <a href="[node:71:url]">medziinštitucionálnu dohodu</a> (v prípade <a href="[node:3:url]">partnerských krajín</a>).</p><p>Vaša inštitúcia vysokoškolského vzdelávania a organizácia, v ktorej budete absolvovať odbornú prípravu, musia byť súčasťou <a href="[node:67:url]">národného konzorcia pre mobility</a>.</p><p>Pred začatím odbornej prípravy vy, vaša inštitúcia vysokoškolského vzdelávania a prijímajúca inštitúcia podpíšete <a href="[node:70:url]">zmluvu o mobilite</a>. V tomto dokumente sa uvedú ciele odbornej prípravy, práva a povinnosti a spôsob úradného uznania vašej prípravy.</p><h2>Finančná podpora</h2><p>Granty EÚ slúžia na čiastočné pokrytie <b>cestovných a životných nákladov</b> počas vášho pôsobenia v zahraničí a závisia od:</p><ol><li>prijímajúcej krajiny,</li><li>v prípade mobility v rámci krajín účastniacich sa programu – od všeobecnej úrovne dopytu zamestnancov z vašej krajiny, ktorí sa chcú zúčastniť pobytu odbornej prípravy v zahraničí,</li><li>vzdialenosti medzi vašou krajinou a prijímajúcou krajinou,</li><li>v prípade mobility v rámci krajín účastniacich sa programu – od dostupnosti iných finančných zdrojov vo vašej krajine alebo regióne.</li></ol><p>Ak sa odborná príprava v zahraničí bude vykonávať v rámci krajín účastniacich sa programu, vaša vysielajúca inštitúcia bude zodpovedná za všetky platby. Ak sa odborná príprava v zahraničí bude vykonávať medzi krajinou účastniacou sa programu a partnerskou krajinou, vaša vysielajúca a prijímajúca inštitúcia sa dohodnú na tom, kto bude vykonávať platby.</p><p>Výška grantov v prípade mobility, ktorá sa uskutočňuje medzi krajinou účastniacou sa programu a partnerskou krajinou, je uverejnená v <a href="[node:62:url]">sprievodcovi programom Erasmus+</a>. Viac informácií o platných sadzbách týkajúcich sa období odbornej prípravy v rámci krajín účastniacich sa programu nájdete na webových stránkach vašej <a href="[node:80:url]">národnej agentúry</a>. Príslušné informácie vám môže poskytnúť aj vaša vysielajúca inštitúcia vysokoškolského vzdelávania. Viac informácií o výške grantov nájdete v <a href="[node:62:url]">sprievodcovi programom Erasmus+</a><a>.</a></p><h2>Ako podať žiadosť</h2><p><span style="line-height: 28.57px; font-weight: 700;">Žiadosť o grant podáte prostredníctvom vašej inštitúcie vysokoškolského vzdelávania.</span> <abbr style="line-height: 28.57px;" title="In&#x161;tit&#xFA;cie vysoko&#x161;kolsk&#xE9;ho vzdel&#xE1;vania">Inštitúcie vysokoškolského vzdelávania</abbr> vyberajú kandidátov na odbornú prípravu spomedzi svojich zamestnancov.</p><p>Výber zamestnancov by mal byť spravodlivý, transparentný a dobre zdokumentovaný.</p><h2>Ďalšie informácie</h2><p>Kontaktujte<b> oddelenie pre medzinárodné záležitosti vašej inštitúcie vysokoškolského vzdelávania</b> a informujte sa, či môžete využiť tieto možnosti.</p><p>Ak máte otázky týkajúce sa odbornej prípravy v zahraničí alebo žiadostí, <span style="line-height: 1.4285;">kontaktujte</span> <a href="[node:80:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">národné agentúry</a> (v prípade krajín účastniacich sa programu) a <a href="[node:81:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">národné kancelárie</a> <span style="line-height: 1.4285;">(v prípade partnerských krajín)</span>. Európsku komisiu môžete <a href="[node:82:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">kontaktovať prostredníctvom služby EuropeDirect</a><span style="line-height: 1.4285;">.</span></p>',
      'summary' => NULL,
      'format' => 'full_html',
    ),
  ),
                  'sl' => array(
    array(
      'value' => '<h2>Pregled</h2><p>Program Erasmus+ podpira mobilnost za usposabljanje za zaposlene na visokošolskih ustanovah.</p><p>Program Erasmus+ podpira izpopolnjevanje na visokošolski ustanovi v <a href="[node:3:url]">državi programa Erasmus+</a> ali v gospodarski in drugi organizaciji v državi programa Erasmus+.</p><p>Takšne organizacije so denimo podjetja, javni organi, socialni partnerji, raziskovalne ustanove in nevladne organizacije.</p><h2>Trajanje</h2><p>Mobilnost za usposabljanje med dvema <a href="[node:3:url]">državama programa Erasmus+</a> mora trajati najmanj <b>2 dni</b> in največ <b>2 meseca</b>. Čas potovanja ni vključen.</p><p>Mobilnost za usposabljanje med državo programa Erasmus+ in partnersko državo mora trajati najmanj <b>5 dni</b> in največ <b>2 meseca</b>. Čas potovanja ni vključen.</p><h2>Pogoji</h2><p>Mobilnost za usposabljanje v tujini s podporo programa Erasmus+ lahko organizira samo visokošolska ustanova, ki je v državah programa nosilka <a href="[node:69:url]">listine Erasmus+ za terciarno izobraževanje</a> oziroma v <a href="[node:3:url]">partnerskih državah</a> podpisnica <a href="[node:71:url]">sporazuma med ustanovami</a>.</p><p>Visokošolska ustanova pošiljateljica in organizacija, v kateri bo potekalo izpopolnjevanje, morata biti članici <a href="[node:67:url]">nacionalnega konzorcija za mobilnost</a>.</p><p>Pred začetkom izpopolnjevanja v tujini morajo udeleženec, njegova ustanova in gostiteljska ustanova skleniti <a href="[node:70:url]">sporazum o mobilnosti</a>, v katerem so navedeni učni cilji, pravice in dolžnosti udeleženca ter način formalnega priznavanja usposabljanja v tujini.</p><h2>Finančna podpora</h2><p>Dotacije EU so namenjene kritju <b>stroškov potovanja in bivanja</b> v tujini, njihova višina pa se razlikuje glede na:</p><ol><li>namembno državo</li><li>število kandidatov za izpopolnjevanje v tujini (pri mobilnosti med državama programa Erasmus+)</li><li>razdaljo med državo pošiljateljico in državo gostiteljico</li><li>razpoložljivost drugih finančnih sredstev v državi oz. regiji pošiljateljici (pri mobilnosti med državama programa Erasmus+)</li></ol><p>Pri mobilnosti za usposabljanje med državama programa Erasmus+ je za izplačila dotacije pristojna ustanova pošiljateljica. Pri mobilnosti med državo programa Erasmus+ in partnersko državo se ustanova pošiljateljica in ustanova gostiteljica dogovorita, katera bo izplačevala dotacijo.</p><p>Višina dotacij za mobilnost med državo programa Erasmus+ in partnersko državo je navedena v <a href="[node:62:url]">vodniku za prijavitelje Erasmus+</a>. Zneski dotacij za mobilnost za usposabljanje med državama programa Erasmus+ so objavljeni na spletišču <a href="[node:80:url]">nacionalne agencije</a> in ustanove pošiljateljice.  Natančne informacije o višini dotacij so navedene v <a href="[node:62:url]">vodniku za prijavitelje Erasmus+</a>.</p><h2>Prijava</h2><p><span style="line-height: 28.57px; font-weight: 700;">Vlogo za dotacijo odda visokošolska ustanova,</span> <abbr style="line-height: 28.57px;" title=" "/> ki med zaposlenimi tudi izbere kandidate za izpopolnjevanje v tujini.</p><p>Izbor kandidatov mora biti pravičen, transparenten in natančno evidentiran.</p><h2>Več informacij</h2><p>Več o razpoložljivih možnostih boste izvedeli na <b>uradu za mednarodne izmenjave oz. Erasmus+ na vaši visokošolski ustanovi</b>.</p><p>Za pojasnila in pomoč pri prijavi se obrnite na <a href="[node:80:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">nacionalno agencijo</a> (<span style="line-height: 1.4285;">v državah programa</span>) oziroma na <a href="[node:81:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">nacionalni urad</a> (<span style="line-height: 1.4285;">v partnerskih državah</span>) ali na <a href="[node:82:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">Evropsko komisijo prek službe Europe Direct</a><span style="line-height: 1.4285;">.</span></p>',
      'summary' => NULL,
      'format' => 'full_html',
    ),
  ),
                  'sv' => array(
    array(
      'value' => '<h2>Vad går det ut på?</h2><p>Erasmus+ stöder fortbildning för universitets- och högskolepersonal vid ett lärosäte i något av <a href="[node:3:url]">program- eller partnerländerna</a> eller någon annan organisation i ett programland.</p><p>Exempel på organisationer är företag, myndigheter, fack- och arbetsgivareföreningar, forskningsinstitut och icke-statliga organisationer.</p><h2>Hur länge?</h2><p>Ett fortbildningssutbyte mellan två <a href="[node:3:url]">programländer</a> ska pågå i minst <strong>två dagar</strong> och högst <strong>två månader</strong>. Restiden är inte inräknad.</p><p>Ett fortbildningsutbyte mellan ett programland och ett partnerland ska pågå i minst <strong>fem dagar</strong> och högst <strong>två månader</strong>. Restiden är inte inräknad.</p><h2>Villkor</h2><p>Om utbytet gäller programländer måste ditt lärosäte vara anslutet till <a href="[node:69:url]">Erasmusstadgan för högre utbildning</a>. Om det gäller <a href="[node:3:url]">partnerländer</a> ska ditt lärosäte ha skrivit under ett <a href="[node:71:url]">interinstitutionellt avtal</a> med värdinstitutionen.</p><p>Din institution och den organisation där du ska fortbilda dig måste ingå i ett <a href="[node:67:url]">nationellt konsortium</a>.</p><p>Du, din heminstitution och värdorganisationen ska också skriva under ett <a href="[node:70:url]">utbytesavtal</a>. Där anges målen för utbytet, dina rättigheter och skyldigheter och hur fortbildningen erkänns.</p><h2>Bidrag</h2><p>EU bidrar till dina kostnader för <b>resa och uppehälle</b> under vistelsen. Bidragets storlek varierar och beror på</p><ol><li>vilket land du ska åka till</li><li>hur många från ditt land som vill fortbilda sig utomlands (vid utbyten mellan programländer)</li><li>avståndet till det andra landet</li><li>möjligheten att söka andra bidrag i ditt land eller din region (vid utbyten mellan programländer).</li></ol><p>Om fortbildningen är förlagd till ett annat programland är det din heminstitution som betalar ut bidraget. Om utbytet är mellan program- och partnerländer bestämmer din hem- och värdinstitution vem som ska betala ut bidraget.</p><p>Bidragsnivåerna för utbyten mellan program- och partnerländer anges i <a href="[node:62:url]">programhandledningen för Erasmus+</a>. Hör med <a href="[node:80:url]">programkontoret</a> i ditt land och din institution om du vill veta vilka bidragsnivåer som gäller för utbyten mellan två programländer. Mer information om bidragsnivåer hittar du i <a href="[node:62:url]">programhandledningen</a><a/>.</p><h2>Hur söker jag?</h2><p><span style="line-height: 28.57px; font-weight: 700;">Du ansöker om bidrag via din institution.</span> <abbr style="line-height: 28.57px;" title="">Universitet och högskolor</abbr> väljer ut deltagare bland sin personal.</p><p>Urvalet ska vara rättvist, öppet och väldokumenterat.</p><h2>Mer information</h2><p>Kontakta <b>din institutions internationella kontor eller Erasmuskontor </b>för att ta reda på vilka möjligheter som finns.</p><p>Om du behöver mer hjälp kan du vända dig till <span style="line-height: 1.4285;"/><a href="[node:80:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">programkontoren</a><span style="line-height: 1.4285;"> i programländerna eller </span><a href="[node:81:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">Erasmuskontoren</a><span style="line-height: 1.4285;"> i partnerländerna (om de finns). Du kan också kontakta kommissionen genom </span><a href="[node:82:url]" style="line-height: 1.4285; background-color: rgb(255, 255, 255);">Europa direkt</a><span style="line-height: 1.4285;">.</span></p>',
      'summary' => NULL,
      'format' => 'full_html',
    ),
  ),
                ),
                'field_individuals_level' => array(
    LANGUAGE_NONE => array(
      array(
        'value' => '2',
      ),
    ),
  ),
                'title_field' => array(
    'bg' => array(
      array(
        'value' => 'Висше образование',
        'format' => NULL,
        'safe_value' => 'Висше образование',
      ),
    ),
    'cs' => array(
      array(
        'value' => 'Vysoké školy',
        'format' => NULL,
        'safe_value' => 'Vysoké školy',
      ),
    ),
    'da' => array(
      array(
        'value' => 'Videregående uddannelser',
        'format' => NULL,
        'safe_value' => 'Videregående uddannelser',
      ),
    ),
    'de' => array(
      array(
        'value' => 'Hochschulbildung',
        'format' => NULL,
        'safe_value' => 'Hochschulbildung',
      ),
    ),
    'el' => array(
      array(
        'value' => 'Ανώτατη εκπαίδευση',
        'format' => NULL,
        'safe_value' => 'Ανώτατη εκπαίδευση',
      ),
    ),
    'en' => array(
      array(
        'value' => 'Higher education',
        'format' => NULL,
        'safe_value' => 'Higher education',
      ),
    ),
    'es' => array(
      array(
        'value' => 'Enseñanza superior',
        'format' => NULL,
        'safe_value' => 'Enseñanza superior',
      ),
    ),
    'et' => array(
      array(
        'value' => 'Kõrgharidus',
        'format' => NULL,
        'safe_value' => 'Kõrgharidus',
      ),
    ),
    'fi' => array(
      array(
        'value' => 'Korkea-asteen koulutus',
        'format' => NULL,
        'safe_value' => 'Korkea-asteen koulutus',
      ),
    ),
    'fr' => array(
      array(
        'value' => 'Enseignement supérieur',
        'format' => NULL,
        'safe_value' => 'Enseignement supérieur',
      ),
    ),
    'ga' => array(
      array(
        'value' => 'Ardoideachas',
        'format' => NULL,
        'safe_value' => 'Ardoideachas',
      ),
    ),
    'hr' => array(
      array(
        'value' => 'Visoko obrazovanje',
        'format' => NULL,
        'safe_value' => 'Visoko obrazovanje',
      ),
    ),
    'hu' => array(
      array(
        'value' => 'Felsőoktatás',
        'format' => NULL,
        'safe_value' => 'Felsőoktatás',
      ),
    ),
    'it' => array(
      array(
        'value' => 'Istruzione superiore',
        'format' => NULL,
        'safe_value' => 'Istruzione superiore',
      ),
    ),
    'lt' => array(
      array(
        'value' => 'Aukštasis mokslas',
        'format' => NULL,
        'safe_value' => 'Aukštasis mokslas',
      ),
    ),
    'lv' => array(
      array(
        'value' => 'Augstākā izglītība',
        'format' => NULL,
        'safe_value' => 'Augstākā izglītība',
      ),
    ),
    'mt' => array(
      array(
        'value' => 'Edukazzjoni għolja',
        'format' => NULL,
        'safe_value' => 'Edukazzjoni għolja',
      ),
    ),
    'nl' => array(
      array(
        'value' => 'Instellingen voor hoger onderwijs',
        'format' => NULL,
        'safe_value' => 'Instellingen voor hoger onderwijs',
      ),
    ),
    'pl' => array(
      array(
        'value' => 'Szkolnictwo wyższe',
        'format' => NULL,
        'safe_value' => 'Szkolnictwo wyższe',
      ),
    ),
    'pt' => array(
      array(
        'value' => 'Ensino superior',
        'format' => NULL,
        'safe_value' => 'Ensino superior',
      ),
    ),
    'ro' => array(
      array(
        'value' => 'Învățământ superior',
        'format' => NULL,
        'safe_value' => 'Învățământ superior',
      ),
    ),
    'sk' => array(
      array(
        'value' => 'Vysokoškolské vzdelávanie',
        'format' => NULL,
        'safe_value' => 'Vysokoškolské vzdelávanie',
      ),
    ),
    'sl' => array(
      array(
        'value' => 'Visokošolsko izobraževanje',
        'format' => NULL,
        'safe_value' => 'Visokošolsko izobraževanje',
      ),
    ),
    'sv' => array(
      array(
        'value' => 'Högre utbildning',
        'format' => NULL,
        'safe_value' => 'Högre utbildning',
      ),
    ),
  ),
                'translations' => (object) array(
    'original' => 'en',
    'data' => array(
      'bg' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'bg',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1460018406',
        'changed' => '1460018406',
      ),
      'cs' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'cs',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1460174533',
        'changed' => '1460174533',
      ),
      'da' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'da',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1460111041',
        'changed' => '1460111041',
      ),
      'de' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'de',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1460030287',
        'changed' => '1460030287',
      ),
      'el' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'el',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1460100623',
        'changed' => '1460100623',
      ),
      'en' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'en',
        'source' => '',
        'uid' => '2',
        'status' => '1',
        'translate' => '0',
        'created' => '1453198669',
        'changed' => '1461933818',
      ),
      'es' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'es',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1460023328',
        'changed' => '1460023328',
      ),
      'et' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'et',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1460130843',
        'changed' => '1460130843',
      ),
      'fi' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'fi',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1461752168',
        'changed' => '1461752168',
      ),
      'fr' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'fr',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1460110323',
        'changed' => '1460110323',
      ),
      'ga' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'ga',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1461156363',
        'changed' => '1461156363',
      ),
      'hr' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'hr',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1460127616',
        'changed' => '1460127616',
      ),
      'hu' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'hu',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1460137089',
        'changed' => '1460137089',
      ),
      'it' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'it',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1460127760',
        'changed' => '1460127760',
      ),
      'lt' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'lt',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1460118840',
        'changed' => '1460118840',
      ),
      'lv' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'lv',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1460129529',
        'changed' => '1460129529',
      ),
      'mt' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'mt',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1460037133',
        'changed' => '1460037133',
      ),
      'nl' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'nl',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1460119085',
        'changed' => '1460119085',
      ),
      'pl' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'pl',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1460130251',
        'changed' => '1460130251',
      ),
      'pt' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'pt',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1460131578',
        'changed' => '1460131578',
      ),
      'ro' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'ro',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1460133720',
        'changed' => '1460133720',
      ),
      'sk' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'sk',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1460136842',
        'changed' => '1460136842',
      ),
      'sl' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'sl',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1460106962',
        'changed' => '1460106962',
      ),
      'sv' => array(
        'entity_type' => 'node',
        'entity_id' => '21',
        'revision_id' => '1369',
        'language' => 'sv',
        'source' => 'en',
        'uid' => '0',
        'status' => '1',
        'translate' => '0',
        'created' => '1460118485',
        'changed' => '1460118485',
      ),
    ),
  ),
                'title_original' => 'Higher education',
                'entity_translation_handler_id' => 'node-opportunities_for_individuals-eid-21-1369',
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
    'pathauto' => '0',
  ),
                'cid' => '0',
                'last_comment_timestamp' => '1453198669',
                'last_comment_name' => NULL,
                'last_comment_uid' => '2',
                'comment_count' => '0',
                'name' => 'user_administrator',
                'picture' => '55',
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
              ),
            ),
            'category' => 'before',
            'rectors_question' => 'third',
          ),
        ),
        15 => array(

    'cid' => '15',
    'pid' => '0',
    'form_key' => 'your_institution_has_adopted_formal_selection_procedures_for_erasmus_activities_which',
    'name' => '5| Your institution has adopted formal selection procedures for Erasmus+ mobility, which:',
    'type' => 'select',
    'value' => '',
    'extra' => array(
      'items' => "1|Are applied at all levels, including each participating department / faculty\r\n2|Ensure a fair, transparent, coherent and documented selection of participants\r\n3|Include clear mechanisms for participants (outgoing and incoming) to appeal if they feel unfairly treated / discriminated against\r\n4|Ensure that the selection and appeal procedures are publically available for all participants\r\n",
      'multiple' => 1,
      'title_display' => 'before',
      'description_above' => 0,
      'private' => 0,
      'wrapper_classes' => 'question',
      'css_classes' => 'question__items',
      'aslist' => 0,
      'empty_option' => '',
      'optrand' => 0,
      'other_option' => NULL,
      'other_text' => 'Other...',
      'description' => '',
      'custom_keys' => FALSE,
      'options_source' => '',
      'analysis' => TRUE,
    ),
    'required' => '0',
    'weight' => '42',
    'page_num' => 3,
    '#meta' => array(

      'cid' => '15',
      'answers' => array(
        1 => array(
          'value' => 1,
          'type' => 'select',
          'text' => array(
            'value' => '<p>Selection procedures should be published, and clearly explain the rationale for those procedures. These should be applied at all relevant levels, including at department or faculty levels, in order to ensure consistency and transparency throughout the different levels of the institution.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        2 => array(
          'value' => 2,
          'type' => 'select',
          'text' => array(
            'value' => '<p>The Institution has to organise the selection of mobile staff and students and the award of grants in a fair, transparent, coherent and documented way. The Institution should have measures in place to ensure that any individual or group will be treated equally. Selection procedures should be published, and clearly explain the rationale for those procedures.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'high',
        ),
        3 => array(
          'value' => 3,
          'type' => 'select',
          'text' => array(
            'value' => '<p>It is highly important that there is an unambiguous appeal procedure in place for both outgoing and incoming participants if they feel unfairly treated or discriminated against.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        4 => array(
          'value' => 4,
          'type' => 'select',
          'text' => array(
            'value' => '<p>The selection and appeal procedures of the sending institution should be published in an easy to find place and in an easily accessible format. Ideally, this would be on a prominent place on the sending institution&#39;s website. Contact details for relevant individuals in this process should also be included on the website.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
      ),
      'case_studies' => array(
        276 => (object) array(
          'vid' => '1533',
          'uid' => '1',
          'title' => 'Adoption of formal selection procedures for Erasmus+ activities',
          'log' => '',
          'status' => '1',
          'comment' => '1',
          'promote' => '0',
          'sticky' => '0',
          'vuuid' => '4ebf2628-e985-4027-aab5-fe64b3325e62',
          'nid' => '276',
          'type' => 'case_study',
          'language' => 'en',
          'created' => '1483972934',
          'changed' => '1484234177',
          'tnid' => '0',
          'translate' => '0',
          'uuid' => 'd790c432-adeb-40ee-b390-64e621abba5c',
          'revision_timestamp' => '1484234177',
          'revision_uid' => '1',
          'body' => array(
            'en' => array(
              array(
                'value' => '<p>The application process of Baden-Wuerttemberg Cooperative State University (DHBW) is formal and clearly communicated. It is made&nbsp;<strong>easy for students to follow and feel confident to apply</strong>&nbsp;and meet the requirements.</p><ul><li>DHBW Loerrach has identified&nbsp;<strong>four equally weighted selection criteria</strong>: i) Motivation, ii) Academic Performance, iii) Language Competence in the host &nbsp;language of instruction (minimum&nbsp; level B2) and iv) Volunteer Work. To minimise the scope for interpretation, two of the four selection criteria are objectively comparable (academic grades and the language test).</li><li><strong>Students submit</strong>&nbsp;a Letter of Motivation in the receiving institution’s language of instruction, a Transcript of Records, an official Language certificate, and a CV in the language of instruction - including any kind of volunteer work.</li><li>Applicants take an&nbsp;<strong>oral and computer based language test</strong></li><li>The language test evaluates four competences according to the Common European Framework of Reference for Languages. The&nbsp;<strong>test is offered monthly&nbsp;</strong>throughout the year in English and upon pre-registration in all other relevant languages. Students are not charged any fees for the language test.</li></ul><p>DHBW Loerrach&nbsp;<strong>reviews and develops its selection procedures</strong>. The institute found that to offer a truly fair, transparent and structured process, there should be no exceptions during the selection process. The University communicates selection criteria in an understandable and clear way to make them accessible for all students.</p><ul><li>The&nbsp;<strong>selection committee consists of internationally-experienced professors</strong>&nbsp;from different departments and the&nbsp;<strong>head of the International Office</strong>. Each member&nbsp; evaluates all selection criteria and creates her/his own ranking list.</li><li>Normally the members agree which students should be selected, and to date there have been no interview applicants. However, the University suggests that this could be helpful in establishing the motivation of students.</li></ul>',
                'summary' => '',
                'format' => 'full_html',
              ),
            ),
          ),
          'field_case_study_contact' => array(),
          'field_case_study_contact_email' => array(
            LANGUAGE_NONE => array(
              array(
                'email' => 'goertz@dhbw-loerrach.de   ',
              ),
            ),
          ),
          'field_case_study_contact_name' => array(
            LANGUAGE_NONE => array(
              array(
                'value' => 'Britta Goertz ',
                'format' => NULL,
                'safe_value' => 'Britta Goertz ',
              ),
            ),
          ),
          'field_case_study_country' => array(
            LANGUAGE_NONE => array(
              array(
                'iso2' => 'DE',
              ),
            ),
          ),
          'field_case_study_further_reading' => array(
            LANGUAGE_NONE => array(
              array(
                'url' => 'http://www.dhbw-loerrach.de',
                'title' => 'In German',
                'attributes' => array(),
              ),
              array(
                'url' => 'http://www.dhbw-loerrach.de/welcome.html',
                'title' => 'English - selected topics',
                'attributes' => array(),
              ),
              array(
                'url' => 'http://www.dhbw-loerrach.de/auslandsaufenthalte.html',
                'title' => 'Information for outgoing students - under construction',
                'attributes' => array(),
              ),
            ),
          ),
          'field_case_study_introduction' => array(),
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
                'value' => 'Baden-Wuerttemberg Cooperative State University / Duale Hochschule Baden-Württemberg DHBW, Loerrach',
                'format' => NULL,
                'safe_value' => 'Baden-Wuerttemberg Cooperative State University / Duale Hochschule Baden-Württemberg DHBW, Loerrach',
              ),
            ),
          ),
          'field_case_study_about' => array(
            LANGUAGE_NONE => array(
              array(
                'value' => '<p>The Baden-Wuerttemberg Cooperative State University (Duale Hochschule Baden-Württemberg / DHBW) is the first higher education institution in Germany to combine on-the-job training and academic studies and, therefore, achieves a close integration of theory and practice.</p><table class="centered"><tbody><tr><th>Key figures</th></tr><tr><td><ul><li>34,000 students</li></ul></td></tr><tr><td><ul><li>650 academic staff</li></ul></td></tr></tbody></table>',
                'summary' => '',
                'format' => 'full_html',
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
            'pathauto' => '1',
          ),
          'cid' => '0',
          'last_comment_timestamp' => '1483972934',
          'last_comment_name' => NULL,
          'last_comment_uid' => '1',
          'comment_count' => '0',
          'name' => 'fpfis-admin',
          'picture' => '0',
          'data' => 'a:1:{s:7:"contact";i:1;}',
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
        ),
      ),
      'category' => 'before',
      'rectors_question' => 'second',
    ),
  ),
        6 => array(

    'cid' => '6',
    'pid' => '0',
    'form_key' => 'before_the_mobility_your_institution_provides_support_to_incoming_and_outgoing_students_and_staff',
    'name' => '6| Before the mobility, your institution provides the following support to incoming and outgoing students and staff:',
    'type' => 'select',
    'value' => '',
    'extra' => array(
      'items' => "1|For outgoing participants, opportunities to attain the recommended level of linguistic proficiency, as agreed with the receiving institution/organisation/enterprise, before the start of the mobility\r\n2|Clear and comprehensive information and necessary assistance are provided on visa requirements for mobile participants\r\n3|Clear and comprehensive information and the necessary assistance about insurance coverage requirements for mobile participants\r\n4|Clear and comprehensive information on the institutional website on accommodation options available sufficiently in advance of the mobility\r\n5|Assistance for incoming participants in finding accommodation, e.g. through cooperation with the local student organisations\r\n6|Preparation for cultural challenges, such as lectures on intercultural communication, meetings or discussion groups with former participants, on-line archives with feedback from former participants, social networking, etc.\r\n",
      'multiple' => 1,
      'title_display' => 'before',
      'description_above' => 0,
      'private' => 0,
      'wrapper_classes' => 'question',
      'css_classes' => 'question__items',
      'aslist' => 0,
      'empty_option' => '',
      'optrand' => 0,
      'other_option' => NULL,
      'other_text' => 'Other...',
      'description' => '',
      'custom_keys' => FALSE,
      'options_source' => '',
      'analysis' => TRUE,
    ),
    'required' => '0',
    'weight' => '43',
    'page_num' => 3,
    '#meta' => array(

      'cid' => '6',
      'answers' => array(
        1 => array(
          'value' => 1,
          'type' => 'select',
          'text' => array(
            'value' => '<p>Language preparation is a crucial element to ensure success in staff and student mobility outcomes. Both sending and receiving partners should agree on the recommended language level in the language of instruction/work of mobile students and staff. This level should be expressed according to the Common European Framework of Reference for Languages (CEFR): <a href="https://europass.cedefop.europa.eu/en/resources/european-language-levels-cefr">https://europass.cedefop.europa.eu/en/resources/european-language-levels-cefr</a></p><p>The recommended language level should be agreed in the Inter-Institutional Agreement of the sending and receiving institutions for student mobility for studies. Similarly, a recommended language level should be agreed between the sending institution and the receiving organisation/enterprise for student mobility for traineeships, to ensure a proper integration of the trainee in the organisation/enterprise. The sending institution is responsible for providing support to its selected candidates so that they can have the recommended language skills at the start of the mobility period.</p><p><span style="font-size: 13.008px; line-height: 1.538em;">The Erasmus+ Online Linguistic Support (OLS) has been designed to assist Erasmus+ participants in improving their knowledge of the main language of instruction/work, before and during their stay abroad, to ensure a better quality of learning mobility: <a href="http://erasmusplusols.eu">http://erasmusplusols.eu</a></span></p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'high',
        ),
        2 => array(
          'value' => 2,
          'type' => 'select',
          'text' => array(
            'value' => '<p>The sending and receiving HEIs should assist mobile staff and students who require a visa. The website of the receiving HEI should provide mobile participants with information about visa requirements and the time necessary for a visa application. In addition, details should be provided on the website of the relevant contact person (title, function) at the receiving HEI who can assist in solving visa-related issues, with a description of the services offered and the support that can be provided, where possible. The sending and receiving HEIs should assist mobile staff and students who require a visa by issuing, in a timely manner, the documentation required for the visa application (e.g. letters confirming the staff / students&#39; status at the HEI, letters of invitation, etc.). In cases where it proves difficult to obtain visas (e.g. where diplomatic missions are not located in the countries of residence, in situations where postal applications are not accepted, etc.), HEIs should attempt to provide assistance by contacting diplomatic representations in order to help ease the process.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        3 => array(
          'value' => 3,
          'type' => 'select',
          'text' => array(
            'value' => '<p>The sending institution and receiving institution/organisation/enterprise should provide clear and comprehensive information on insurance coverage requirements to mobile participants, including those cases where specific types of insurance are required, e.g. medical insurance in those countries not covered by reciprocal national medical insurance agreements, or accident / third party insurance where such insurance is required for the planned mobility activities. For student mobility for traineeships, it is highly recommended that either the sending institution or the receiving organisation/enterprise provide insurance coverage to the trainee and include this information in the Learning Agreement. The trainee must be covered at least by an accident insurance (damages caused to the trainee at the workplace) and by a liability insurance (damages caused by the trainee at the workplace).</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        4 => array(
          'value' => 4,
          'type' => 'select',
          'text' => array(
            'value' => '<p>To best assist mobile participants, the receiving organisation should explain to the mobile participants what accommodation options are open to them at - or in the vicinity of - the HEI. It should be made clear to mobile participants what the conditions for renting accommodation are, in order to minimise any problems upon their arrival including:</p><ul><li>Costs,</li><li>Registration and accommodation contract details,</li><li>Relevant responsibilities of the participants.</li></ul><p>This should be done well in advance of the mobility period. Information on accommodation should be available on the receiving HEI&rsquo;s website, along with the contact details of their accommodation officer. In addition, the sending HEI may assist the mobile participants in their search for accommodation by contacting their counterparts at the receiving organisation or by providing contact details of former mobile participants.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        5 => array(
          'value' => 5,
          'type' => 'select',
          'text' => array(
            'value' => '<p>Local student organisations (such as ESN - Erasmus Student Network and the other associations&rsquo; member of the ESAA - Erasmus+ Student and Alumni Association <a href="http://esaa-eu.org/">http://esaa-eu.org/</a>) can be an important source of assistance in finding accommodation for incoming mobile participants. Therefore, the receiving HEI could cooperate with local student organisations to help incoming mobile participants finding the right accommodation.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        6 => array(
          'value' => 6,
          'type' => 'select',
          'text' => array(
            'value' => '<p>The sending institution should ensure that their outgoing mobile staff and students are given sufficient preparation for cultural challenges. This includes:</p><ul><li>Preparation for the different organisational cultures between the sending institution and the receiving institution/organisation/enterprise,</li><li>Different cultures in the sending and receiving countries,</li><li>Cultural challenges which will be encountered during the mobility.</li></ul><p>This preparation can take different forms, such as lectures on intercultural communication, meetings or discussion groups with former mobile staff and students, on-line archives of feedback from former mobility participants, and social networking.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
      ),
      'case_studies' => array(
        277 => (object) array(
          'vid' => '1534',
          'uid' => '1',
          'title' => 'Providing support to incoming and outgoing students and staff before mobility periods',
          'log' => '',
          'status' => '1',
          'comment' => '1',
          'promote' => '0',
          'sticky' => '0',
          'vuuid' => 'af686676-3342-4559-98a1-b1991e8413e8',
          'nid' => '277',
          'type' => 'case_study',
          'language' => 'en',
          'created' => '1483973053',
          'changed' => '1484234356',
          'tnid' => '0',
          'translate' => '0',
          'uuid' => '21288977-e662-4d51-84e4-f1bf3172360d',
          'revision_timestamp' => '1484234356',
          'revision_uid' => '1',
          'body' => array(
            'en' => array(
              array(
                'value' => '<p>The&nbsp;<strong>Université catholique de Louvain&nbsp;</strong>(UCL) provides preparatory support to mobility participants. It uses an&nbsp;<strong>IT tool to manage the academic lifecycle of mobile and non-mobile students</strong>, and has the Erasmus Online Linguistic Support (OLS) system integrated as well. Students who choose a mobile learning track submit an online learning agreement proposal. The system manages the proposal workflow and tracks all changes and comments. Following the approval of the Learning Agreement and the achievement of the credits,&nbsp;<strong>academic recognition is automatic and the mobility period appears on the Diploma Supplement</strong>.</p><ul><li>The&nbsp;<strong>IT tool draws together and checks multiple interdependent workflows</strong>: enrolment status of the student, selection of the mobility, compatibility of the destination and degree programme, e-validation and/or signature of the Learning Agreement, and the status of the mobility period (expected/started/ended). Each of these workflows are checked before mobility grants are awarded and paid.</li><li>The IT tool&nbsp;<strong>facilitates contact</strong>&nbsp;with the student regarding OLS far in advance – usually at least half a year - of the proposed mobility</li><li><strong>Students receive an e-mai</strong>l to introduce OLS and make them aware that it is compulsory. Early contact has reinforced the understanding that OLS being is an integral part of the Erasmus contract</li><li>The e-mail gives a link to an&nbsp;<strong>electronic form</strong>, which collects additional student data and their preferences. The possibility to indicate their preferences makes students “participants” in their OLS project, and they tend to adhere to their choice</li></ul><p>To integrate these services, UCL established a regular data exchange between the internal IT system and the OLS backend. The integration of OLS into UCL’s IT workflows was&nbsp;<strong>supported by senior management</strong>. Recognising that IT development is necessary for managing large numbers of students and interdependent workflows, part of the funding for internationalisation, envisaged in the UCL Strategic Plan 2020, will be allocated to further IT development.</p><p>The active collaboration of UCL’s faculties is crucial for the integration of OLS work in day-to-day operations. This is facilitated by regular meetings with faculty representatives and a standing agenda update on OLS.</p>',
                'summary' => '',
                'format' => 'full_html',
              ),
            ),
          ),
          'field_case_study_contact' => array(),
          'field_case_study_contact_email' => array(
            LANGUAGE_NONE => array(
              array(
                'email' => 'erasmus@uclouvain.be ',
              ),
            ),
          ),
          'field_case_study_contact_name' => array(),
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
                'url' => 'http://www.uclouvain.be',
                'title' => '',
                'attributes' => array(),
              ),
              array(
                'url' => 'http://erasmusplusols.eu',
                'title' => '',
                'attributes' => array(),
              ),
            ),
          ),
          'field_case_study_introduction' => array(),
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
                'value' => 'Université catholique de Louvain (UCL)',
                'format' => NULL,
                'safe_value' => 'Université catholique de Louvain (UCL)',
              ),
            ),
          ),
          'field_case_study_about' => array(
            LANGUAGE_NONE => array(
              array(
                'value' => '<table class="centered"><tbody><tr><th>Key figures</th></tr><tr><td><ul><li>30,000 students</li></ul></td></tr><tr><td><ul><li>6,000 staff</li></ul></td></tr></tbody></table>',
                'summary' => '',
                'format' => 'full_html',
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
            'pathauto' => '1',
          ),
          'cid' => '0',
          'last_comment_timestamp' => '1483973053',
          'last_comment_name' => NULL,
          'last_comment_uid' => '1',
          'comment_count' => '0',
          'name' => 'fpfis-admin',
          'picture' => '0',
          'data' => 'a:1:{s:7:"contact";i:1;}',
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
        ),
      ),
      'category' => 'before',
      'rectors_question' => 'third',
    ),
  ),
        18 => array(

    'cid' => '18',
    'pid' => '0',
    'form_key' => 'page_3',
    'name' => 'Page 3',
    'type' => 'pagebreak',
    'value' => '',
    'extra' => array(
      'private' => 0,
      'next_page_label' => '',
      'prev_page_label' => '',
    ),
    'required' => '0',
    'weight' => '44',
    'page_num' => 4,
    '#meta' => array(),
  ),
        7 => array(

    'cid' => '7',
    'pid' => '0',
    'form_key' => 'your_institution_provides_specific_support_for_incoming_and_outgoing_mobility_participants',
    'name' => '7| Your institution provides specific support for incoming and outgoing mobility participants from underrepresented groups (students or staff with special needs, students from lower socio-economic backgrounds, with family responsibilities or with part-time jobs, etc.), which includes:',
    'type' => 'select',
    'value' => '',
    'extra' => array(
      'items' => "1|Specific support services and/or structures (e.g. by appointing a counsellor or officer for those target groups)\r\n2|Cooperation of the Erasmus+ coordinator with the person/office in charge of these target groups (e.g. Special Needs Office) in relation to the promotion, selection and management of the learning mobility\r\n3|The use of adapted and flexible learning / teaching environments\r\n4|Information provided on the institution's website, social media, publications, promotional activities and events for incoming and outgoing participants from underrepresented groups\r\n5|Dedicated human resources and/or financial support for students and staff with special needs, such as the Erasmus+ special needs grant or any other resources\r\n6|Dedicated human resources and/or financial support for participants from under-represented groups other than those with special needs (e.g. students from lower socio-economic backgrounds, participants with family responsibilities, part-time jobs, etc.), such as Erasmus+ top-up grants or any other resources\r\n",
      'multiple' => 1,
      'title_display' => 'before',
      'description_above' => 0,
      'private' => 0,
      'wrapper_classes' => 'question',
      'css_classes' => 'question__items',
      'aslist' => 0,
      'empty_option' => '',
      'optrand' => 0,
      'other_option' => NULL,
      'other_text' => 'Other...',
      'description' => '',
      'custom_keys' => FALSE,
      'options_source' => '',
      'analysis' => TRUE,
    ),
    'required' => '0',
    'weight' => '45',
    'page_num' => 4,
    '#meta' => array(

      'cid' => '7',
      'answers' => array(
        1 => array(
          'value' => 1,
          'type' => 'select',
          'text' => array(
            'value' => '<p>To ensure fair and equitable opportunities to all potential participants, including those from groups which are usually under-represented in mobility programmes (students or staff with special needs, students from lower socio-economic backgrounds, with family responsibilities or with part-time jobs, etc.), it is important for institutions to devise and publicise a system that actively promotes mobility opportunities to students from these groups and ensures that their needs can be supported and their privacy respected.</p><p>This may be supported by inviting all those applying to the mobility programme to disclose whether they belong to an under-represented group, so that appropriate support can be provided at the receiving organisation.</p><p>Targeted support services may include, but are not limited to:</p><ul><li>Appointing a counsellor or officer for these under-represented groups,</li><li>Developing and delivering courses and exams through specific learning and teaching approaches</li><li>Developing specific support services, e.g. for people with special needs. Incoming participants with special needs have the right to benefit from the same support services that the receiving institution offers to its local students and staff.</li></ul>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'high',
        ),
        2 => array(
          'value' => 2,
          'type' => 'select',
          'text' => array(
            'value' => '<p>It is important for mobile participants to have easy access to the required support before and during their period abroad. For example, incoming participants with special needs have equal rights to access all of the existing support services that the receiving institution offers to its local students and staff. In this case, the link between the Erasmus+ coordinator and the person/office in charge of these target groups (e.g. Special Needs Office) is vital to provide these participants with transparent and complete information on the support services available at the sending and receiving institutions before and during their mobility period. Thus, institutions are encouraged to establish a dialogue between the Erasmus+ coordinator and the person/office in charge of these target groups, e.g. through regular meetings or informal exchanges of information.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        3 => array(
          'value' => 3,
          'type' => 'select',
          'text' => array(
            'value' => '<p>In order to be inclusive, HEIs should explore how to create an environment adapted to participants from disadvantaged groups, which can include promoting blended mobility (i.e. short-term physical mobility combined with virtual mobility) through Erasmus+ Strategic Partnerships.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        4 => array(
          'value' => 4,
          'type' => 'select',
          'text' => array(
            'value' => '<p>The available support for under-represented groups should be developed and widely promoted - including on the institution&#39;s website, through social media and publications, promotional activities and events. This will ensure that individuals within the target groups can easily locate and utilise the information.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        5 => array(
          'value' => 5,
          'type' => 'select',
          'text' => array(
            'value' => '<p>Support for individuals with special needs may include, among others, additional financial support such as the Erasmus+ special needs grant; appointing a counsellor or officer for participants with special needs; developing adapted and flexible learning and teaching techniques; promoting blended mobility (short-term physical mobility combined with virtual mobility) through Erasmus+ Strategic Partnerships; providing additional time during examinations; developing specific support services. Incoming participants with special needs have the right to benefit from the same support services that the receiving institution offers to its local students and staff.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        6 => array(
          'value' => 6,
          'type' => 'select',
          'text' => array(
            'value' => '<p>Within the framework of the Erasmus+ Programme, HEIs are able and encouraged to further develop and advance their non-discrimination policies. This will widen access to mobility for under-represented groups (other than those with special needs), such as to students from disadvantaged backgrounds, participants with family responsibilities, etc. Specific support for these groups may include, among others, the Erasmus+ additional support for students from disadvantaged backgrounds; appointing a counsellor or officer for these under-represented groups; developing adapted and flexible learning and teaching techniques; promoting blended mobility (short-term physical mobility combined with virtual mobility) through Erasmus+ Strategic Partnerships; providing additional time during examinations; developing specific support services. Incoming participants from these groups have the right to benefit from the same support services that the receiving institution offers to its local students and staff.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
      ),
      'case_studies' => array(
        278 => (object) array(
          'vid' => '1535',
          'uid' => '1',
          'title' => 'Increasing participation of students with disabilities in higher education and international mobility – the INnetCAMPUS project',
          'log' => '',
          'status' => '1',
          'comment' => '1',
          'promote' => '0',
          'sticky' => '0',
          'vuuid' => '2c41858a-2e0a-4d61-b194-6c89f747bb60',
          'nid' => '278',
          'type' => 'case_study',
          'language' => 'en',
          'created' => '1483973228',
          'changed' => '1484234533',
          'tnid' => '0',
          'translate' => '0',
          'uuid' => 'c1f58a79-88e5-4e89-b5ec-e93ca1aa9d15',
          'revision_timestamp' => '1484234533',
          'revision_uid' => '1',
          'body' => array(
            'en' => array(
              array(
                'value' => '<p>Funded through the Erasmus+ Programme (Key Action 2 Project),&nbsp;<strong>INnetCAMPUS is a project for young students</strong>&nbsp;(15-18 years of age) with disabilities attending High School or Vocational Training Courses. It was established to:</p><ul><li>Encourage students with disabilities and from disadvantaged backgrounds to continue to higher education</li><li>Sensitise the university community to the needs of students with disabilities</li><li>Identify improvement opportunities aimed at developing protocols for students with disabilities in the university environment.</li></ul><p>The University of Granada, Artesis Plantijn University College of Antwerp and the University of Lisbon Law School worked in collaboration with academic and administrative staff, secondary education institutions and organisations supporting the disability movement. &nbsp;The&nbsp;<strong>Fundación ONCE is the coordinator</strong>&nbsp;of the INnetCAMPUS project. As part of the project, each of the three universities provided support, including personal assistants and supervisors for students, while trip-related expenses were covered by the project budget.</p><p>During the summer period, July – September 2016, groups of&nbsp;<strong>15 students spent&nbsp;</strong><strong>five days</strong>&nbsp;each at one of the three partner universities. In addition, local university students participated in the project activities. The students lived together in university hostels.</p><p>Each university designed its own academic and cultural programme, based on their facilities and characteristics to give participants&nbsp;<strong>an experience of university life and enhance interaction among students</strong>. For example, at UGT, the programme included:</p><ul><li>The University: a personal and social experience</li><li>Careers workshop</li><li>Group dynamics workshop</li><li>Field of study-specific workshops, eg Approach to Health Sciences; Physics and Experimental Sciences</li><li>Resources for an Inclusive University</li><li>Meeting with university students with different capacities</li><li>Meeting with ERASMUS students</li><li>Activities in the Historical Memory Museum of Andalucia</li><li>Audio Description of Artworks workshop</li><li>Guided tour of the Alhambra</li><li>Accessible hiking and learning about the importance of endemic species</li><li>Yoga for Everyone and Mindfulness</li></ul><p><strong>Each activity was evaluated</strong>&nbsp;by students and staff on a set of characteristics:</p><ul><li>The effectiveness of the speaker and his/her ability to adapt to the different capacities of the students</li><li>The appropriateness of the methodology</li><li>The achievement of objectives</li><li>The level of inclusivity of the activity</li><li>The level of student participation, and</li><li>The level of interest or motivation of the workshop participants.</li></ul><p>An average score of 4.67 out of 5 was achieved. The project proceeded smoothly with fewer problems than expected and&nbsp; at the end of the week, the student group had established a strong sense of community.</p><p>The&nbsp;<strong>project helped participating universities to improve their support services</strong>&nbsp;for persons with disabilities, through contact with other European professionals and their good practice. &nbsp;At the end of the project, two documents combining all experiences and findings will be published, the “Impact analysis and results assessment memorandum” and a “Methodological guide for awareness activities on post compulsory education”.</p><p>The&nbsp;<strong>project will continue in 2017</strong>&nbsp;with slight modifications due to the insights gained during the first year. For example it will incorporate more leisure activities and an earlier call for applications.&nbsp;</p>',
                'summary' => '',
                'format' => 'full_html',
              ),
            ),
          ),
          'field_case_study_contact' => array(),
          'field_case_study_contact_email' => array(
            LANGUAGE_NONE => array(
              array(
                'email' => 'intlinfo@ugr.es ',
              ),
            ),
          ),
          'field_case_study_contact_name' => array(),
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
                'url' => 'http://inclusion.ugr.es/pages/innetcampus/call_of_participation_innetcampusdefinitive/!',
                'title' => '',
                'attributes' => array(),
              ),
              array(
                'url' => 'http://www.servimedia.es/Noticias/Detalle.aspx?n=600082',
                'title' => '',
                'attributes' => array(),
              ),
            ),
          ),
          'field_case_study_introduction' => array(),
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
                'value' => 'University of Granada / University of Lisbon / Artesis Plantijn University College of Antwerp',
                'format' => NULL,
                'safe_value' => 'University of Granada / University of Lisbon / Artesis Plantijn University College of Antwerp',
              ),
            ),
          ),
          'field_case_study_about' => array(),
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
            'pathauto' => '1',
          ),
          'cid' => '0',
          'last_comment_timestamp' => '1483973228',
          'last_comment_name' => NULL,
          'last_comment_uid' => '1',
          'comment_count' => '0',
          'name' => 'fpfis-admin',
          'picture' => '0',
          'data' => 'a:1:{s:7:"contact";i:1;}',
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
        ),
      ),
      'category' => 'before',
      'rectors_question' => 'second',
    ),
  ),
        8 => array(

    'cid' => '8',
    'pid' => '0',
    'form_key' => 'your_institution_has_established_formal_procedures_for_recognising_student_mobility',
    'name' => '8| Your institution has established formal procedures for recognising student mobility:',
    'type' => 'select',
    'value' => '',
    'extra' => array(
      'items' => "1|Which are made publically available on the institution's website\r\n2|Ensuring that the mobile participant, sending and receiving HEI/organisation/enterprise (i.e. all three parties) sign the Learning Agreement before the start of the mobility\r\n3|Ensuring that credits taken abroad reflect the workload of the local students proportionally to the time spent abroad (60 ECTS per year/30 ECTS per semester)\r\n4|Including information to students on grade conversion prior to the mobility period\r\n5|Including allocation of responsibility to an academic who has the authority to approve, amend and recognise the Learning Agreements on behalf of the responsible academic body\r\n6|Ensuring that clear and transparent processes are in place for amendments of such agreements (i.e. Learning Agreements)\r\n",
      'multiple' => 1,
      'title_display' => 'before',
      'description_above' => 0,
      'private' => 0,
      'wrapper_classes' => 'question',
      'css_classes' => 'question__items',
      'aslist' => 0,
      'empty_option' => '',
      'optrand' => 0,
      'other_option' => NULL,
      'other_text' => 'Other...',
      'description' => '',
      'custom_keys' => FALSE,
      'options_source' => '',
      'analysis' => TRUE,
    ),
    'required' => '0',
    'weight' => '46',
    'page_num' => 4,
    '#meta' => array(

      'cid' => '8',
      'answers' => array(
        1 => array(
          'value' => 1,
          'type' => 'select',
          'text' => array(
            'value' => '<p>The sending institution should recognise the student&rsquo;s academic outcomes successfully completed at the receiving institution/organisation/enterprise, without the need for the student to take any further courses or exams. There should be clear and formal procedures for recognising the learning outcomes acquired during the mobility, and these should be published and easily accessible on the institution&#39;s website.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        2 => array(
          'value' => 2,
          'type' => 'select',
          'text' => array(
            'value' => '<p>The purpose of the Learning Agreement is to provide a transparent and efficient preparation of the study period abroad and to ensure that the student will receive recognition in his/her degree for the educational components or traineeship successfully completed abroad. The Learning Agreement:</p><ul><li>Sets out the learning outcomes for the mobility, including both the educational components or traineeship activities to be carried out by the student at the receiving institution/organisation/enterprise, which will be recognised by the sending institution upon successful completion of the study programme abroad and counted towards his/her degree.</li><li>Ensures full recognition for satisfactorily completed activities of study mobility and traineeships in terms of credits awarded, without the need for the student to take any further courses or exams, and documents these credits in the student records, so that they can be identified in a transparent way.</li></ul><p>The Learning Agreement is binding for all parties and constitutes the cornerstone of successful student mobility (for studies, traineeships, and combinations thereof), including quality assurances and the process for transparent transfer of credits. Therefore, it is essential to conduct mobility based on an agreed and signed Learning Agreement. The Learning Agreement should be agreed and signed by all parties (the student, the sending institution and the receiving institution/organisation/enterprise) before the start of the mobility. It is not compulsory to circulate papers with original signatures; scanned copies of signatures or digital signatures may be accepted, depending on the national legislation.</p><p>The EU official templates for Learning Agreements for studies and traineeships are available online: <a href="http://ec.europa.eu/education/opportunities/higher-education/quality-framework_en.htm">http://ec.europa.eu/education/opportunities/higher-education/quality-framework_en.htm&nbsp;&nbsp;</a></p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'high',
        ),
        3 => array(
          'value' => 3,
          'type' => 'select',
          'text' => array(
            'value' => '<p>Institutions should apply an academic credit transfer system (ECTS or compatible system) to give transparency to the recognition procedures. When ECTS credits are used, the principles set out in the ECTS Users&#39; Guide (<a href="http://ec.europa.eu/education/ects/users-guide/docs/ects-users-guide_en.pdf">http://ec.europa.eu/education/ects/users-guide/docs/ects-users-guide_en.pdf</a>) should be respected. An academic year of full-time study is normally made up of educational components totalling 60 ECTS credits. It is recommended that for mobility periods shorter than a full academic year, the educational components selected should equate to a roughly proportionate number of credits. In case the student follows additional educational components beyond those required for his/her degree programme, these additional credits must also be listed in the study programme outlined in the Learning Agreement. To ensure that the learning experience is used to the maximum extent, the credits taken abroad should reflect the workload of the local students proportionally to the time spent abroad (60 ECTS per year/30 ECTS per semester/at least 15 ECTS per trimester).</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        4 => array(
          'value' => 4,
          'type' => 'select',
          'text' => array(
            'value' => '<p>The institution&#39;s published formal procedures for recognising student mobility should include full information on whether and, if so, how grade conversion will work for students upon returning to the sending institution. A staff member should be appointed at the sending institution to advise students on such issues.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        5 => array(
          'value' => 5,
          'type' => 'select',
          'text' => array(
            'value' => '<p>The formal procedures for recognising student mobility should clearly and unambiguously set out the responsibilities of an appointed academic, who has the authority, on behalf of the appropriate academic body, to:</p><ul><li>Approve the Learning Agreements,</li><li>Exceptionally amend the Learning Agreements, and</li><li>Recognise the successfully completed activities, without the need for the student to take any further courses or exams.</li></ul>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'high',
        ),
        6 => array(
          'value' => 6,
          'type' => 'select',
          'text' => array(
            'value' => '<p>The student, the sending institution and receiving institution/organisation/enterprise should do their utmost in order to minimise changes to the Learning Agreements. The receiving institution should provide transparent information on the choices offered in the Course Catalogue and be very clear about the deadlines for registration in the chosen courses, restrictions on place numbers, etc. Changes in the Course Catalogue of the receiving institution while students have already started their studies should be avoided as much as possible. It is accepted to amend Learning Agreements electronically, e.g. via email, without the need of a signature, according to national legislations or institutional regulations.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
      ),
      'case_studies' => array(
        279 => (object) array(
          'vid' => '1536',
          'uid' => '1',
          'title' => 'Turning recognition of student mobility into a transparent and easy-to-follow process',
          'log' => '',
          'status' => '1',
          'comment' => '1',
          'promote' => '0',
          'sticky' => '0',
          'vuuid' => '61534ad3-1af3-4348-b05c-cffaea15ff53',
          'nid' => '279',
          'type' => 'case_study',
          'language' => 'en',
          'created' => '1483973396',
          'changed' => '1484234379',
          'tnid' => '0',
          'translate' => '0',
          'uuid' => 'cf39e805-39b6-48ad-b6e9-d051da00f20b',
          'revision_timestamp' => '1484234379',
          'revision_uid' => '1',
          'body' => array(
            'en' => array(
              array(
                'value' => '<p>Following a series of internal discussions between the University’s administrative services, &nbsp;academic departments and institutional decision makers, the University published a comprehensive guidance document, the&nbsp;<strong>Institutional Guide to Recognition</strong>. &nbsp;It is provided to students and relevant staff prior to the mobility period, and is also publicly available on the University’s website.</p><p>The&nbsp;<strong>development of this single procedure</strong>&nbsp;was challenging and took around seven months to complete. The International Relations Office (IRO) coordinated the work and consultation process on the Guide under the auspices of the Polytechnic Presidency:</p><ul><li>The team comprised a Vice President, the coordinator of the Pedagogical Council, the Pro-President for Research and the Erasmus Schools Coordinators</li><li>They all had been involved with the ECTS recognition process, and were familiar with the Bologna Principles, ECTS assessment and recognition methodology.</li><li>An internal evaluation of mobilities, a needs assessment, and contributions from staff, students, and partner institutions informed the development of the guide</li><li>The draft versions of the guide prepared by the IRO were commented on by both administrative and academic departments</li></ul><p>The University’s Scientific Council approved and signed off the final version after the sucessfully conlduded consultation process. The Guide establishes a&nbsp;<strong>common basis for the</strong>&nbsp;<strong>recognition process</strong>&nbsp;for all University departments, and describes each step in detail, including:</p><ul><li>Setting up the Learning Agreement</li><li>Transfering ECTS credits obtained during the mobility</li><li>Grade conversion</li></ul><p>The document sets out the&nbsp;<strong>tasks, roles and</strong>&nbsp;<strong>responsiblities of all parties</strong>&nbsp;involved. In this way, the Guide ensures complete&nbsp;<strong>transparency</strong>&nbsp;at all stages and supports staff in completing the required steps. Key principles contained in the Guide include:</p><ul><li>Recognition procedures and the grade distribution tables&nbsp;<strong>are publicised online</strong></li><li>Students are informed on recognition procedures prior to leaving as part of the&nbsp;<strong>Learning Agreements</strong>&nbsp;they sign</li><li><strong>Recognition does not depend on an “after mobility” assessment</strong>&nbsp;of credit transfer; all processes are based on a framework agreed upon prior to the mobility</li><li><strong>Fair recognition&nbsp;</strong>is favoured instead of perfect equivalence</li></ul>',
                'summary' => '',
                'format' => 'full_html',
              ),
            ),
          ),
          'field_case_study_contact' => array(),
          'field_case_study_contact_email' => array(
            LANGUAGE_NONE => array(
              array(
                'email' => 'gri@ipbeja.pt ',
              ),
            ),
          ),
          'field_case_study_contact_name' => array(
            LANGUAGE_NONE => array(
              array(
                'value' => 'Nuno Loureiro / Maria Cristina Palma',
                'format' => NULL,
                'safe_value' => 'Nuno Loureiro / Maria Cristina Palma',
              ),
            ),
          ),
          'field_case_study_country' => array(
            LANGUAGE_NONE => array(
              array(
                'iso2' => 'PT',
              ),
            ),
          ),
          'field_case_study_further_reading' => array(
            LANGUAGE_NONE => array(
              array(
                'url' => 'https://www.ipbeja.pt/servicos/gmc/Paginas/ReconhecimentoAcad%C3%A9mico.aspx',
                'title' => '',
                'attributes' => array(),
              ),
              array(
                'url' => 'https://mobilidade.ipbeja.pt/mobilidadenet/page',
                'title' => '',
                'attributes' => array(),
              ),
            ),
          ),
          'field_case_study_introduction' => array(),
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
                'value' => 'Polytechnic Institute of Beja (IPBeja)',
                'format' => NULL,
                'safe_value' => 'Polytechnic Institute of Beja (IPBeja)',
              ),
            ),
          ),
          'field_case_study_about' => array(
            LANGUAGE_NONE => array(
              array(
                'value' => '<p>The Polytechnic Institute of Beja (IPBeja) is strongly committed to internationalisation. The University’s institutional Strategic and Development Plan sets out specific targets to foster increased mobility. Each degree programme should partner with at least three international HEIs and send and receive a minimum of two students and one lecturer abroad every year. To stimulate and manage participation in international mobility, IPBeja has created a supporting team comprised of the International Office, academic services staff and a lecturer from each degree programme.</p><table class="centered"><tbody><tr><th>Key figures in 2015/16</th></tr><tr><td><ul><li>2,500 students</li></ul></td></tr><tr><td><ul><li>58 outgoing students</li></ul></td></tr></tbody></table>',
                'summary' => '',
                'format' => 'full_html',
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
            'pathauto' => '1',
          ),
          'cid' => '0',
          'last_comment_timestamp' => '1483973396',
          'last_comment_name' => NULL,
          'last_comment_uid' => '1',
          'comment_count' => '0',
          'name' => 'fpfis-admin',
          'picture' => '0',
          'data' => 'a:1:{s:7:"contact";i:1;}',
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
        ),
      ),
      'category' => 'before',
      'rectors_question' => 'fifth',
    ),
  ),
        9 => array(

    'cid' => '9',
    'pid' => '0',
    'form_key' => 'your_institution_has_established_formal_procedures_for_recognising_staff_mobility',
    'name' => '9| Your institution has established formal procedures for recognising staff mobility for both teaching and training activities abroad:',
    'type' => 'select',
    'value' => '',
    'extra' => array(
      'items' => "1|Which are made publically available on the institution's website\r\n2|Ensuring that the mobile participant, sending and receiving institution/organisation/enterprise (i.e. all three parties) sign the mobility agreement before the start of the mobility\r\n",
      'multiple' => 1,
      'title_display' => 'before',
      'description_above' => 0,
      'private' => 0,
      'wrapper_classes' => 'question',
      'css_classes' => 'question__items',
      'aslist' => 0,
      'empty_option' => '',
      'optrand' => 0,
      'other_option' => NULL,
      'other_text' => 'Other...',
      'description' => '',
      'custom_keys' => FALSE,
      'options_source' => '',
      'analysis' => TRUE,
    ),
    'required' => '0',
    'weight' => '47',
    'page_num' => 4,
    '#meta' => array(

      'cid' => '9',
      'answers' => array(
        1 => array(
          'value' => 1,
          'type' => 'select',
          'text' => array(
            'value' => '<p>To ensure that mobile participants are aware of the formal procedures for recognising staff mobility for teaching and training, these procedures and the relevant supporting documents should be published in an easily accessible format on the institution&#39;s website.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        2 => array(
          'value' => 2,
          'type' => 'select',
          'text' => array(
            'value' => '<p>To ensure effective staff mobility, it has to be based on a signed mobility agreement. The mobility agreement has to acceptable and signed by all parties in advance. There are four key elements set out by the mobility agreement, which are intended to increase the relevance and potential impact of the mobility. These are:</p><ul><li>The overall objectives and academic rationale of the mobility,</li><li>The institutional requirements or strategy, and the mobility&#39;s added value in the context of modernisation and internationalisation,</li><li>The activities or teaching programme content to be undertaken by the staff member, and,</li><li>The expected outcomes and impact of the mobility on the professional development of the staff member at both institutions.</li></ul><p>For this to work effectively, there needs to be dialogue and discussion between the three parties prior to the signing of the mobility agreement having agreed the common goals which are acceptable.&nbsp;</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'high',
        ),
      ),
      'case_studies' => array(
        280 => (object) array(
          'vid' => '1537',
          'uid' => '1',
          'title' => 'Your institution has established formal procedures for recognising staff mobility for teaching and training activities abroad',
          'log' => '',
          'status' => '1',
          'comment' => '1',
          'promote' => '0',
          'sticky' => '0',
          'vuuid' => '5c2645f0-344d-4b07-b663-43f73a49a304',
          'nid' => '280',
          'type' => 'case_study',
          'language' => 'en',
          'created' => '1483973552',
          'changed' => '1484234403',
          'tnid' => '0',
          'translate' => '0',
          'uuid' => 'b4571a47-0743-4616-958d-eb301763cbb3',
          'revision_timestamp' => '1484234403',
          'revision_uid' => '1',
          'body' => array(
            'en' => array(
              array(
                'value' => '<p>Hacettepe University sees&nbsp;<strong>international staff mobility</strong>&nbsp;as important for the development of the University and as a rich opportunity for staff professional development. In addition to the collection of data from mobile staff, emphasis is placed on sharing and disseminating results and experiences within the University:</p><ul><li>After their mobility&nbsp;<strong>staff are encouraged to have meetings, make presentations</strong>&nbsp;to colleagues in their department and faculty. The University notes that this tends to result in an increase in outward mobility in the relevant department/faculty</li><li>Academic staff are encouraged and supported to u<strong>ndertake research based on the results of their international mobility</strong>, with a view to publish (articles, working papers, book chapters, reports)</li><li>Each returning staff member has a&nbsp;<strong>one-to-one meeting with the University’s EU Office&nbsp;</strong>to discuss how they will transfer their mobility experience to their own department. Most&nbsp;<strong>staff are highly motivated to plan concrete activities</strong>&nbsp;after their mobility, and to continue the cooperation with the institute and academics they visited. As a result, approximately 20% of participating staff initiated signing a new Erasmus+ agreement and an eighth started a new academic collaboration.</li><li>Staff mobility reports have an impact on the University’s international policy. The University aims to&nbsp;<strong>increase mobility to underpin institutional development</strong>&nbsp;and progress towards&nbsp;<strong>more openness</strong>.</li><li>At the beginning of the calendar year, the Erasmus+ administrator publicises key staff mobility information: dates, minimum teaching hours and selection criteria. The&nbsp;<strong>selection criteria</strong>&nbsp;give&nbsp;<strong>priority to ‘new’ individuals and departments</strong>, and less-visited countries and partner institutions.</li><li><strong>Recognition of academic staff mobility</strong>&nbsp;is underpinned by its inclusion as a formal criterion for promotion to a professorial position</li></ul>',
                'summary' => '',
                'format' => 'full_html',
              ),
            ),
          ),
          'field_case_study_contact' => array(),
          'field_case_study_contact_email' => array(
            LANGUAGE_NONE => array(
              array(
                'email' => 'bturhan@hacettepe.edu.tr   ',
              ),
            ),
          ),
          'field_case_study_contact_name' => array(
            LANGUAGE_NONE => array(
              array(
                'value' => 'Dr. Bugay Turhan ',
                'format' => NULL,
                'safe_value' => 'Dr. Bugay Turhan ',
              ),
            ),
          ),
          'field_case_study_country' => array(
            LANGUAGE_NONE => array(
              array(
                'iso2' => 'TR',
              ),
            ),
          ),
          'field_case_study_further_reading' => array(
            LANGUAGE_NONE => array(
              array(
                'url' => 'http://www.abofisi.hacettepe.edu.tr',
                'title' => '',
                'attributes' => array(),
              ),
            ),
          ),
          'field_case_study_introduction' => array(),
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
                'value' => 'Hacettepe University / Hacettepe Üniversitesi',
                'format' => NULL,
                'safe_value' => 'Hacettepe University / Hacettepe Üniversitesi',
              ),
            ),
          ),
          'field_case_study_about' => array(
            LANGUAGE_NONE => array(
              array(
                'value' => '<table class="centered"><tbody><tr><th>Key figures</th></tr><tr><td><ul><li>40,000 students</li></ul></td></tr><tr><td><ul><li>3,500 faculty</li></ul></td></tr></tbody></table>',
                'summary' => '',
                'format' => 'full_html',
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
            'pathauto' => '1',
          ),
          'cid' => '0',
          'last_comment_timestamp' => '1483973552',
          'last_comment_name' => NULL,
          'last_comment_uid' => '1',
          'comment_count' => '0',
          'name' => 'fpfis-admin',
          'picture' => '0',
          'data' => 'a:1:{s:7:"contact";i:1;}',
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
        ),
      ),
      'category' => 'before',
      'rectors_question' => 'sixth',
    ),
  ),
        19 => array(

    'cid' => '19',
    'pid' => '0',
    'form_key' => 'page_4',
    'name' => 'Page 4',
    'type' => 'pagebreak',
    'value' => '',
    'extra' => array(
      'private' => 0,
      'next_page_label' => '',
      'prev_page_label' => '',
    ),
    'required' => '0',
    'weight' => '48',
    'page_num' => 5,
    '#meta' => array(),
  ),
        10 => array(

    'cid' => '10',
    'pid' => '0',
    'form_key' => 'during_the_mobility_your_institution_fosters_the_integration_of_the_incoming_mobile_participants_through',
    'name' => '10| During the mobility, your institution fosters the integration of the incoming mobile participants, through:',
    'type' => 'select',
    'value' => '',
    'extra' => array(
      'items' => "1|The provision of preparatory language courses in the local language at the beginning of incoming mobility periods\r\n2|The organisation of Welcome / Orientation activities at the beginning of each semester\r\n3|The appointment of responsible person(s) to deal with practical issues (e.g. social, health, and/or psychological problems)\r\n4|The appointment of responsible person(s) to deal with academic issues (course timetables, student attendance, coursework, relationship with academic staff, etc.)\r\n5|The organisation of activities to integrate them in the receiving institution and the local community, e.g. with the support of student organisations, Erasmus+ Student and Alumni Association etc.\r\n6|Opportunities for incoming mobile participants to share their culture and experiences with their peers inside and with the local community\r\n",
      'multiple' => 1,
      'title_display' => 'before',
      'description_above' => 0,
      'private' => 0,
      'wrapper_classes' => 'question',
      'css_classes' => 'question__items',
      'aslist' => 0,
      'empty_option' => '',
      'optrand' => 0,
      'other_option' => NULL,
      'other_text' => 'Other...',
      'description' => '',
      'custom_keys' => FALSE,
      'options_source' => '',
      'analysis' => TRUE,
    ),
    'required' => '0',
    'weight' => '49',
    'page_num' => 5,
    '#meta' => array(

      'cid' => '10',
      'answers' => array(
        1 => array(
          'value' => 1,
          'type' => 'select',
          'text' => array(
            'value' => '<p>Receiving HEI&#39;s should provide adequate linguistic support, tailored to individual needs of the mobile participants. These courses may be offered, for example, as intensive courses during the orientation period or as semester or annual courses (in groups, as individual tuition or as subject-specific courses). It is considered good practice to allocate credits to these language classes and describe outcomes according to the Common European Framework of Reference for Languages (CEFR): <a href="https://europass.cedefop.europa.eu/en/resources/european-language-levels-cefr">https://europass.cedefop.europa.eu/en/resources/european-language-levels-cefr</a>. This does not negate the sending institution&#39;s responsibility to ensure that their outgoing mobile participants have reached the recommended language levels (for example the existing OLS - online linguistic support).</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        2 => array(
          'value' => 2,
          'type' => 'select',
          'text' => array(
            'value' => '<p>An important aspect of the support arrangement is the welcome or orientation activities. These welcome / orientation activities should provide the incoming students with the necessary information on practical and administrative arrangements, to allow incoming students to meet local and other mobile students, to introduce the learning and teaching methods of the receiving institution, academic regulations, the institutional culture, health and safety issues. These activities should address any type of concern of the incoming student, and reduce any psychological pressure they might feel during their first contacts at the receiving institution. The welcome&nbsp; / orientation activities should be designed to take into account any cultural and religious sensitivities of the incoming students (ensuring a range of activities to suit different types of students).</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        3 => array(
          'value' => 3,
          'type' => 'select',
          'text' => array(
            'value' => '<p>The institution should ensure there are named, visible persons who are responsible for the practical issues associated with integrating mobile students. This visibility should be ensured through introduction to this function during the Welcome / Orientation period and be detailed on the website so all mobile students can easily access this support, throughout their stay.&nbsp;</p><p>Non-academic mentoring and support arrangements should already be outlined in the Course Catalogue of the receiving HEI, in the section on general information for students, with relevant contact persons in the respective areas. Academic advisors should have close contact with the practical services which are available to incoming participants as they are often the first line of contact to the incoming student. Further information sessions should be arranged for all staff who work with incoming students to ensure they are adequately signposted on to the appropriate services they require.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'high',
        ),
        4 => array(
          'value' => 4,
          'type' => 'select',
          'text' => array(
            'value' => '<p>It is important that the receiving institution appoints specific named academic advisors who are responsible for dealing with problems related to academic issues (course timetables, student attendance, coursework, relationship with academic staff, etc.) of incoming students.&nbsp; Information on mentoring for thesis writing for incoming students is particularly important and clear mentoring arrangements should be agreed upon between the student, sending and receiving institutions and organised before the mobility.</p><p>For traineeships, a mentor, different from the supervisor, should be nominated to support and encourage the mobile student while in the receiving organisation. The mentor should also provide information on the culture of the enterprise and informal codes and conducts, of the receiving organisation. The contact details of both the supervisor and the mentor should be specified in the Learning Agreement.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'high',
        ),
        5 => array(
          'value' => 5,
          'type' => 'select',
          'text' => array(
            'value' => '<p>As well as academic and practical support from the institution, incoming students need to feel fully integrated into the student community, something which is best done by their fellow students / peers. Local student association(s), such as Erasmus Student Network (ESN) and the other associations&rsquo; member of the ESAA - Erasmus+ Student and Alumni Association (<a href="http://esaa-eu.org/">http://esaa-eu.org/</a>), play an important role in supporting incoming students. Incoming students need to feel welcomed and included in the student organisations. To help this process, the student organisations need to be aware of their role in supporting this integration and have access to the right resources, information, guidance and incentives. As institutions often have many types of student organisations, cooperation between them is encouraged through meetings together, social activities and buddy programmes. A key aspect of these activities is to make sure they are for all students so incoming students are integrated with the local students and hence the culture. Student organisations include for example, ESN (Erasmus Student Network) or ESAA - Erasmus+ Student and Alumni Association (<a href="http://esaa-eu.org/">http://esaa-eu.org/</a>). ESAA runs a buddy system to encourage integration of incoming students with their peers inside the institution and share good practice with other member associations around Europe.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        6 => array(
          'value' => 6,
          'type' => 'select',
          'text' => array(
            'value' => '<p>Incoming mobile students also bring new perspectives to the institution, the local students and the culture which is part of the internationalisation of the receiving institution. This is a significant opportunity to benefit from the experiences that international students bring. To capitalise on these experiences, the institution and its student organisations should put in place opportunities for incoming students to showcase their talent and perspectives through access to existing local initiatives (e.g. school teaching programmes, community projects) and setting up new initiatives to celebrate the different cultures (e.g. theatre performances, food and cultural weeks etc.). Local associations can support the integration of incoming students with the local community, through existing initiatives such as the Social Erasmus and Erasmus in School projects (<a href="http://socialerasmus.esn.org">http://socialerasmus.esn.org</a>).&nbsp;</p><p>Some incoming students may even have been involved in the management or governance of their sending institutions and recognising this opportunity and involving incoming students in similar functions in the receiving institution such as in the student union (elected representative) or working groups dedicated to the voice of the international student.&nbsp; &nbsp;</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
      ),
      'case_studies' => array(
        281 => (object) array(
          'vid' => '1538',
          'uid' => '1',
          'title' => 'Making them feel at home – ensuring student integration',
          'log' => '',
          'status' => '1',
          'comment' => '1',
          'promote' => '0',
          'sticky' => '0',
          'vuuid' => 'a7623323-ec3b-4f15-9a1a-99659588fc8a',
          'nid' => '281',
          'type' => 'case_study',
          'language' => 'en',
          'created' => '1483973738',
          'changed' => '1484234418',
          'tnid' => '0',
          'translate' => '0',
          'uuid' => 'd3285940-0fd5-4fdb-b7f8-844ed278c142',
          'revision_timestamp' => '1484234418',
          'revision_uid' => '1',
          'body' => array(
            'en' => array(
              array(
                'value' => '<p>Aston University (AU) introduces services for incoming students during the&nbsp;<strong>orientation week</strong>&nbsp;, “Aston Welcome”. In this way, students establish connections and friendships from the start, and those who encounter issues with settling in or culture shock know where to turn.</p><ul><li>Students are provided with a&nbsp;<strong>timetable</strong>&nbsp;of optional and mandatory events.</li><li>Each school of study organises an&nbsp;<strong>introductory meeting with professional and academic staff</strong>, in which students learn about their department, and get to know fellow students.</li><li>Departments plan their own events, such as the International Office’ Great British Tea Party, and the Martin Luther King Centre’s (multi faith chaplaincy)&nbsp;<strong>social events</strong>&nbsp;such as film nights.</li><li>There is an Information Fair attended by representatives from all&nbsp;<strong>support services</strong>&nbsp;to provide guidance.</li><li>To reinforce the&nbsp;<strong>commitment to the students’ welfare</strong>&nbsp;and the message that AU&nbsp;<strong>values international students</strong>, several of the welcome sessions are delivered by senior staff..</li></ul><p>To ensure activities are tailored to student needs, the university&nbsp;<strong>seeks feedback&nbsp;</strong>from mobile students, to identify improvements.</p><ul><li>At the&nbsp;<strong>start of their mobility</strong>, incoming exchange students are invited to a welcome event where feedback on&nbsp;<strong>preparation prior to the mobility</strong>&nbsp;is encouraged. Students also have a&nbsp;<strong>formal meeting</strong>&nbsp;with their School Coordinator to discuss any issues.</li><li><strong>Throughout their stay</strong>&nbsp;at Aston, students can approach designated staff, such as their&nbsp;<strong>assigned point of contact</strong>&nbsp;within their school of study or their Personal Tutor who monitors their welfare and academic progress throughout the year. In addition, AU&nbsp;<strong>student volunteers</strong>, the ‘Aston Ambassadors’, act as a central point of reference for all exchange students.</li><li>At&nbsp;<strong>the end of their mobility</strong>, students are invited to answer a feedback form, and results are passed to the International Office. Students also have the opportunity to provide comments at an event, where the University informally celebrates their time at Aston.</li></ul><p>An example of the<strong>&nbsp;response to feedback</strong>&nbsp;from incoming students is the orientation programme in the second semester. Social events were only provided at the beginning of the academic year which meant that those students who arrived at the beginning on the second semester were ‘missing out’. Therefore, AU designed a schedule of activities specifically to support the&nbsp;<strong>social integration</strong>&nbsp;of the second semester students.</p><p>AU provides incoming students with opportunities to share their culture and experience with AU students to promote&nbsp;<strong>internationalisation</strong>.</p><ul><li>International and EU (non UK) students are invited to an&nbsp;<strong>Intercultural Communications workshop</strong>&nbsp;to interact with students from other countries and backgrounds.</li><li>All students (local and International) are invited to join the ‘Global Lounge’ event, at which students are encouraged to learn phrases in a&nbsp;<strong>new language</strong>, and discuss where they come from.</li></ul>',
                'summary' => '',
                'format' => 'full_html',
              ),
            ),
          ),
          'field_case_study_contact' => array(),
          'field_case_study_contact_email' => array(
            LANGUAGE_NONE => array(
              array(
                'email' => 'j.neumann@Aston.ac.uk ',
              ),
            ),
          ),
          'field_case_study_contact_name' => array(
            LANGUAGE_NONE => array(
              array(
                'value' => 'Jessica Neumann',
                'format' => NULL,
                'safe_value' => 'Jessica Neumann',
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
                'url' => 'www.aston.ac.uk',
                'title' => 'Institution webpage',
                'attributes' => array(),
              ),
              array(
                'url' => 'http://www.aston.ac.uk/international/international-students/student-exchanges/incoming-exchange-students/',
                'title' => 'Link to incoming student information',
                'attributes' => array(),
              ),
              array(
                'url' => 'http://www.aston.ac.uk/birmingham-old/student-life/welcome-2015/',
                'title' => 'Aston Welcome Week 2015',
                'attributes' => array(),
              ),
              array(
                'url' => 'http://www.aston.ac.uk/new-student/welcome-2016/',
                'title' => 'Aston Welcome, January 2016',
                'attributes' => array(),
              ),
              array(
                'url' => 'www1.aston.ac.uk/current-students/get-involved/mentoring-at-aston-university/peer-mentoring',
                'title' => 'Aston Peer Mentoring scheme',
                'attributes' => array(),
              ),
            ),
          ),
          'field_case_study_introduction' => array(),
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
                'value' => 'Aston University',
                'format' => NULL,
                'safe_value' => 'Aston University',
              ),
            ),
          ),
          'field_case_study_about' => array(
            LANGUAGE_NONE => array(
              array(
                'value' => '<p>The university’s student enrolment is around 11,000.&nbsp;<br>Each year Aston welcomes over 240 exchange students, of which around 45% &nbsp;are through Erasmus+.</p><table class="centered"><tbody><tr><th>Key figures</th></tr><tr><td><ul><li>11,000 students</li></ul></td></tr><tr><td><ul><li>240 incoming students</li></ul></td></tr></tbody></table>',
                'summary' => '',
                'format' => 'full_html',
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
            'pathauto' => '1',
          ),
          'cid' => '0',
          'last_comment_timestamp' => '1483973738',
          'last_comment_name' => NULL,
          'last_comment_uid' => '1',
          'comment_count' => '0',
          'name' => 'fpfis-admin',
          'picture' => '0',
          'data' => 'a:1:{s:7:"contact";i:1;}',
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
        ),
      ),
      'category' => 'during',
      'rectors_question' => 'fourth',
    ),
  ),
        11 => array(

    'cid' => '11',
    'pid' => '0',
    'form_key' => 'at_the_end_of_the_mobility',
    'name' => '11| At the end of the mobility:',
    'type' => 'select',
    'value' => '',
    'extra' => array(
      'items' => "1|Transcripts of Records are issued in a timely manner (normally 5 weeks) to both incoming and outgoing students\r\n2|Transcripts of Records of incoming students include a description of or a link to the national grading system\r\n3|Transcripts of Records of incoming students include, where applicable, a Grade Distribution Table for the programme of study, according to the ECTS Users’ Guide\r\n4|Transcripts of Records of outgoing students provide details of the courses taken abroad\r\n5|All credits gained by students during a period of study abroad that were specified in the final version of the Learning Agreement are automatically transferred by your institution and accounted towards the students' final degree, without the need for the student to take any further courses or exams.\r\n6|Grades of outgoing students are converted, if applicable, according to a fair and transparent methodology communicated before the mobility\r\n7|In addition to recognising formal learning, the institution recognises any non-formal or informal learning acquired during the mobility according to the ECTS Users’ Guide\r\n",
      'multiple' => 1,
      'title_display' => 'before',
      'description_above' => 0,
      'private' => 0,
      'wrapper_classes' => 'question',
      'css_classes' => 'question__items',
      'aslist' => 0,
      'empty_option' => '',
      'optrand' => 0,
      'other_option' => NULL,
      'other_text' => 'Other...',
      'description' => '',
      'custom_keys' => FALSE,
      'options_source' => '',
      'analysis' => TRUE,
    ),
    'required' => '0',
    'weight' => '50',
    'page_num' => 5,
    '#meta' => array(

      'cid' => '11',
      'answers' => array(
        1 => array(
          'value' => 1,
          'type' => 'select',
          'text' => array(
            'value' => '<p>It is highly important in the recognition framework to provide Transcripts of Records in a timely manner, immediately following the mobility period. After the mobility, the receiving institution should send a Transcript of Records to the student and to the sending institution within a period stipulated in the Inter-Institutional Agreement (normally within five weeks after publication/proclamation of the student&rsquo;s results at the receiving institution). It can be provided electronically or through any other means accessible to the student and the sending institution. The Transcript of Records from the receiving institution should refer to the educational components agreed upon in the Learning Agreement. Grade distribution information should be included as well, either as a web link or an annex.</p><p>Following the receipt of the Transcript of Records from the receiving institution, the sending institution should automatically transfer and recognise the student&rsquo;s academic outcomes successfully completed at the receiving institution, as agreed in the Learning Agreement, without the need for the student to take any further courses or exams. The Sending Institution will provide a Transcript of Records to the student or record the results in a database or any other means accessible to the student, normally within five weeks after having received the transcript of the receiving institution. The EU official template for the Learning Agreement for studies (including the Transcript of Records) is available online: <a href="http://ec.europa.eu/education/opportunities/higher-education/quality-framework_en.htm">http://ec.europa.eu/education/opportunities/higher-education/quality-framework_en.htm</a></p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'high',
        ),
        2 => array(
          'value' => 2,
          'type' => 'select',
          'text' => array(
            'value' => '<p>The Transcript of Records from the receiving institution should include grade distribution information, either as a web link or an annex. The local grading scale should be clearly explained, with a statistical distribution of local grades, to provide transparency and understanding of grading practices at the host institution. Where applicable, use should be made of a Grade Distribution Table for the programme of study, according to the ECTS Users&rsquo; Guide (<a href="http://ec.europa.eu/education/ects/users-guide/index.htm">http://ec.europa.eu/education/ects/users-guide/index.htm</a>).</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        3 => array(
          'value' => 3,
          'type' => 'select',
          'text' => array(
            'value' => '<p>Where applicable, the Sending Institution should translate the grades received by the student abroad. To enable the Sending Institution to do so, it is highly important for the receiving institution to provide a clear explanation of the institutional grading system and grade distribution in the department or study programme together with the Transcript of Records. Such information can be provided either through a web link or as an annex to the Transcripts of Records. Where applicable, use should be made of a Grade Distribution Table for the programme of study, according to the ECTS Users&rsquo; Guide (<a href="http://ec.europa.eu/education/ects/users-guide/index.htm">http://ec.europa.eu/education/ects/users-guide/index.htm</a>).</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'high',
        ),
        4 => array(
          'value' => 4,
          'type' => 'select',
          'text' => array(
            'value' => '<p>The Transcript of Records should ensure a transparent recognition of the study period abroad, providing details of the courses the students undertook while studying abroad, including:</p><ul><li>Component code (if any)</li><li>Component title at the Receiving Institution&nbsp; (as indicated in the course catalogue)</li><li>If the component was successfully completed by the student?</li><li>Number of ECTS credits (or equivalent)</li><li>Grades received at the Receiving Institution</li></ul><p>The EU official template for the Learning Agreement (including the Transcript of Records) is available online: <a href="http://ec.europa.eu/education/opportunities/higher-education/quality-framework_en.htm">http://ec.europa.eu/education/opportunities/higher-education/quality-framework_en.htm&nbsp;</a>&nbsp;</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        5 => array(
          'value' => 5,
          'type' => 'select',
          'text' => array(
            'value' => '<p>The sending institution should ensure that all the credits earned by the mobile student during the mobility period are recognised and counted towards the final degree, without the need for the student to take any further courses or exams. The period of study abroad must be clear in the student&#39;s records and documents issued to the student (Diploma Supplement or equivalent). This is a golden rule of recognition of credit mobility within the framework of inter-institutional agreements. All the credits towards the student&#39;s degree that are earned during the mobility period and which were originally agreed on in the Learning Agreement (or a revised version to it) should be recognised by the sending HEI without the need for the student to take any further courses or exams. Learning Agreements are binding for all the parties and require that, on successful completion of the mobility period, the sending HEI recognises credits earned by the student and documents these credits in the student records, so they can be identified in a transparent way.</p><p>Upon receipt of the Transcript of Records or Training Certificates, the sending HEI should:<br />a) certify the mobile student has fulfilled all requirements stipulated in the Learning Agreement;<br />b) ensure recognition of the mobility period abroad within the time-scale and according to the conditions stipulated in the institutional recognition framework.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'high',
        ),
        6 => array(
          'value' => 6,
          'type' => 'select',
          'text' => array(
            'value' => '<p>Grades of outgoing students are converted, if applicable, according to a fair and transparent methodology communicated before the mobility. There are more details on this in the ECTS Users&rsquo; Guide.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        7 => array(
          'value' => 7,
          'type' => 'select',
          'text' => array(
            'value' => '<p>During a period of mobility, students often take advantage of other opportunities outside of their required courses. These may include specific activities which can be considered non-formal or informal learning where they have acquired new skills. This could include additional language and cultural courses, extra-curricular activities, setting up a business and volunteer work undertaken by the student in the period.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
      ),
      'case_studies' => array(
        282 => (object) array(
          'vid' => '1539',
          'uid' => '1',
          'title' => '"Standing out from the crowd" - supporting students through full recognition and documenting of mobility outcomes',
          'log' => '',
          'status' => '1',
          'comment' => '1',
          'promote' => '0',
          'sticky' => '0',
          'vuuid' => '6be699cb-f7a9-4a03-8b98-290b58b60d58',
          'nid' => '282',
          'type' => 'case_study',
          'language' => 'en',
          'created' => '1483973848',
          'changed' => '1484234443',
          'tnid' => '0',
          'translate' => '0',
          'uuid' => '34242a4e-1263-4865-ad65-29de9183d3fc',
          'revision_timestamp' => '1484234443',
          'revision_uid' => '1',
          'body' => array(
            'en' => array(
              array(
                'value' => '<p>Frederick University (FU) has implemented a system that ensures full and timely recognition of study abroad period. The system is fully&nbsp;<strong>transparent and consistent:</strong></p><ul><li>For both incoming and outgoing students, the&nbsp;<strong>Transcript of Records</strong>&nbsp;is issued within five weeks from the last day of the examination period, as indicated on the Inter-Institutional Agreement that is signed with FU’s partners.</li><li>When a student returns from abroad and FU’s Mobility Office (MO) has received the Transcript of Records from the Receiving Institution,&nbsp;<strong>all successfully completed activities&nbsp;</strong>of the study or traineeship mobility are&nbsp;<strong>automatically recognised</strong>&nbsp;without the need to take further exams, provided they align with what has been agreed in the Learning Agreement.</li><li><strong>Credits</strong>&nbsp;for courses that were not part of the student’s Learning Agreement are also&nbsp;<strong>recorded in the transcript,</strong>&nbsp;so that students have formal documentation of all knowledge and skills acquired throughout their studies and mobility period. This includes, for example, foreign language and cultural courses.</li><li>The&nbsp;<strong>content of the transcript</strong>&nbsp;issued by the receiving institution - including the name of the institution, the study period, courses taken, ECTS credits and grades achieved&nbsp;<strong>- is included</strong>&nbsp;in the&nbsp;<strong>Diploma Supplement</strong>&nbsp;issued by FU.</li></ul><p>Institutional&nbsp;<strong>policies and</strong>&nbsp;<strong>procedures had to be modified</strong>&nbsp;to further support the efforts set forth by the Mobility Office, by liaising with different offices of the institution.</p><ul><li>Departments and&nbsp; Academic Advisors share the responsibility of advising prospective Erasmus students on recognition.</li><li>The university’s IT Department developed and implemented a system which verifies that students have successfully completed the required courses and automatically integrates the information into FU’s official records.</li></ul><p>Knowing that their study period abroad will be fully recognised and documented&nbsp;<strong>students are motivated to participate</strong>&nbsp;in mobility activities, that enables them to “stand out from the crowd” when seeking employment. In less than 10 years,&nbsp;<strong>the</strong>&nbsp;<strong>number of participating students has increased&nbsp;</strong>from 3 in 2008, when the University first started participating in the Erasmus Programme, to 120 incoming and outgoing students, each, under the Erasmus+ Programme.</p>',
                'summary' => '',
                'format' => 'full_html',
              ),
            ),
          ),
          'field_case_study_contact' => array(),
          'field_case_study_contact_email' => array(
            LANGUAGE_NONE => array(
              array(
                'email' => 'erasmus@frederick.ac.cy',
              ),
            ),
          ),
          'field_case_study_contact_name' => array(
            LANGUAGE_NONE => array(
              array(
                'value' => 'Marianna Michael',
                'format' => NULL,
                'safe_value' => 'Marianna Michael',
              ),
            ),
          ),
          'field_case_study_country' => array(
            LANGUAGE_NONE => array(
              array(
                'iso2' => 'CY',
              ),
            ),
          ),
          'field_case_study_further_reading' => array(),
          'field_case_study_introduction' => array(),
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
                'value' => 'Frederick University',
                'format' => NULL,
                'safe_value' => 'Frederick University',
              ),
            ),
          ),
          'field_case_study_about' => array(
            LANGUAGE_NONE => array(
              array(
                'value' => '<table class="centered"><tbody><tr><th>Key figures in 2015/16</th></tr><tr><td><ul><li>3,300 students</li></ul></td></tr><tr><td><ul><li>120 incoming students since 2014</li></ul></td></tr><tr><td><ul><li>120 outgoing students since 2014</li></ul></td></tr></tbody></table>',
                'summary' => '',
                'format' => 'full_html',
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
            'pathauto' => '1',
          ),
          'cid' => '0',
          'last_comment_timestamp' => '1483973848',
          'last_comment_name' => NULL,
          'last_comment_uid' => '1',
          'comment_count' => '0',
          'name' => 'fpfis-admin',
          'picture' => '0',
          'data' => 'a:1:{s:7:"contact";i:1;}',
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
        ),
      ),
      'category' => 'after',
      'rectors_question' => 'fifth',
    ),
  ),
        12 => array(

    'cid' => '12',
    'pid' => '0',
    'form_key' => 'your_institution_issues_a_diploma_supplement',
    'name' => '12| Your institution issues a Diploma Supplement:',
    'type' => 'select',
    'value' => '',
    'extra' => array(
      'items' => "1|To all students, automatically, free of charge and in a major European language\r\n2|Which includes a record of the mobility period(s) carried out by the student under the Erasmus+ programme\r\n",
      'multiple' => 1,
      'title_display' => 'before',
      'description_above' => 0,
      'private' => 0,
      'wrapper_classes' => 'question',
      'css_classes' => 'question__items',
      'aslist' => 0,
      'empty_option' => '',
      'optrand' => 0,
      'other_option' => NULL,
      'other_text' => 'Other...',
      'description' => '',
      'custom_keys' => FALSE,
      'options_source' => '',
      'analysis' => TRUE,
    ),
    'required' => '0',
    'weight' => '51',
    'page_num' => 5,
    '#meta' => array(

      'cid' => '12',
      'answers' => array(
        1 => array(
          'value' => 1,
          'type' => 'select',
          'text' => array(
            'value' => '<p>This Supplement should include a record of the period of mobility under the Erasmus+ Programme. The 48 European countries taking part in the Bologna Process have agreed that each mobile graduate in their respective country should receive the Diploma Supplement (DS) automatically, free of charge and in at least one of the major European languages in addition to the national language. The HEI should issue a Diploma Supplement (or equivalent) to accompany every degree successfully completed by a student, using - where applicable - the template developed by the European Commission, the Council of Europe and UNESCO. The HEI&#39;s policy on issuing the Diploma Supplement should be published on its website.</p><p>The template for the Diploma Supplement is available at:<br /><a href="http://ec.europa.eu/education/tools/diploma-supplement_en.htm">http://ec.europa.eu/education/tools/diploma-supplement_en.htm&nbsp;</a></p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'high',
        ),
        2 => array(
          'value' => 2,
          'type' => 'select',
          'text' => array(
            'value' => '<p>The information contained in the Transcript of Records from the Receiving Institution should also be included in the Diploma Supplement produced by the Sending Institution (at least for Sending Institutions located in Programme Countries), with the exact titles of the components that the student has followed abroad. Alongside modules or units taken at the sending HEI, the Diploma Supplement should list recognised modules, units and/or training activities undertaken during the student&#39;s mobility period and indicate the location of these mobility activities.<br />In the case of double, multiple or joint degrees, the Diploma Supplement should indicate the name and status of the partner HEIs awarding the degree and explain the respective language(s) of instruction and examination. In addition, an explanation should be provided about the grading and classification scheme agreed by the awarding HEIs. The template for the Diploma Supplement is available at:<br /><a href="http://ec.europa.eu/education/tools/diploma-supplement_en.htm">http://ec.europa.eu/education/tools/diploma-supplement_en.htm</a>&nbsp;</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
      ),
      'case_studies' => array(
        283 => (object) array(
          'vid' => '1540',
          'uid' => '1',
          'title' => 'The Diploma Supplement – a tool to promote international recognition and transparency of academic achievement',
          'log' => '',
          'status' => '1',
          'comment' => '1',
          'promote' => '0',
          'sticky' => '0',
          'vuuid' => '0e98351a-f5b3-4610-b670-2ed1f9e453c3',
          'nid' => '283',
          'type' => 'case_study',
          'language' => 'en',
          'created' => '1483973968',
          'changed' => '1484234479',
          'tnid' => '0',
          'translate' => '0',
          'uuid' => 'ff9886f5-da64-4343-91f3-f9af76593f5b',
          'revision_timestamp' => '1484234479',
          'revision_uid' => '1',
          'body' => array(
            'en' => array(
              array(
                'value' => '<p>The Diploma Supplement is a document accompanying a higher education diploma, providing a standardised description of the nature, level, context, content and status of the studies completed by its holder. It is issued by higher education institutions according to agreed standards, with the aim of improving international ‘transparency’, and fair academic and professional recognition of qualifications.&nbsp;<strong>Graduates</strong>&nbsp;in all the countries in the Bologna Process (EHEA member countries:&nbsp;<a href="http://www.ehea.info/pid34250/members.html">http://www.ehea.info/pid34250/members.html</a>) have the right to&nbsp;<strong>receive</strong>&nbsp;the&nbsp;<strong>Diploma Supplement automatically</strong>,&nbsp;<strong>free of charge</strong>&nbsp;and&nbsp;<strong>in a major European language</strong>.</p><p>The University of Groningen was awarded the&nbsp;<strong>Diploma Supplement label</strong>&nbsp;by the European Commission for successfully implementing the Diploma Supplement in 2009. The label was renewed for the 2013 – 2016 period, with special mention of the newly-introduced&nbsp;<strong>ECTS Grade Distribution Table</strong>&nbsp;as an ‘example of good practice’.</p><p>All students of the University of Groningen receive a Diploma Supplement automatically and free of charge with their Bachelor’s and Master’s degree certificates, in line with ECTS requirements. It is provided in English and includes the Transcript of&nbsp;Records. Alongside information on courses taken at RUG, the&nbsp;<strong>Diploma Supplement includes a record of the mobility period</strong>(s) carried out by the student under the Erasmus+ programme, listing the location of the mobility, the courses undertaken during the mobility, the date, Dutch grade, and the number of ECTS credits obtained. A sample Diploma Supplement can be viewed on the university’s public website (<a href="http://www.rug.nl/education/find-out-more/studying-at-university/specimen-diploma-supplement.pdf">http://www.rug.nl/education/find-out-more/studying-at-university/specimen-diploma-supplement.pdf</a></p>',
                'summary' => '',
                'format' => 'full_html',
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
                'title' => '',
                'attributes' => array(),
              ),
              array(
                'url' => 'http://www.rug.nl/education/find-out-more/studying-at-university/specimen-diploma-supplement.pdf',
                'title' => '',
                'attributes' => array(),
              ),
              array(
                'url' => 'http://bookshop.europa.eu/en/celebrating-ects-and-diploma-supplement-label-holders-2009-2013-pbNC0514040/',
                'title' => 'Erasmus+ - Celebrating ECTS and Diploma Supplement Label Holders 2009-2013 (2015) European Commission',
                'attributes' => array(),
              ),
            ),
          ),
          'field_case_study_introduction' => array(),
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
                'value' => 'Rijksuniversiteit Groningen / University of Groningen',
                'format' => NULL,
                'safe_value' => 'Rijksuniversiteit Groningen / University of Groningen',
              ),
            ),
          ),
          'field_case_study_about' => array(
            LANGUAGE_NONE => array(
              array(
                'value' => '<p>The Rijksuniversiteit Groningen (University of Groningen, RUG) offers&nbsp;26 English-taught degrees at Bachelor’s level, as well as&nbsp;100 English-taught Master’s degree programmes.&nbsp;It has a significant international community, with 5,000 Master’s and Bachelor’s students and more than half of the PhD student body from abroad. Student and staff exchanges form an important part of RUG’s internationalisation policy. The University is working towards a 50% target of students being mobile over the course of their studies.</p><table class="centered"><tbody><tr><th>Key figures</th></tr><tr><td><ul><li>30,000 students</li></ul></td></tr><tr><td><ul><li>1,400 exchange students</li></ul></td></tr></tbody></table>',
                'summary' => '',
                'format' => 'full_html',
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
            'pathauto' => '1',
          ),
          'cid' => '0',
          'last_comment_timestamp' => '1483973968',
          'last_comment_name' => NULL,
          'last_comment_uid' => '1',
          'comment_count' => '0',
          'name' => 'fpfis-admin',
          'picture' => '0',
          'data' => 'a:1:{s:7:"contact";i:1;}',
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
        ),
      ),
      'category' => 'after',
      'rectors_question' => 'fifth',
    ),
  ),
        21 => array(

    'cid' => '21',
    'pid' => '0',
    'form_key' => 'page_5',
    'name' => 'Page 5',
    'type' => 'pagebreak',
    'value' => '',
    'extra' => array(
      'private' => 0,
      'next_page_label' => '',
      'prev_page_label' => '',
    ),
    'required' => '0',
    'weight' => '52',
    'page_num' => 6,
    '#meta' => array(),
  ),
        13 => array(

    'cid' => '13',
    'pid' => '0',
    'form_key' => 'after_the_mobility_your_institution_recognises_participating_staff',
    'name' => '13| After the mobility, your institution recognises the participation of staff:',
    'type' => 'select',
    'value' => '',
    'extra' => array(
      'items' => "1|By taking it into account in the assessment of their professional development\r\n2|Through e.g. the reduction of the teaching load, promotion or pay rises\r\n3|By encouraging them to propose improvements to the institutional strategy for internationalisation and overarching structure, as well as for structural reform\r\n4|By inviting them to share new learning and teaching practices developed abroad with their peers in the institution\r\n5|By encouraging them to propose cooperation projects with their receiving organisation\r\n",
      'multiple' => 1,
      'title_display' => 'before',
      'description_above' => 0,
      'private' => 0,
      'wrapper_classes' => 'question',
      'css_classes' => 'question__items',
      'aslist' => 0,
      'empty_option' => '',
      'optrand' => 0,
      'other_option' => NULL,
      'other_text' => 'Other...',
      'description' => '',
      'custom_keys' => FALSE,
      'options_source' => '',
      'analysis' => TRUE,
    ),
    'required' => '0',
    'weight' => '53',
    'page_num' => 6,
    '#meta' => array(

      'cid' => '13',
      'answers' => array(
        1 => array(
          'value' => 1,
          'type' => 'select',
          'text' => array(
            'value' => '<p>Participation in international projects should be seen as an important aspect of the professional development of the staff and of the modernisation of the HEI and should, therefore, be considered a key component in staff evaluation practices.</p><p>The HEI should link its HR strategy to the objectives set out the internationalisation strategy for staff. For all staff who undertake a period of mobility, HR should be informed and provide support to ensure the identification of the professional development needs of the individual as well as setting out agreed career objectives for their period of mobility. This can be through prepared addendums to staff contracts or through less formal mechanisms of agreed objectives. The new objectives should become part of the normal system of staff evaluation or appraisal and be used in order to recognise the achievements of the staff during the period of mobility. This means that HR staff should be trained to ensure these additional objectives are formally evidenced and recorded in staff records and lead to other rewards and recognition.&nbsp;</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'high',
        ),
        2 => array(
          'value' => 2,
          'type' => 'select',
          'text' => array(
            'value' => '<p>It is highly important to incentivise staff to participate in mobility activities. In order to support and encourage mobility, HEIs should provide a number of incentives to ensure that when staff return to the sending institution, they have long term career benefits. HEIs should acknowledge periods of mobility as a normal part of a career path. Staff working schedules and agreed objectives (in terms of research outputs and assessments) should be adapted to meet their new requirements. Temporary replacements should be found during the mobility period, where possible, to ensure continuity during the mobility period. Upon returning to the sending institution, incentives to maintain links with other institutions or networks should be put in place through providing the time to nurture new relationships (reduction in teaching or research loads, continued related objectives set in performance appraisals). The new objectives set with HR for the period of mobility should be ones which are explicitly recognised and rewarded through promotion, awards or pay rises. Additional cultural / language skills should be recognised as a component in any evaluation / assessment of the staff. This may be achieved by making it well-known that participation is a formal part of staff evaluation procedures, and may lead to improvements in both working conditions and promotion or broader career prospects.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'high',
        ),
        3 => array(
          'value' => 3,
          'type' => 'select',
          'text' => array(
            'value' => '<p>One important form of recognition for staff, which is equally beneficial to the HEI is to encourage their involvement in improving internationalisation and structural reform within the institution. This includes the opportunity for staff to provide feedback into the management structures of departments and the overall institution. There should be a firm commitment - perhaps in writing - from the HEI to recognise and make use of constructive feedback as well as the appropriate forums for staff to engage with senior management to discuss their experiences and propose new ideas for improvement.&nbsp;</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        4 => array(
          'value' => 4,
          'type' => 'select',
          'text' => array(
            'value' => '<p>The experience of staff should be valued and shared as an inspiration to others, by, for example, organising meetings and publishing articles where the mobile participants share their experience and the impact of mobility on their personal and professional development. Where staff are involved in teaching at host institutions, new learning and teaching practices can be brought back and shared with other staff members through seminars or presentations. Staff can be supported through the administrative and academic services to understand the skills they have acquired and how best to use them within their own institution.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        5 => array(
          'value' => 5,
          'type' => 'select',
          'text' => array(
            'value' => '<p>Mobile staff bring back new partners, networks and ideas which can be of significant value for the HEI. Staff should be encouraged to propose and develop new or further cooperation projects between their receiving and sending institutions. This requires time and commitment, which need to be given formally by the sending institution, including, for example, additional support to write joint proposals.&nbsp;</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
      ),
      'case_studies' => array(
        284 => (object) array(
          'vid' => '1541',
          'uid' => '1',
          'title' => 'Recognising and incentivising staff mobility',
          'log' => '',
          'status' => '1',
          'comment' => '1',
          'promote' => '0',
          'sticky' => '0',
          'vuuid' => '37ba5443-c97b-47eb-8a50-f359b52cc30e',
          'nid' => '284',
          'type' => 'case_study',
          'language' => 'en',
          'created' => '1483974040',
          'changed' => '1484094406',
          'tnid' => '0',
          'translate' => '0',
          'uuid' => 'bf76a91a-57f3-4f11-b6e0-27ec31b680c3',
          'revision_timestamp' => '1484094406',
          'revision_uid' => '1',
          'body' => array(
            'en' => array(
              array(
                'value' => '<p>Participation in <strong>international projects</strong> is an important aspect of <strong>professional development</strong> and the modernisation of a higher education institution.&nbsp; As part of this effort, the Conservatorio di Musica Arrigo Boito (CMAB) takes part in the international programmes, mobility consortia and a strategic partnerships, offering a joint Master programme. The Conservatorio has made <strong>mobility an integral part</strong> of its academic activity. It considers essential that <strong>outgoing staff are</strong> <strong>effectively supported</strong> in embarking on an international mobility, and that they are ensured full recognition for the time spent teaching and training abroad.&nbsp;&nbsp;</p><p>CMAB has developed a <strong>transparent, inclusive, and non-discriminatory selection process</strong>. Calls for applications are made available on the institution’s website, with selection criteria clearly set out and participation awarded based on merit. To support selected staff, the conservatory’s <strong>International Relations Office provides assistance</strong> in handling administrative processes and logistical needs. During staff mobility the Conservatory monitors the progress made. Upon successful completion of the mobility period, the institutions <strong>ensures recognition</strong> of teaching/working hours and receive assistance to help the staff’s <strong>reintegration into the academic life</strong>.</p><p>CMAB’s approach to staff mobility has resulted in <strong>high staff motivation</strong>, as evidenced by the increasing proportion of faculty participation. The expansion of international contacts for the Conservatory generated benefits such as broadened educational opportunities for both CMAB and its students.</p><p>Through the Erasmus Programme, a profound <strong>change of mindset</strong> has been taking place at CMAB. Internationalisation is no longer viewed as a simple supplementary activity, but as a structural requirement for a modern HEI.&nbsp;</p>',
                'summary' => '',
                'format' => 'full_html',
              ),
            ),
          ),
          'field_case_study_contact' => array(),
          'field_case_study_contact_email' => array(
            LANGUAGE_NONE => array(
              array(
                'email' => 'erasmus@conservatorio.pr.it ',
              ),
            ),
          ),
          'field_case_study_contact_name' => array(
            LANGUAGE_NONE => array(
              array(
                'value' => 'Riccardo Ceni, IRC',
                'format' => NULL,
                'safe_value' => 'Riccardo Ceni, IRC',
              ),
            ),
          ),
          'field_case_study_country' => array(
            LANGUAGE_NONE => array(
              array(
                'iso2' => 'IT',
              ),
            ),
          ),
          'field_case_study_further_reading' => array(
            LANGUAGE_NONE => array(
              array(
                'url' => 'www.conservatorio.pr.it',
                'title' => '',
                'attributes' => array(),
              ),
            ),
          ),
          'field_case_study_introduction' => array(),
          'field_case_study_org_type' => array(
            LANGUAGE_NONE => array(
              array(
                'value' => '2',
              ),
            ),
          ),
          'field_case_study_organisation' => array(
            LANGUAGE_NONE => array(
              array(
                'value' => 'Conservatorio di Musica Arrigo Boito, Parma',
                'format' => NULL,
                'safe_value' => 'Conservatorio di Musica Arrigo Boito, Parma',
              ),
            ),
          ),
          'field_case_study_about' => array(
            LANGUAGE_NONE => array(
              array(
                'value' => '<table class="centered"><tbody><tr><th>Key figures in 2016</th></tr><tr><td><ul><li>950 students</li></ul></td></tr><tr><td><ul><li>150 faculty</li></ul></td></tr><tr><td><ul><li>15% of staff – outgoing mobility</li></ul></td></tr><tr><td><ul><li>1% of students – outgoing mobility</li></ul></td></tr></tbody></table>',
                'summary' => '',
                'format' => 'full_html',
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
            'pathauto' => '1',
          ),
          'cid' => '0',
          'last_comment_timestamp' => '1483974040',
          'last_comment_name' => NULL,
          'last_comment_uid' => '1',
          'comment_count' => '0',
          'name' => 'fpfis-admin',
          'picture' => '0',
          'data' => 'a:1:{s:7:"contact";i:1;}',
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
        ),
      ),
      'category' => 'after',
      'rectors_question' => 'sixth',
    ),
  ),
        14 => array(

    'cid' => '14',
    'pid' => '0',
    'form_key' => 'outcomes_and_experiences_of_cooperation_projects_and_erasmus_mobility_are',
    'name' => '14| With regards to outcomes and experiences of Erasmus+ activities:',
    'type' => 'select',
    'value' => '',
    'extra' => array(
      'items' => "1|The results are monitored, evaluated and disseminated as a way to improve international cooperation and mobility activities\r\n2|The results are used systematically for the benefit of your institution, providing internationalisation at home, hence enhancing intercultural competences of non-mobile students and staff\r\n3|The results are exploited and disseminated, by providing participants with the results of cooperation projects and Erasmus+ mobility opportunities (e.g. presentations) to share funding possibilities\r\n4|Results of cooperation projects are made sustainable and often lead to future stronger international cooperation of the institution\r\n5|After the mobility Erasmus+ participants have the opportunity to present their new competences acquired\r\n6|After the mobility, the institution tracks graduates’ progress and the impact mobility had e.g. on their employability\r\n",
      'multiple' => 1,
      'title_display' => 'before',
      'description_above' => 0,
      'private' => 0,
      'wrapper_classes' => 'question',
      'css_classes' => 'question__items',
      'aslist' => 0,
      'empty_option' => '',
      'optrand' => 0,
      'other_option' => NULL,
      'other_text' => 'Other...',
      'description' => '',
      'custom_keys' => FALSE,
      'options_source' => '',
      'analysis' => TRUE,
    ),
    'required' => '0',
    'weight' => '54',
    'page_num' => 6,
    '#meta' => array(

      'cid' => '14',
      'answers' => array(
        1 => array(
          'value' => 1,
          'type' => 'select',
          'text' => array(
            'value' => '<p>Linked with the overall internationalisation strategy of the institution, monitoring and evaluation of cooperation projects and Erasmus+ mobility is essential if HEIs are to learn from their experiences. Monitoring and evaluation is more than just measuring the number and types of outputs, it needs to include capturing information on the overall outcomes and experiences of the activities at the institutional and the individual level. Systematic monitoring and evaluation should therefore include more qualitative approaches, which expressly capture the experiences in a way which helps the institution to understand the added value of its involvement in these activities. Documenting and analysing the outcomes and experiences is only the first step. To learn from the approaches taken, and the benefits gained, institutions should take time to disseminate the findings of the cooperation projects and mobility periods through, for example, meetings, workshops and publications, social media, etc. These activities will embed good practice, help the institution to iteratively improve its approach and also feed back into the on-going monitoring and evaluation.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'high',
        ),
        2 => array(
          'value' => 2,
          'type' => 'select',
          'text' => array(
            'value' => '<p>The outcomes and experiences of cooperation and Erasmus+ mobility have a much wider impact than just improving mobile activities. All institutions have significant numbers of non-mobile staff and students who can benefit from the international experiences of others. As part of the monitoring and evaluation processes, HEIs should consider the impact which can be specifically made on non-mobile staff and students, giving them &ldquo;internationalisation at home experiences&rdquo;. This includes building international competences, cultural awareness, virtual mobility opportunities, inviting international lecturers and embedding student projects with an international focus into the curricula, and providing opportunities for local students to work together with incoming mobile participants in e.g. project work, to ensure that local students benefit from the presence of mobile students at their institution. This fits with the activities of disseminating the overall outcomes and experiences of the cooperation projects and Erasmus+ mobility, though tailored to a different audience. It should take into account the professional development needs of the staff at the HEI and the perspectives of non-mobile students.&nbsp;</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'high',
        ),
        3 => array(
          'value' => 3,
          'type' => 'select',
          'text' => array(
            'value' => '<p>The dissemination of outcomes is an integral part of mobility projects. Good practice would be to ensure that the dissemination is built into the support measure and participants in projects and mobility actions are allocated adequate time, resources and space to disseminate their experiences and exploit project results. This includes opportunities to share new knowledge and to highlight new opportunities (including funding) which have arisen from the new relationships formed. In order to do this, HEIs should provide support functions such as web platforms to collect results or opportunities to present results at the institutional or departmental level, as relevant.&nbsp;</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        4 => array(
          'value' => 4,
          'type' => 'select',
          'text' => array(
            'value' => '<p>Participation in European and international cooperation projects should be undertaken in a pro-active way and fully integrated in the HEI&#39;s modernisation and internationalisation strategy. Capturing the outcomes and experiences of international cooperation, and disseminating the results provides information which can be fed back into the overall decision making processes of the HEI. These experiences can also be compared to the expected achievements set out in the original strategy documents and can be very important informers of future strategy and sustainability. The strength of the information collected lies in the institution&rsquo;s approach to reflecting on the outcomes and using the information to further improve and strengthen international cooperation. Therefore the HEI needs to have mechanisms in place which provide a forum to fully reflect on the outcomes and ask questions which will improve the sustainability of international cooperation activities for the benefit of the institution. This implies strategic working groups set at a high level within the institution, whose role is to monitor and implement internationalisation based on evidence in practice</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        5 => array(
          'value' => 5,
          'type' => 'select',
          'text' => array(
            'value' => '<p>The study entitled &lsquo;Effects of mobility on the skills and employability of students and the internationalisation of higher education institutions&rsquo; showcases how mobility can contribute to the internationalisation of higher education institutions, including the impacts on teaching methods, cooperation between HEIs and perception of staff more generally. Therefore the dissemination of outcomes is an integral part of mobility projects. Good practice would be to ensure that the dissemination is built into the support measure and participants in projects and mobility actions are allocated adequate time, resources and space to disseminate their experiences and exploit project results. This includes opportunities to share new knowledge and to highlight new opportunities (including funding) which have arisen from the new relationships formed. In order to do this, HEIs should provide support functions such as web platforms to collect results or opportunities to present results at the institutional or departmental level, as relevant.&nbsp;</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
        6 => array(
          'value' => 6,
          'type' => 'select',
          'text' => array(
            'value' => '<p>Learning mobility has a goal of increasing professional, social and intercultural skills in graduates and therefore ultimately improving their employability. In order to assess whether the experiences of mobility and international cooperation have led to new skills and competences, which in turn improve graduates&rsquo; opportunities, ongoing surveys of graduates (such as student satisfaction and student destination surveys) should include a question related to participation in mobility activities and its impact on their careers.</p>',
            'format' => 'eche_custom_text_format',
          ),
          'priority' => 'regular',
        ),
      ),
      'case_studies' => array(
        285 => (object) array(
          'vid' => '1542',
          'uid' => '1',
          'title' => 'Capitalising on the outcomes and experiences of Erasmus+ activities',
          'log' => '',
          'status' => '1',
          'comment' => '1',
          'promote' => '0',
          'sticky' => '0',
          'vuuid' => 'e09fbc48-51de-4418-b253-8866014e9707',
          'nid' => '285',
          'type' => 'case_study',
          'language' => 'en',
          'created' => '1483974234',
          'changed' => '1484094782',
          'tnid' => '0',
          'translate' => '0',
          'uuid' => 'f5f7ca92-9c26-4647-a275-8ead55fd1c45',
          'revision_timestamp' => '1484094782',
          'revision_uid' => '1',
          'body' => array(
            'en' => array(
              array(
                'value' => '<p>The <strong>process of internationalisation</strong> is a strategic priority <strong>for Akdeniz University (AU), Turkey</strong> and supports the University’s aim to <strong>expand and enhance the quality of its education through greater diversity</strong>.</p><p>Akdeniz University has taken steps to <strong>build capacity internally</strong> and for Turkey.</p><ul><li>The University appointed a motivated and experienced <strong>team to support internationalisation activities</strong>. It encourages academic and administrative staff to work with this team to enhance international activities</li><li>Staff participating in Erasmus+ activities and trainings are encouraged to <strong>discuss new ideas</strong> with other participants and colleagues in the institution</li><li>The University puts emphasis on sharing its accumulated experience.&nbsp; For example, in 2010, it initiated the <strong>Erasmus Coordinators Academy for Turkey</strong> to gather and support Erasmus+ staff from newly participating universities. This became an annual training course based at AU that has supported 119 Erasmus staff from 67 universities over the years</li><li>AU evaluated the impact of the Erasmus Coordinators Academy course, and gained feedback on how to improve it. The collated ideas and experience led to the organisation of the “<strong>Erasmus Winter Academy</strong>”. The Winter Academy includes training on the preparation of projects, and the use of online systems such as the Mobility Tool and OLS. Outputs and suggestions collected from participants are collated and sent to the National Agency of Turkey</li><li>AU recently launched <strong>another training course</strong>: “Practices on the Integration of Erasmus+ HEI and Youth Mobility in Higher Education Institutions”. This course will deal with the Erasmus+ and Erasmus+ Youth programmes, and include information on how to write projects for Erasmus+ actions</li></ul><p><strong>Angel Kanchev University of Ruse</strong> (UR) has a <strong>seven-year international policy</strong>, which is published on its website. The policy is wide ranging. It engages all academic staff in internationalisation, enabling best practice exchange, building on existing relationships of trust, and encouraging staff to develop courses taught in English.</p><p>The <strong>University Council for International Cooperation</strong>, which has input from faculty international coordinators, is responsible for consultation on and communication of the University’s international policy. Progress in implementing the policy is reported annually and published on the website.&nbsp;</p><ul><li>The Council for International Cooperation holds <strong>regular meetings</strong> <strong>with Erasmus+ contacts</strong>, to enable exchange of good practice between experienced and new coordinators and to keep staff engaged in internationalisation</li><li>Internationalisation is an opportunity to exchange good practice through <strong>international conferences</strong> and<strong> encourage agreements with experienced higher education institutions</strong></li><li>Trust maximises the impact of mobility. <strong>Staff</strong> <strong>are encouraged to develop mobility schemes</strong> <strong>and conclude Erasmus+ agreements </strong>with partners in existing projects where contact persons know each other and have established mutual trust</li><li><strong>UR remunerates and incentivises teachers</strong> who develop courses in foreign languages or work individually with Erasmus students. Subject to transparent and objective criteria, incentives include preference for those who have been active in an Erasmus + agreement and allow contacts to participate more than once in mobility</li><li>Suggestions are discussed during meetings of the Erasmus+ team and if accepted are subsequently implemented</li></ul>',
                'summary' => '',
                'format' => 'full_html',
              ),
            ),
          ),
          'field_case_study_contact' => array(),
          'field_case_study_contact_email' => array(
            LANGUAGE_NONE => array(
              array(
                'email' => 'nbuyukkalay@akdeniz.edu.tr',
              ),
            ),
          ),
          'field_case_study_contact_name' => array(
            LANGUAGE_NONE => array(
              array(
                'value' => 'Akdeniz University: Nurgül Büyükkalay Angel Kanchev University of Ruse: Prof. Juliana Popova ',
                'format' => NULL,
                'safe_value' => 'Akdeniz University: Nurgül Büyükkalay Angel Kanchev University of Ruse: Prof. Juliana Popova ',
              ),
            ),
          ),
          'field_case_study_country' => array(
            LANGUAGE_NONE => array(
              array(
                'iso2' => 'BG',
              ),
              array(
                'iso2' => 'TR',
              ),
            ),
          ),
          'field_case_study_further_reading' => array(
            LANGUAGE_NONE => array(
              array(
                'url' => 'http://uio.akdeniz.edu.tr/en',
                'title' => 'Akdeniz University webpage',
                'attributes' => array(),
              ),
              array(
                'url' => 'http://erasmus.akdeniz.edu.tr/en',
                'title' => 'Erasmus Office webpage',
                'attributes' => array(),
              ),
            ),
          ),
          'field_case_study_introduction' => array(),
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
                'value' => 'Akdeniz University / Akdeniz Üniversitesi / Angel Kanchev University of Ruse / Русенски университет “Ангел Кънчев“',
                'format' => NULL,
                'safe_value' => 'Akdeniz University / Akdeniz Üniversitesi / Angel Kanchev University of Ruse / Русенски университет “Ангел Кънчев“',
              ),
            ),
          ),
          'field_case_study_about' => array(
            LANGUAGE_NONE => array(
              array(
                'value' => '<table class="centered"><tbody><tr><th colspan="2" style="text-align: center;">Key figures</th></tr><tr><td>Akdeniz University</td><td>Angel Kanchev University of Ruse</td></tr><tr><td><ul><li>31,000 students</li></ul></td><td><ul><li>8,000 students</li></ul></td></tr><tr><td><ul><li>3,000 staff</li></ul></td><td><ul><li>600 staff</li></ul></td></tr></tbody></table>',
                'summary' => '',
                'format' => 'full_html',
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
            'pathauto' => '1',
          ),
          'cid' => '0',
          'last_comment_timestamp' => '1483974234',
          'last_comment_name' => NULL,
          'last_comment_uid' => '1',
          'comment_count' => '0',
          'name' => 'fpfis-admin',
          'picture' => '0',
          'data' => 'a:1:{s:7:"contact";i:1;}',
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
        ),
      ),
      'category' => 'after',
      'rectors_question' => 'fourth',
    ),
  ),
      ),
      'conditionals' => array(),
    ),
    'cid' => '0',
    'last_comment_timestamp' => '1477954531',
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

  // Save the node.
  node_save($node);
}
// @codingStandardsIgnoreEnd
