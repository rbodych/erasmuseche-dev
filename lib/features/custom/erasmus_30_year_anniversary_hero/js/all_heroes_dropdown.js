/**
 * @file
 * All heroes dropdown.
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

(function($) {
  $(document).ready(
    function () {
      var $allHeroes = $('.all-heroes');

      $allHeroes.find('.open-close-link').click(function() {
        var $allHeroesContent = $('.all-heroes-content');
        if ($allHeroesContent.is(":hidden")) {
          $allHeroesContent.slideDown("slow");
        } else {
          $allHeroesContent.hide();
        }
      });

      var $allHeroesContent = $('.all-heroes-content');
      $allHeroesContent.find('a').click(function(e) {
        e.preventDefault();
        var slideNumber = $(this).attr('rel');

        var mySwiper = $('.swiper-container')[0].swiper;
         mySwiper.slideTo((slideNumber - 1));
         history.replaceState(null, null, '#slide-' + (slideNumber - 1));
      });
    }
  );
})(jQuery);
