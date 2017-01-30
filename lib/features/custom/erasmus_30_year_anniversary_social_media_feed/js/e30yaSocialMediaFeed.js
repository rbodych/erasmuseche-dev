/**
 * @file
 * Social media feed carrousel.
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
/* global Swiper */

(function ($) {
  'use strict';

  Drupal.behaviors.socialMediaFeed = {
    attach: function (context, settings) {
      var swiper = new Swiper('.social-media-feed-container', {
        paginationClickable: true,
        spaceBetween: 30,
        loop: true,
        centeredSlides: true,
        autoplay: 2500,
        autoplayDisableOnInteraction: false
      });
    }
  };
}(jQuery));
