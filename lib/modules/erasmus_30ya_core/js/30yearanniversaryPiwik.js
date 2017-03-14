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

(function ($) {
  'use strict';

  Drupal.behaviors.piwik = {
    attach: function (context, settings) {
      $(".twitter").once().click(function(e) {
        _paq.push(['trackEvent', 'Social-share', 'Twitter']);
      });
      $('video').on('play', function(e) {
        var src = $(this).find('source').attr('src');
        _paq.push(['trackEvent', 'Video', 'Play', src]);
      });
      $('.menu .cta-newsletter').once().click(function(e) {
        _paq.push(['trackEvent', 'Newsletter', 'Click', 'Menu']);
      });
      $('.menu .newsletter-form--wrapper').once().submit(function() {
        _paq.push(['trackEvent', 'NewsletterS', 'Submit', 'Menu']);
      });
      $('.newsletter-form .newsletter-form--wrapper').once().submit(function() {
        _paq.push(['trackEvent', 'NewsletterS', 'Submit', 'Page']);
      });
      $('.track-share-story').once().click(function(e) {
        _paq.push(['trackEvent', 'Share-Story', 'Click']);
      });
      $('.share-story-form .form-fields-wrapper .form-submit').once().click(function(e) {
        _paq.push(['trackEvent', 'Share-StoryS', 'Submit']);
      });
      $('.exposed-filter-form').once().submit(function(e) {
        _paq.push(['trackEvent', 'Filter', 'exposed_filter']);
      });
    }
  };
}(jQuery));
