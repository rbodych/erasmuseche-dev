<?php
/**
 * @file
 * Definition of mymodule_handler_handlername.
 */

/**
 * Description of what my handler does.
 */
// @codingStandardsIgnoreStart
class eche_wf_share_handler_view_report_link extends views_handler_field {
// @codingStandardsIgnoreEnd

  /**
   * Add some required fields needed on render().
   */
  public function construct() {
    parent::construct();
    $this->additional_fields['nid'] = array(
      'table' => 'webform_submissions',
      'field' => 'nid',
    );
    $this->additional_fields['sid'] = array(
      'table' => 'webform_submissions',
      'field' => 'sid',
    );
  }

  /**
   * Loads additional fields.
   */
  public function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  /**
   * Renders the field handler.
   */
  public function render($values) {
    $link = 'node/' . $values->webform_submissions_nid . '/submission/' . $values->sid;
    if (eche_wf_share_node_is_shareable($values->webform_submissions_nid)) {
      $link = eche_wf_report_url($values->webform_submissions_nid, $values->sid);
    }
    return l('<span class="icon icon--eye"></span>', $link, array(
      'html' => TRUE,
      'attributes' => array(
        'class' => array('submission-item__action'),
        'title' => t('View results'),
      ),
    ));
  }

}
