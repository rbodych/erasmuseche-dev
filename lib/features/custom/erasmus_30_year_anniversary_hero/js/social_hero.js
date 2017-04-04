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

(function ($) {
  'use strict';

  Drupal.behaviors.socialHeroShare = {
    attach: function (context, settings) {
      $(".share-link.facebook.hero").once().click(function(e) {
        e.preventDefault();
        var $currentItem = $(this).parent().parent();
        var image = $currentItem.find(".background-img-slide img").attr("src");
        var link = "#slideid-" + $currentItem.attr("data-value");
        var title = $currentItem.find('.video-wrapper--introduction h2').html();
        FB.ui({
          method: "feed",
          link: window.location.href.split('#')[0] + link,
          caption: title,
          picture: image,
        }
        , function(response) {
        }
        );
        _paq.push(['trackEvent', 'Social-share', 'Facebook', 'Hero']);
      });
    }
  };
}(jQuery));
