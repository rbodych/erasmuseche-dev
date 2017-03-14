/**
 * @file
 * Colorbox handling.
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

  Drupal.behaviors.activateColorbox = {
    attach: function (context, settings) {
      var $activateColorbox = $('.activate-colorbox');
      if ($activateColorbox.length > 0) {
        $activateColorbox.once().click(function(e) {
          e.preventDefault();
          $(this).parent().find('.colorbox-load').click();
        });
      }
    }
  };
}(jQuery));
