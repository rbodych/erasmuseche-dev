/**
 * @file
 * Social default sharing.
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
/* global _paq */
/* global FB */

(function ($) {
  'use strict';

  Drupal.behaviors.socialShare = {
    attach: function (context, settings) {
      $(".share-link.facebook.normal").once().click(function(e) {
        e.preventDefault();
        FB.ui({
          method: "feed",
          link: window.location.href.split('#')[0],
        }
        , function(response) {
        }
        );
        _paq.push(['trackEvent', 'Social-share', 'Facebook', 'normal']);
      });
    }
  };
}(jQuery));
