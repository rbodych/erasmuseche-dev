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
      var spaceBetween = 20;

      function respParam() {
        var windowWidth = $(window).width();
        if (windowWidth <= 768) {
          spaceBetween = 0;
        }
        return spaceBetween;
      }
      
      var swiper = new Swiper('.social-media-feed-container', {
        paginationClickable: true,
        spaceBetween: respParam(),
        loop: true,
        centeredSlides: true,
        autoplay: 2500,
        autoplayDisableOnInteraction: false,
        slidesPerView: 'auto'
      });
    }
  };
}(jQuery));
