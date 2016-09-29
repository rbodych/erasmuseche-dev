/**
 * @file
 * Custom js for menu and tabs.
 */

(function ($) {

  $(document).ready(
    function () {
      /* MOBILE MENU */
      $('.mobile-subnav-wrapper button').click(
        function () {

          $('.nav-pills').slideToggle();
          $(this).find('span').toggleClass('glyphicon-chevron-down glyphicon-remove');
          $(this).find('span').toggleClass('active');

        }
      );

      /* TABS */
      /* on click close menu */
      $('.nav-pills li a').click(
        function () {
          var displayMobileNav = $('.mobile-subnav-wrapper').css('display');
          if (displayMobileNav == 'block') {
            $('.mobile-subnav-wrapper button').trigger('click');
          }
        }
      );

      /* CHANGE URL ON TAB CLICK */
      $('.nav-pills li a').click(
        function (evt) {
          var anchorId = $(this).attr('href');
          window.location.hash = anchorId;

          // Get current viewport top position */.
          var viewportTop = $(window).scrollTop();
          $('html, body').animate(
            {
              scrollTop: viewportTop
            }
          );
        }
      );

      /* go to top of page when inner content link */
      $('.tab-content a[href*="tab-"]').click(
        function () {
          $('html, body').animate(
            {
              scrollTop: $('header[role="banner"]').offset().top + 150
            }
          );
        }
      );

      /* ACTIVATE TAB VIA URL */
      $(document).ready(
        function () {
          activeTab();
        }
      );

      /* DETECT IF URL HAS CHANGED */
      $(window).on(
        'hashchange', function () {
          setTimeout(activeTab,600);

        }
      );

      /* FUNCTION TO TRIGGER THE TAB */

      function activeTab(){
        /* Get hash part from the URL */
        var hashUrl = window.location.hash;
        hashUrl = hashUrl.split('#')[1];

        /* Display tab */
        $('.nav a[href="#' + hashUrl + '"]').tab('show');
      };

      /* CONTACT LIST */
      /* GENERATE FILTER LIST */
      $(".contact-details-container .contactid").each(
        function () {
          var country = $(this).attr('class').replace('contactid','');
          if ($('li[data-country=' + country + ']').length == 0) {
            var countryListEl = '<li data-country=' + country + '>' + country.replace('-',' ') + '</li>';
            $('.contact-filters ul').append(countryListEl);
          }
        }
      );

      /* DROPDOWN MENU */
      $('.contact-filter-selected,.contact-filters li').click(
        function () {
          openDropdown();
        }
      );

      $('html').click(
        function () {
          if ($('.contact-filter-selected').hasClass('active')) {
            openDropdown();
          }
        }
      );

      $('.contact-details-container').click(
        function (event) {
          event.stopPropagation();
        }
      );
      /* DEPLOY DROPDOWN LIST */
      function openDropdown() {
        $('.contact-filters').slideToggle();
        $('.contact-filter-selected').toggleClass('active');
        $('.shadow-content').fadeToggle();
        $('.contact-filter-selected').toggleClass('close-dropdown');
      }

      /* SHOW HIDE RELATED CONTENT */
      $('.contact-filters ul').delegate(
        "li", "click", function () {
          $('.contact-filters ul li').removeClass('active');
          $(this).addClass('active');
          $(".default-filter-message").fadeOut("fast");
          $(".contact-details-container .contactid").fadeOut("fast");
          var selectedCountry = $(this).attr('data-country');
          $('.contact-filter-selected span').html(selectedCountry.replace('-',' '));
          $(".contact-details-container .contactid." + selectedCountry).fadeIn("slow");
        }
      );

      /* FEEDBACK FORM - SHOW SUBMIT ON CLICK ON RADIO BUTTON */
      $('.feedbackform .form-radio').click(
        function () {
          $('.feedbackform .form-submit').fadeIn();
        }
      );

      /* MOBILE NAV */
      /* DEPLOY MAIN NAV PANEL */
      $('.mobile-nav-bar button,.mobile-nav-shadow').click(
        function () {

          $('.mobile-nav-panel').toggleClass("js-open", 400, "easeInOutCubic");

          $(".mobile-nav-shadow").fadeToggle();
        }
      );

      /* ON FOCUS OF THE SEARCH FIELD */
      $(".mobile-nav-search input").focus(
        function () {

          $(".mobile-nav-shadow").fadeOut();
          $(".mobile-search-shadow").fadeIn();

          $(".mobile-nav-panel header").animate(
            {
              width: "120%"
            }, 200, function () {
            }
          );

          $(".mobile-nav-search input").animate(
            {
              position: "absolute",
              zIndex: 999,
              width:"90%",
              background: "#000"
            }, 200, function () {
              $(".mobile-search-suggestions").slideDown();
              $(".mobile-nav-panel header div .search-button").fadeIn();

            }
          );
        }
      );

      /* ON FOCUS OF THE SEARCH FIELD */
      $(".mobile-search-shadow").click(
        function () {
          $(".mobile-nav-panel header .search-button").animate(
            {
              display: "none"
            }, 1, function () {
              $(".mobile-nav-panel header .search-button").css("display" , "none");
              $(".mobile-search-suggestions").slideUp("fast");
            }
          );

          $(".mobile-nav-panel header").animate(
            {
              width: "100%"
            }, 200, function () {
            }
          );

          $(".mobile-nav-search input").animate(
            {
              position: "static",
              width:"100%",
              background: "#000"
            }, 200, function () {
              $(".mobile-nav-shadow").fadeIn();
              $(".mobile-search-shadow").fadeOut();
            }
          );

        }
      );

      /* EXPAND TOOL PANEL */
      $(".nav-tool-expand").click(
        function () {
          $(".mobile-nav-tools li a.active").trigger("click");

          var expandClass = $(this).attr("data-expand");
          $("div." + expandClass).slideToggle();
          $(".nav-main-wrapper").slideToggle();

          $(this).closest("li").toggleClass("active");
        }
      );

    }
  );
})(jQuery);
