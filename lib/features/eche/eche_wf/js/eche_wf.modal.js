/**
 * @file
 */

(function ($, Drupal) {

  Drupal.theme.prototype.eche_wf_modal = function () {
    var html = ''
    html += '  <div id="ctools-modal">'
    // panels-modal-content.
    html += '    <div class="ctools-modal-content eche-wf-modal-style bootsmacss modal__inner">'
    html += '      <div class="modal-header modal__header">';
    html += '        <a class="close modal__close" href="#">';
    html += '          <span class="icon icon--x"></span>';
    html += '        </a>';
    html += '        <div id="modal-title" class="modal-title modal__title"> </div>';
    html += '      </div>';
    html += '      <div id="modal-content" class="modal-content modal__content">';
    html += '      </div>';
    html += '    </div>';
    html += '  </div>';
    return html;
  }

}(jQuery, Drupal));
