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
      // list label
      var listLabelPath = $('#edit-country-wrapper label[for=edit-country]');
      var listLabel = listLabelPath.text().trim();
      listLabelPath.closest('form #edit-country-wrapper').append('<div class="js-country-list__wrapper"><h2>' + listLabel + '</h2></div>');
      
      // display active item
      var selectedOptionText = $('option:selected').text();
      var selectedButton = '<a class="js-country-list__selected button button--stroke-secondary button--large">' + selectedOptionText + '</a></div>'

      // create unordered list from select
      var countryList = "";
      $('select#edit-country option').each(function() {
          var thisCountryClass = $(this).attr('class');
          if(typeof(thisCountryClass) !== "undefined") {
            var thisCountryValue = $(this).val();
            var thisCountryLabel = $(this).text();
            var thisCountryListItem = '<li class="' + thisCountryClass + '" data-option-value="' + thisCountryValue + '">' + thisCountryLabel + '</li>';
            countryList += thisCountryListItem;
          }
      });
      $('#edit-country-wrapper .js-country-list__wrapper').append(selectedButton + '<div class="js-country-list__content"><ul>' + countryList + '</ul></div>');
      
      //on click trigger the option element
      $('#edit-country-wrapper').on("click", ".js-country-list__wrapper ul li", function () {
        //get country class
        var countryValue = $(this).attr('data-option-value');
        //trigger select option
        $('option').val(countryValue).trigger("change");
      });
      
      // toggle display of the list
      $('#edit-country-wrapper').on("click", ".js-country-list__wrapper .js-country-list__selected", function () {
        $('.js-country-list__content').slideToggle();
      });
      
    }
  )
})(jQuery);