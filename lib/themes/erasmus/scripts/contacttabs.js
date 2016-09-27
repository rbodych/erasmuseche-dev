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
 * @copyright 2015 European-Commission
 *
 * @license http://ec.europa.eu Europa
 * @link NA
 *
 * Contact tabs.
 */

(function ($) {

  $(document).ready(
    function () {
      $("#delCookie").click(
        function () {
          del_cookie("cookie");
        }
      );

      var visit = getCookie("cookie");
      if (visit == null) {
        $("#ErasmusDisclaimer").modal("show");
        var expire = new Date();
        expire = new Date(expire.getTime() + 7776000000);
        document.cookie = "cookie=here; expires=" + expire;
      }
    }
  );

  function del_cookie(name)
  {
    document.cookie = name + '=; expires=Thu, 01 Jan 1970 00:00:01 GMT;';
  }
  function getCookie(c_name) {
    var c_value = document.cookie;
    var c_start = c_value.indexOf(" " + c_name + "=");
    if (c_start == -1) {
      c_start = c_value.indexOf(c_name + "=");
    }
    if (c_start == -1) {
      c_value = null;
    }
    else {
      c_start = c_value.indexOf("=", c_start) + 1;
      var c_end = c_value.indexOf(";", c_start);
      if (c_end == -1) {
        c_end = c_value.length;
      }
      c_value = unescape(c_value.substring(c_start, c_end));
    }
    return c_value;
  }
})(jQuery);
