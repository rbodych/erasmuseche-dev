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
      $(".share-link.facebook.hero").click(function() {
        var $currentItem = $(this).parent().parent();
        var image = $currentItem.find(".backgroun").attr("data-url");
        var link = "#slideid-" + $currentItem.attr("data-value");
        var title = $currentItem.find('h2').val();
        FB.ui({
          method: "feed",
          link: window.location.href.split('#')[0] + link,
          caption: title,
          picture: image,
        }
        , function(response){});
      });
    }
  )
})(jQuery);
