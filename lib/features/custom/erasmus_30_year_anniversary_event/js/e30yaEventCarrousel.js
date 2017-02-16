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
        pagination: '.swiper-pagination',
        spaceBetween: helper.respParam(),
        loop: true,
        centeredSlides: true,
        autoplay: 2500,
        autoplayDisableOnInteraction: false,
        slidesPerView: 'auto',
        autoHeight: false,
        lazyLoading: true,
        preloadImages: false,
        lazyLoadingOnTransitionStart: true,
        lazyLoadingInPrevNext: true
      });
    }
  };
}(jQuery));
