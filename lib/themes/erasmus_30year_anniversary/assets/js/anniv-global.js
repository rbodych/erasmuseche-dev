/**
 * @file
 * Contacttabs.js.
 *
 * Javascript.
 *
 * @category Production
 *
 * @package ErasmusCore/Theme
 *
 * @author EAC WEB <EAC-LIST-C4@nomail.ec.europa.eu>
 *
 * @copyright 2016 European-Commission
 *
 * @license http://ec.europa.eu Europa
 * @link NA
 *
 * Contact tabs.
 */

(function($) {
  $(document).ready(
    function () {
      // Trigger menu
      $('.js-mobile-nav-toggle').click(function() {
        $(this).toggleClass("active");
        $('nav[role=navigation]').slideToggle();
      });
      
      // Newsletter form
      $( ".form-field .form-input" ).change(function() {
        var inputVal = $(this).val();
        
        if (inputVal != '' && typeof(inputVal) != "undefined") {
          $(this).addClass('input-active');
        }
        else {
          $(this).removeClass('input-active');
        }
      });
      
      // Newsletter trigger dropdown
      $('nav .cta-newsletter').click(function(e) {
        e.preventDefault();
        $('.anniversary-navbar .newsletter-form').toggleClass('open');
        $(this).find('.glyphicon-arrow-down, .glyphicon-remove').toggleClass('glyphicon-arrow-down glyphicon-remove');
      });
    }
  )
})(jQuery);