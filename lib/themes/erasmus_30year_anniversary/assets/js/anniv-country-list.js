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

  Drupal.behaviors.annivCountryList = {
    attach: function (context, settings) {
      var helper = {
        countryClass: function() {
          $('.form-item-country .form-select option').each(function() {
            var idCountry = $(this).val();
            var classCountry = $(this).attr('class');
            arrayClass[idCountry] = classCountry;
          });

          return arrayClass;
        },
        // Create unordered list from select.
        createCountryList: function() {
          // List label.
          var listLabelPath = $('.country-filter-form div[class*=views-widget-filter-field_] label');
          var listLabel = listLabelPath.text().trim();
          listLabelPath.closest('.country-filter-form div[class*=views-widget-filter-field_]').append('<div class="js-country-list__wrapper"><h2>' + listLabel + '</h2></div>');

          // Display active item.
          var selectedOptionText = $('option:selected').text();
          var selectedButton = '<a class="js-country-list__selected button button--stroke-secondary button--large">' + selectedOptionText + '</a></div>';

          var countryList = "";
          var arrayCountryClass = arrayClass;

          $('.form-item-country .form-select option').each(function() {
              var thisCountryId = $(this).val();
              var thisCountryClass = arrayCountryClass[thisCountryId];

            if (typeof(thisCountryClass) !== "undefined") {
                var thisCountryValue = $(this).val();
                var thisCountryLabel = $(this).text();
                var thisCountryListItem = '<li class="' + thisCountryClass + '" data-option-value="' + thisCountryValue + '">' + thisCountryLabel + '</li>';
                countryList += thisCountryListItem;
            }
          });

          $('.js-country-list__wrapper').append(selectedButton + '<div class="js-country-list__content"><ul>' + countryList + '</ul></div>');
        },
        openCountryList: function() {
          $('.js-country-list__content').fadeToggle();
          $(this).toggleClass('active');
        },
        selectCountry: function() {
          // Get country class.
          var countryValue = $(this).attr('data-option-value');
          // Trigger select option.
          $('option').val(countryValue).trigger("change");
        }
      };
      // Country classes array.
      var arrayClass = [];
      $('.country-filter-form').once('countryFilterLogic', function() {
        arrayClass = helper.countryClass();

        // Build country list.
        helper.createCountryList();

        // On click trigger the option element.
        $('.country-filter-form').on("click", ".js-country-list__wrapper ul li", helper.selectCountry);
        $('.country-filter-form').on("click", ".js-country-list__selected", helper.openCountryList);
      });
    }
  };
}(jQuery));
