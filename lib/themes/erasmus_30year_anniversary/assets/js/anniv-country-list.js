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

(function($) {
  $(document).ready(
    function () {

      // country classes array
      var arrayClass = [];
      arrayClass = countryClass();
      
      function countryClass() {
        $('.form-item-country .form-select option').each(function() {
          var idCountry = $(this).val();
          var classCountry = $(this).attr('class');
          arrayClass[idCountry] = classCountry;
        });
        
        return arrayClass;
      }
      
      // create unordered list from select
      function createCountryList() {
        // list label
        var listLabelPath = $('.views-widget-filter-field_30ya_country_tid_i18n label[for*=edit-country]');
        var listLabel = listLabelPath.text().trim();
        listLabelPath.closest('form .views-widget-filter-field_30ya_country_tid_i18n').append('<div class="js-country-list__wrapper"><h2>' + listLabel + '</h2></div>');
        
        // display active item
        var selectedOptionText = $('option:selected').text();
        var selectedButton = '<a class="js-country-list__selected button button--stroke-secondary button--large">' + selectedOptionText + '</a></div>';
        
        var countryList = "";
        var arrayCountryClass = arrayClass;

        $('.form-item-country .form-select option').each(function() {
            var thisCountryId = $(this).val();
            var thisCountryClass = arrayCountryClass[thisCountryId];

            if(typeof(thisCountryClass) !== "undefined") {
              var thisCountryValue = $(this).val();
              var thisCountryLabel = $(this).text();
              var thisCountryListItem = '<li class="' + thisCountryClass + '" data-option-value="' + thisCountryValue + '">' + thisCountryLabel + '</li>';
              countryList += thisCountryListItem;
            }
        });
        
        $('.views-widget-filter-field_30ya_country_tid_i18n .js-country-list__wrapper').append(selectedButton + '<div class="js-country-list__content"><ul>' + countryList + '</ul></div>');
      }
      
      // Build country list
      createCountryList();
      // On click trigger the option element.
      $('.views-widget-filter-field_30ya_country_tid_i18n').on("click", ".js-country-list__wrapper ul li", selectCountry);
      $('.views-widget-filter-field_30ya_country_tid_i18n').on("click", ".js-country-list__selected", openCountryList);
      
      $(document).ajaxComplete(function(event, jqXHR, ajaxOptions) {
        if (ajaxOptions.data) {
          var ifIncludesCountry = ajaxOptions.data.includes("country");
          if (ifIncludesCountry) {
            // Rebuild country list.
            createCountryList();
            // On click trigger the option element.
            $('.views-widget-filter-field_30ya_country_tid_i18n').on("click", ".js-country-list__wrapper ul li", selectCountry);
            $('.views-widget-filter-field_30ya_country_tid_i18n').on("click", ".js-country-list__selected", openCountryList);
          }
        }
      });
      
      function openCountryList() {
        $('.js-country-list__content').fadeToggle();
        $(this).toggleClass('active');
      }
      
      function selectCountry() {
        //get country class
        var countryValue = $(this).attr('data-option-value');
        //trigger select option
        $('option').val(countryValue).trigger("change");
      }
    }
  )
})(jQuery);