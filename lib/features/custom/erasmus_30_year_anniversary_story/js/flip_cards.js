/**
 * @file
 * Flip cards animation.
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

(function ($) {
  'use strict';

  Drupal.behaviors.flipCards = {
    attach: function (context, settings) {
      setTimeout(function() {
        $('.introduction__highlights div:nth-child(1)').removeClass('not-visible').addClass('visible');
      }
      , 1000);
      setTimeout(function() {
        $('.introduction__highlights div:nth-child(2)').removeClass('not-visible').addClass('visible');
      }
      , 2000);
      setTimeout(function() {
        $('.introduction__highlights div:nth-child(3)').removeClass('not-visible').addClass('visible');
      }
      , 3000);
    }
  };
}(jQuery));
