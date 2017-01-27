/**
 * @file
 * Contacttabs.js.
 *
 * Javascript.
 *
 * @category Production
 *
 * @package ErasmusCore/Theme
 *
 * @author EAC WEB <EAC-LIST-C4@nomail.ec.europa.eu>
 *
 * @copyright 2016 European-Commission
 *
 * @license http://ec.europa.eu Europa
 * @link NA
 *
 * Contact tabs.
 */

(function ($) {
  'use strict';

  Drupal.behaviors.annivGlobal = {
    attach: function (context, settings) {
      $('.js-mobile-nav-toggle').once('annivGlobal', function() {
        // Trigger menu.
        $('.js-mobile-nav-toggle').click(function() {
          $(this).toggleClass("active");
          $('nav[role=navigation]').slideToggle();
        });

        // Newsletter form.
        $(".form-field .form-input").change(function() {
          var inputVal = $(this).val();

          if (inputVal != '' && typeof(inputVal) != "undefined") {
            $(this).addClass('input-active');
          }
          else {
            $(this).removeClass('input-active');
          }
        });
      });

      if ($(window).width() >= 992) {
        // Newsletter trigger dropdown.
        $('nav .cta-newsletter').append('<span class="glyphicon glyphicon-arrow-down" aria-hidden="true"></span>');

        $('nav .cta-newsletter').click(function(e) {
          console.log('click newsl');
          e.preventDefault();
          $('.anniversary-navbar .newsletter-form').toggleClass('open');
          $(this).find('.glyphicon-arrow-down, .glyphicon-remove').toggleClass('glyphicon-arrow-down glyphicon-remove');
        });
      }

      // Remove links in footer labels.
      $('footer .no-link').removeAttr('href');

      // Wrap color box links & image.
      $('.colorbox-load, .activate-colorbox').wrapAll('<div class="colorbox-wrapper"></div>');

      // Form on click on label simulate focus on input.
      $('.newsletter-form .newsletter-form--wrapper form .form-field').click(function() {
        $(this).find('input').trigger('focus');
      });

      // Trigger feedback form.
      $('.js-feedback a').click(function(e) {
        e.preventDefault();
        $(this).toggleClass('button-active');
        $('footer .container > .webform-client-form').toggleClass('form-active');
      });

      if ('objectFit' in document.body.style) {
        $('body').addClass('object-fit-supported');
      }
      else {
        $('body').addClass('object-fit-not-supported');
      }
    }
  };
}(jQuery));
