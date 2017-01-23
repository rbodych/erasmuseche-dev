/**
 * @file
 * Hero carrousel.
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

  Drupal.behaviors.heroCore = {
    attach: function (context, settings) {
      // Check viewport for parameters.
      var spaceBetween;

      function respParam() {
        var windowWidth = $(window).width();
        if (windowWidth <= 768) {
          spaceBetween = 20;
        }
        else if (windowWidth <= 992) {
          spaceBetween = 350;
        }
        else if (windowWidth >= 992) {
          spaceBetween = 350;
        }
        return spaceBetween;
      }

      var mySwiper = new Swiper('.swiper-container', {
        direction: 'horizontal',
        loop: false,
        pagination: '.swiper-pagination',
        slidesPerView: 'auto',
        centeredSlides: true,
        paginationClickable: true,
        spaceBetween: respParam(),
        hashNav: true
      });

      // Will be executed the first time.
      var $activeSlide = $('.swiper-slide-active');
      var bgImg = $activeSlide.find('.background-img-slide').html();
      $('body > .background-img-full').html(bgImg);

      mySwiper.on('slideChangeStart', function (swiper) {
        var $activeSlide = $('.swiper-slide-active');
        var bgImg = $activeSlide.find('.background-img-slide').html();
        $('body > .background-img-full').html(bgImg);

        history.replaceState(null, null, '#slide-' + swiper.realIndex);
        var index = (swiper.realIndex + 1);
        $('.swiper-numeric-pagination').jqPagination('option', 'current_page', index);

        if (typeof maybeObject != "undefined") {
          _paq.push(['trackEvent', 'Hero', 'slidechange']);
        }
      });

      $('.swiper-numeric-pagination').jqPagination({
        paged: function(page) {
          mySwiper.slideTo((page - 1));
          history.replaceState(null, null, '#slide-' + (page - 1));
        }
      });

      if (window.location.hash) {
        var hash = window.location.hash;
        var string = "#slide-";
        if (hash.indexOf(string) !== -1) {
          var res = hash.replace(string, "");
          mySwiper.slideTo(res);
        }
        var nodeIdHash = "#slideid=";
        if (hash.indexOf(nodeIdHash) !== -1) {
          var res = hash.replace(nodeIdHash, "");
          $('.node-erasmus-30-year-anniversary-hero').each(function() {
            if ($(this).attr('data-value') == res) {
              var scrollToIndex = $(this).parent().index();
              mySwiper.slideTo(scrollToIndex);
            }
          });
        }
      }
    }
  };
}(jQuery));
