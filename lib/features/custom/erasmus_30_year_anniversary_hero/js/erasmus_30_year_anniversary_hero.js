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

(function($) {
  $(document).ready(
    function () {
      var mySwiper = new Swiper ('.swiper-container', {
        direction: 'horizontal',
        loop: true,
        pagination: '.swiper-pagination',
        slidesPerView: 'auto',
        centeredSlides: true,
        paginationClickable: true,
        spaceBetween: 30,
        hashNav: true
      });
      
      // Will be executed the first time.
      var $activeSlide = $('.swiper-slide-active');
      var bgUrl = $activeSlide.find('.background').attr('data-url');
      $('.content-container-wrapper').css({ 'background-image': 'url("' + bgUrl + '")' });

      mySwiper.on('slideChangeStart', function (swiper) {
        var $activeSlide = $('.swiper-slide-active');
        var bgUrl = $activeSlide.find('.background').attr('data-url');
        
        var $contentContainerWrapper = $('.content-container-wrapper');
        $contentContainerWrapper.css({ 'background-image': 'url("' + bgUrl + '")' });
        $contentContainerWrapper.fadeIn('slow');
        history.replaceState(null, null, '#slide-' + swiper.realIndex);
        var index = (swiper.realIndex + 1);
        $('.swiper-numeric-pagination').jqPagination('option', 'current_page', index);
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
      }
    }
  )
})(jQuery);
