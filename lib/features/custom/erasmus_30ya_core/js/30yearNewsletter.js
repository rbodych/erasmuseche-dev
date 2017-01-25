/**
 * @file
 * Newsletter.
 *
 * Javascript.
 *
 * @category Production
 *
 * @package ErasmusCore/erasmuscore
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

  Drupal.behaviors.year30Newsletter = {
    attach: function (context, settings) {

      $('.newsletter-form--wrapper form').submit(function(e) {
        var isOneChecked = false;
        $('.newsletter-form--wrapper .checkbox-wrapper').find("input[type='checkbox']").each(function () {
          var isChecked = $(this).prop('checked');
          if (isChecked) {
            isOneChecked = true;
          }
        });
        if (!isOneChecked) {
          e.preventDefault();
          var $checkBoxWrapper = $('.checkbox-wrapper');
          var wrapperError = '<div class="error"></div>';
          var $wrapperError = $checkBoxWrapper.find('.error');
          if ($wrapperError.length <= 0) {
            $checkBoxWrapper.append(wrapperError);
            $wrapperError = $checkBoxWrapper.find('.error');
          }
          $wrapperError.html(Drupal.t('Please select one interest'));
        }
      });

      $('.select-all-topics').change(function() {
        var checkedStatus = this.checked;
        $('.newsletter-form--wrapper .checkbox-wrapper').find("input[type='checkbox']").each(function () {
          $(this).prop('checked', checkedStatus);
        });
        var $selectAllStatus = $('.select-all-status');
        var statusIs = $selectAllStatus.html();
        if(statusIs == Drupal.t("All")) {
          $selectAllStatus.html(Drupal.t("None"));
        }
        else {
          $selectAllStatus.html(Drupal.t("All"));
        };
      });

      var allCountries = [
        "Afghanistan",
        "Albania",
        "Algeria",
        "Andorra",
        "Angola",
        "Antigua and Barbuda",
        "Argentina",
        "Armenia",
        "Australia",
        "Austria",
        "Azerbaijan",
        "Bahamas",
        "Bahrain",
        "Bangladesh",
        "Barbados",
        "Belarus",
        "Belgium",
        "Belize",
        "Benin",
        "Bhutan",
        "Bolivia",
        "Bosnia and Herzegovina",
        "Botswana",
        "Brazil",
        "Brunei",
        "Bulgaria",
        "Burkina Faso",
        "Burundi",
        "Cabo Verde",
        "Cambodia",
        "Cameroon",
        "Canada",
        "Central African Republic (CAR)",
        "Chad",
        "Chile",
        "China",
        "Colombia",
        "Comoros",
        "Democratic Republic of theCongo",
        "Republic of the Congo",
        "Costa Rica",
        "Cote d'Ivoire",
        "Croatia",
        "Cuba",
        "Cyprus",
        "Czech Republic",
        "Denmark",
        "Djibouti",
        "Dominica",
        "Dominican Republic",
        "Ecuador",
        "Egypt",
        "El Salvador",
        "Equatorial Guinea",
        "Eritrea",
        "Estonia",
        "Ethiopia",
        "Fiji",
        "Finland",
        "France",
        "Gabon",
        "Gambia",
        "Georgia",
        "Germany",
        "Ghana",
        "Greece",
        "Grenada",
        "Guatemala",
        "Guinea",
        "Guinea-Bissau",
        "Guyana",
        "Haiti",
        "Honduras",
        "Hungary",
        "Iceland",
        "India",
        "Indonesia",
        "Iran",
        "Iraq",
        "Ireland",
        "Israel",
        "Italy",
        "Jamaica",
        "Japan",
        "Jordan",
        "Kazakhstan",
        "Kenya",
        "Kiribati",
        "Kosovo",
        "Kuwait",
        "Kyrgyzstan",
        "Laos",
        "Latvia",
        "Lebanon",
        "Lesotho",
        "Liberia",
        "Libya",
        "Liechtenstein",
        "Lithuania",
        "Luxembourg",
        "Macedonia",
        "Madagascar",
        "Malawi",
        "Malaysia",
        "Maldives",
        "Mali",
        "Malta",
        "Marshall Islands",
        "Mauritania",
        "Mauritius",
        "Mexico",
        "Micronesia",
        "Moldova",
        "Monaco",
        "Mongolia",
        "Montenegro",
        "Morocco",
        "Mozambique",
        "Myanmar (Burma)",
        "Namibia",
        "Nauru",
        "Nepal",
        "Netherlands",
        "New Zealand",
        "Nicaragua",
        "Niger",
        "Nigeria",
        "North Korea",
        "Norway",
        "Oman",
        "Pakistan",
        "Palau",
        "Palestine",
        "Panama",
        "Papua New Guinea",
        "Paraguay",
        "Peru",
        "Philippines",
        "Poland",
        "Portugal",
        "Qatar",
        "Romania",
        "Russia",
        "Rwanda",
        "Saint Kitts and Nevis",
        "Saint Lucia",
        "Saint Vincent and the Grenadines",
        "Samoa",
        "San Marino",
        "Sao Tome and Principe",
        "Saudi Arabia",
        "Senegal",
        "Serbia",
        "Seychelles",
        "Sierra Leone",
        "Singapore",
        "Slovakia",
        "Slovenia",
        "Solomon Islands",
        "Somalia",
        "South Africa",
        "South Korea",
        "South Sudan",
        "Spain",
        "Sri Lanka",
        "Sudan",
        "Suriname",
        "Swaziland",
        "Sweden",
        "Switzerland",
        "Syria",
        "Taiwan",
        "Tajikistan",
        "Tanzania",
        "Thailand",
        "Timor-Leste",
        "Togo",
        "Tonga",
        "Trinidad and Tobago",
        "Tunisia",
        "Turkey",
        "Turkmenistan",
        "Tuvalu",
        "Uganda",
        "Ukraine",
        "United Arab Emirates (UAE)",
        "United Kingdom (UK)",
        "United States of America (USA)",
        "Uruguay",
        "Uzbekistan",
        "Vanuatu",
        "Vatican City (Holy See)",
        "Venezuela",
        "Vietnam",
        "Yemen",
        "Zambia",
        "Zimbabwe"
      ];
      $(".autocomplete-country").autocomplete({
        source: allCountries
      });

    }
  };
}(jQuery));
