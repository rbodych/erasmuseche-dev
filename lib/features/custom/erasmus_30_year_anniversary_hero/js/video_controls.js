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

(function($) {
  $(document).ready(
    function () {
      var $vidControls = $(".video-controls");
      $vidControls.find(".play").click(function(e) {
        // If already paused: .get(0).paused
        e.preventDefault();
        var $video = $(this).parent().parent().find('video');
        $video.get(0).play();
        
        $video.attr("controls", "controls");
        $(this).closest('.video-controls').fadeToggle();
      });

      $vidControls.find(".pause").click(function(e) {
        e.preventDefault();
        var $video = $(this).parent().parent().find('video');
        $video.get(0).pause();
      });

      $("video").on("ended", function() {
        $(this).parent().find(".video-controls").show();
      });
    }
  )
})(jQuery);