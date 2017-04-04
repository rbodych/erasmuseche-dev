<?php
/**
 * @file
 * Definition of mymodule_handler_handlername.
 */

/**
 * Description of what my handler does.
 */
// @codingStandardsIgnoreStart
class eche_wf_share_handler_self_assesment_type extends views_handler_field {
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
    if (eche_wf_node_is_self_assesment($values->webform_submissions_nid)) {
      return t('Erasmus+ coordinators');
    }
    elseif (eche_wf_node_is_rectors_quiz($values->webform_submissions_nid)) {
      return t('Rector/ Vice-rector');
    }
    return FALSE;
  }

}
