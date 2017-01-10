/**
 * @file
 * Social hero sharing.
 *
 * Javascript.
 *
 * @category Production
 *
 * @package ErasmusCore/erasmus_30_year_anniversary_hero
 *
 * @author EAC WEB <EAC-LIST-C4@nomail.ec.europa.eu>
 *
 * @copyright 2016 European-Commission
 *
 * @license http://ec.europa.eu Europa
 * @link NA
 */

/* global jQuery */
/* global FB */

(function($) {
  $(document).ready(
    function () {
      $(".share-link.facebook.normal").click(function() {
        FB.ui({
          method: "feed",
          link: window.location.href.split('#')[0],
        }
        , function(response){});
      });
    }
  )
})(jQuery);
