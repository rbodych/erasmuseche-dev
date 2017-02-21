/**
 * @file
 * Social infographics sharing.
 *
 * Javascript.
 *
 * @category Production
 *
 * @package ErasmusCore/erasmus_30_year_anniversary_hero
 *
 * @copyright 2016 European-Commission
 *
 * @license http://ec.europa.eu Europa
 * @link NA
 */

/* global jQuery */
/* global _paq */
/* global FB */

(function ($) {
  'use strict';

  Drupal.behaviors.infographicsSocialShare = {};
  Drupal.behaviors.infographicsSocialShare.socialShareAttach = function() {
    $(".share-link.facebook.infographic").click(function(e) {
      e.preventDefault();
      console.log($(this).closest('.colorbox-popup-html').find('img').attr('src'));
      FB.ui({
        method: "feed",
        link: window.location.href.split('#')[0],
        picture: $(this).closest('.colorbox-popup-html').find('img').attr('src'),
      }
        , function(response) {
      }
      );
      _paq.push(['trackEvent', 'Social-share', 'Facebook', 'infographics']);
    });
  }
}(jQuery));
