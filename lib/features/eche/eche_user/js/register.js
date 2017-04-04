/**
 * @file
 */

(function ($) {
  Drupal.behaviors.eche_hei_popover = {
    attach: function (context) {
      var $heiField = $('#field-user-hei-ajax'),
        $popoverHtml = $heiField.find('.input-group-popover-html'),
        $acInput = $heiField.find('.form-control[data-toggle="popover"]');
      acInputId = $acInput.attr('id');

      $heiField.once('register', function () {
        $popoverHtml.addClass('element-invisible');
        $acInput.popover({
          html: true,
          trigger: 'manual',
          content: function () {
            return $popoverHtml.html();
          }
        });

        $acInput.keyup(function (e) {
          if ($(this).parent().siblings('.dropdown').children().length) {
            $acInput.popover('hide');
          }
        });

        $(document).ajaxSuccess(function (e, request) {
          if (e.target.activeElement.id == acInputId) {
            if (request.responseText == '[]' && ($acInput.siblings('.popover').length === 0)) {
              $acInput.popover('show');
            }
          }
        });
      });
    }
  };
})(jQuery);
