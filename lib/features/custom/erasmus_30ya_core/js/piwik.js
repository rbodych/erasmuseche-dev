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
      $(".twitter").click(function(e) {
        _paq.push(['trackEvent', 'Social-share', 'Twitter']);
      });
      $('.video-controls .play').click(function(e) {
        _paq.push(['trackEvent', 'Video', 'Play', 'Hero']);
      });
      $('.menu .cta-newsletter').click(function(e) {
        _paq.push(['trackEvent', 'Newsletter', 'Click', 'Menu']);
      });
      $('.menu .newsletter-form--wrapper').submit(function() {
        _paq.push(['trackEvent', 'NewsletterS', 'Submit', 'Menu']);
      });
      $('.newsletter-form .newsletter-form--wrapper').submit(function() {
        _paq.push(['trackEvent', 'NewsletterS', 'Submit', 'Page']);
      });
      $('.track-share-story').click(function(e) {
        _paq.push(['trackEvent', 'Share-Story', 'Click']);
      });
      $('.share-story-form .form-fields-wrapper .form-submit').click(function(e) {
        _paq.push(['trackEvent', 'Share-StoryS', 'Submit']);
      });
      $('.country-filter-form').submit(function(e) {
        _paq.push(['trackEvent', 'Filter', 'Country']);
      });
    }
  };
}(jQuery));
