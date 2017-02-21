/**
 * @file
 * Default colorbox handling for HTML.
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

(function ($) {
  'use strict';

  Drupal.behaviors.colorboxHtmlHandling = {
    attach: function (context, settings) {

      $('.colorbox-load.handle-html-popup').click(function(e) {
        e.preventDefault();
        var html = $(this).closest('.node-erasmus-30-year-anniversary-info').find('.colorbox-popup-html').html();
        $(this).colorbox({
          html: '<div class="colorbox-popup-html shown">' + html + '</div>',
          onComplete : function() {
            Drupal.behaviors.infographicsSocialShare.socialShareAttach();
          }    
        });
      })
    }
  };
}(jQuery));
