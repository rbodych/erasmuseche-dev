/**
 * @file
 * Erasmus+ 30 years anniversary logo.
 *
 * Javascript.
 *
 * @category Production
 *
 * @author EAC WEB <EAC-LIST-C4@nomail.ec.europa.eu>
 *
 * @copyright 2016 European-Commission
 *
 * @license http://ec.europa.eu Europa
 * @link NA
 */

(function() {
   var widget = document.getElementById('erasmusplus30years-widget');
   var baseurl = 'https://ec.europa.eu/programmes/erasmus-plus/';
   var homepageUrl = 'anniversary';
   var themePath = 'sites/erasmusplus/themes/erasmus_30year_anniversary/';
   var trackingPath = '?pk_campaign=erasmus30year&pk_source=widget&pk_medium=widget';
   if (widget.length > 0) {
     var language = widget.getAttribute("class");
     if (!language || language == 'undefined') {
       language = '';
     }
     else {
       language = '_' + language;
     }
     widget.innerHTML = '<div class="logo"><a href="' + baseurl + homepageUrl + trackingPath +
     '"><img src="' + baseurl + themePath + 'logo' + language  + '.png" /></a></div>';
   }
})();
