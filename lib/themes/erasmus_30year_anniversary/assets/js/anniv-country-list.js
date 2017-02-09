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

  // Country classes array.
  var arrayClass = [];

  Drupal.behaviors.annivCountryList = {
    attach: function (context, settings) {
      var helper = {
        countryClass: function(selectorOfWidget) {
          $(selectorOfWidget + ' .form-select option').each(function() {
            var idCountry = $(this).val();
            var classCountry = $(this).attr('class');
            arrayClass[idCountry] = classCountry;
          });

          return arrayClass;
        },
        // Create unordered list from select.
        createFilterList: function(selectorOfWidget, isCountry) {
          isCountry = (typeof isCountry !== 'undefined') ?  isCountry : false;
          // List label.
          var listLabelPath = $('.exposed-filter-form ' + selectorOfWidget + ' .form-type-select label');
          var listLabel = listLabelPath.text().trim();
          listLabelPath.closest('.exposed-filter-form ' + selectorOfWidget).append('<div class="js-filter-list__wrapper"><h2>' + listLabel + '</h2></div>');

          // Display active item.
          var selectedOptionText = $(selectorOfWidget + ' option:selected').text();
          var selectedButton = '<a class="js-filter-list__selected button button--stroke-secondary button--large">' + selectedOptionText + '</a></div>';

          var countryList = "";
          var arrayCountryClass = arrayClass;

          $(selectorOfWidget + ' .form-type-select .form-select option').each(function() {
            var thisCountryId = $(this).val();
            if (isCountry) {
              var thisCountryClass = arrayCountryClass[thisCountryId];
            }
            else {
              var thisCountryClass = thisCountryId;
            }
            if (typeof(thisCountryClass) !== "undefined") {
                var thisCountryValue = $(this).val();
                var thisCountryLabel = $(this).text();
                var thisCountryListItem = '<li class="' + thisCountryClass + '" data-option-value="' + thisCountryValue + '">' + thisCountryLabel + '</li>';
                countryList += thisCountryListItem;
            }
          });
          $(selectorOfWidget + ' .js-filter-list__wrapper').append(selectedButton + '<div class="js-filter-list__content"><ul>' + countryList + '</ul></div>');
        },
        openCountryList: function($this) {
          $this.parent().find('.js-filter-list__content').fadeToggle();
          $this.parent().toggleClass('active');
        },
        selectCountry: function($this, wrapper) {
          // Get country class.
          var countryValue = $this.attr('data-option-value');
          // Trigger select option.
          $(wrapper).find('.form-type-select option').val(countryValue).trigger("change");
        }
      };

      $('.exposed-filter-form').once('countryFilterLogic', function() {
        if (arrayClass.length <= 0) {
          arrayClass = helper.countryClass('#edit-country-wrapper');
        }

        // Build country list.
        helper.createFilterList('#edit-country-wrapper', true);
        helper.createFilterList('.views-widget-filter-field_30ya_is_passed_value_i18n');

        // On click trigger the option element.
        $('#edit-country-wrapper .js-filter-list__wrapper ul li').click(function() {
          helper.selectCountry($(this), '#edit-country-wrapper');
        });
        $('.views-widget-filter-field_30ya_is_passed_value_i18n .js-filter-list__wrapper ul li').click(function() {
          helper.selectCountry($(this), '.views-widget-filter-field_30ya_is_passed_value_i18n');
        });
        $('#edit-country-wrapper .js-filter-list__selected').click(function() {
          helper.openCountryList($(this));
        });
        $('.views-widget-filter-field_30ya_is_passed_value_i18n .js-filter-list__selected').click(function() {
          helper.openCountryList($(this));
        });
      });
    }
  };
}(jQuery));
