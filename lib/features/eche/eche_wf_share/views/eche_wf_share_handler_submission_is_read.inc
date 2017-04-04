<?php
/**
 * @file
 * Definition of mymodule_handler_handlername.
 */

/**
 * Description of what my handler does.
 */
// @codingStandardsIgnoreStart
class eche_wf_share_handler_submission_is_read extends views_handler_field {
// @codingStandardsIgnoreEnd

  /**
   * Add some required fields needed on render().
   */
  public function construct() {
    parent::construct();
    $this->additional_fields['field_something'] = array(
      'table' => 'eche_wf_shares',
      'field' => 'is_read',
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
    return empty($values->eche_wf_shares_is_read) ? '<div class="label label-info eche-wf-share--new">' . t('New') . '</div>' : NULL;
  }

}
