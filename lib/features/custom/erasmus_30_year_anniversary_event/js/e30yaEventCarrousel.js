/**
 * @file
 * Event carrousel.
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

  Drupal.behaviors.eventCarrousel = {
    attach: function (context, settings) {
      var spaceBetween = 20;
      var autoHeight = false;

       var helper = {
        respAutoHeight: function() {
          var windowWidth = $(window).width();
          if (windowWidth <= 480) {
            autoHeight = true;
          }
          return autoHeight;
        },
        respParam: function() {
          var windowWidth = $(window).width();
          if (windowWidth <= 768) {
            spaceBetween = 0;
          }
          return spaceBetween;
        }
      };

      var swiper = new Swiper('.pictures-container', {
        paginationClickable: true,
        spaceBetween: helper.respParam(),
        loop: true,
        centeredSlides: true,
        autoplay: 2500,
        autoplayDisableOnInteraction: false,
        slidesPerView: 'auto',
        autoHeight: helper.respAutoHeight()
      });
    }
  };
}(jQuery));
