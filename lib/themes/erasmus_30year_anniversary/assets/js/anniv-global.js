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
        console.log('testt');
        $('nav[role=navigation]').slideToggle();
      });
    }
  )
})(jQuery);