/**
 * @file
 * Video controls.
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

  Drupal.behaviors.videoControls = {
    attach: function (context, settings) {
      var $vidControls = $(".video-controls");
      $vidControls.find(".play").click(function(e) {
        e.preventDefault();
        var $video = $(this).parent().parent().find('video');
        $video.get(0).play();

        $video.attr("controls", "controls");
        $(this).closest('.video-controls').fadeOut();
        
        var introVideoContent =  $(this).closest('.video-wrapper').find('.video-wrapper--introduction');
        introVideoContent.fadeOut();
        var introVideoHtml = introVideoContent.html();
        $(this).closest('.video-wrapper').next(".content").prepend('<div class="video-wrapper--introduction">' + introVideoHtml + '</div>');
      });

      $vidControls.find(".pause").click(function(e) {
        e.preventDefault();
        var $video = $(this).parent().parent().find('video');
        $video.get(0).pause();
      });

      $("video").on("ended", function() {
        $(this).parent().find(".video-controls").fadeIn();
        $(this).closest('.video-controls').fadeIn();
        $(this).closest('.video-wrapper').find('.video-wrapper--introduction').fadeIn();
        $(this).closest('.video-wrapper').next('.content').find('.video-wrapper--introduction').remove();
      });
    }
  };
}(jQuery));
