/**
 * @file
 * Social hero sharing.
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
/* global FB */

(function ($, Druapl) {
  'use strict';

  Drupal.behaviors.socialShareYourStory = {
    attach: function (context, settings) {
      $(".share-story.facebook a").once().click(function(e) {
        e.preventDefault();
        var title = $(this).parent().find(".hidden").html();
        FB.ui({
          method: "feed",
          caption: title,
          link: Drupal.settings.erasmus_30_year_anniversary_share_story.shareCompetitionUrl,
          picture: $('.logo-anniversary img').attr('src'),
        }
        , function(response) {
        }
        );
        _paq.push(['trackEvent', 'Social-share', 'Facebook', 'Share story']);
      });
    }
  };
}(jQuery, Drupal));
