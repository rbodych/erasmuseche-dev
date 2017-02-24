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

  Drupal.behaviors.infoGraphicCarrousel = {
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
        },
        respSlidesPerView: function() {
          var windowWidth = $(window).width();
          var slidesPerView = 4;
          if (windowWidth <= 480) {
            slidesPerView = 1;
          }
          if (windowWidth <= 1050 && windowWidth > 480) {
            slidesPerView = 2;
          }
          return slidesPerView;
        }
      };

      var swiper = new Swiper('.swiper-container--infographics', {
        pagination: '.swiper-pagination',
        slidesPerView: helper.respSlidesPerView(),
        slidesPerColumn: 2,
        paginationClickable: true,
        spaceBetween: helper.respParam(),
        nextButton: '.swiper-button-next',
        prevButton: '.swiper-button-prev',
        //autoplay: 2500,
        //autoplayDisableOnInteraction: false,
        lazyLoading: true,
        preloadImages: false,
        lazyLoadingOnTransitionStart: true,
        lazyLoadingInPrevNext: true
      });

      swiper.on('slideChangeStart', function (swiper) {
        var $activeSlide = $('.swiper-slide-active');

        var index = (swiper.realIndex + 1);
        $('.swiper-numeric-pagination').jqPagination('option', 'current_page', index);

        if (typeof maybeObject != "undefined") {
          _paq.push(['trackEvent', 'Infographic', 'slidechange']);
        }
      });

      var amountOfSlides = $('.swiper-container--infographics .swiper-wrapper').children().length;
      var slidesPerView = helper.respSlidesPerView();
      slidesPerView = slidesPerView + 1;
      var $swiperNumericNav = $('.swiper-numeric-pagination');
      var dataMaxPage = amountOfSlides / slidesPerView;
      dataMaxPage = Math.round(dataMaxPage);

      $swiperNumericNav.find('input').attr('data-max-page', dataMaxPage);
      $swiperNumericNav.jqPagination({
        paged: function(page) {
          swiper.slideTo((page - 1));
        }
      });
    }
  };
}(jQuery));
