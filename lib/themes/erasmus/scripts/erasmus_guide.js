/**
 * @file
 * erasmus_guide.js
 * 
 * Bootstrap tooltips
 * Toolbar
 * Feedback form
 * Left menu: no dropdown
 * Level3 and levem4 page: generate menu path for level1 and level2
 * 
 */

(function ($) {
  $(document).ready(
    function () {

      /* INIT BOOTSTRAP TOOLTIPS */
      $('.block-print-ui .content > span a').attr({ 'data-toggle':"tooltip", 'data-placement':"top"});

      /* CUSTOM TOOLTIPS */
      $('a[data-toggle="tooltip"]').each(function () {
        var tooltipText = $(this).attr('title');
        $(this).append('<span class="tooltip-wrapper">' + tooltipText + '</span>');
      });

      /* CREATE TOOLBAR WITH NAV AND TOOLS */
      if ($('#block-print-ui-print-links ').length != 0 && typeof($('#block-print-ui-print-links') !== "undefined") && $('#block-print-ui-print-links') !== null) {
        var tools = '<div class="book-toolbar--tools">' + $('#block-print-ui-print-links .content').html() + '</div>';
        $('.main-banner.page hgroup').append(tools);
        $('.book-navigation').before('<div class="content--tools-wrapper">' + tools + '</div>');
        $('#block-print-ui-print-links ').remove();
      }
      else {
        var tools = '';
      }
      /* Menu toolbar from 3rd level */
      var domSideMenu = $('.sidebar-wrapper .menu');

      if (typeof(domSideMenu[length]) !== "undefined") {
        var domSideMenuSection = $('.sidebar-wrapper h2').html();
        var menuToolbar = '<div class="menu-tool--wrapper"><button class="button button--medium button--primary menu-tool--expand"><span class="glyphicon glyphicon-menu-hamburger" aria-hidden="true"></span> ' + domSideMenuSection + '</button><ul class="menu-tool--content">' + domSideMenu.html() + '</ul></div>';
      }
      else {
        var pageTitle = $('header hgroup h1').html();
        var menuToolbar = '<h1>' + pageTitle + '</h1>';
      }

      /* Open menu toolbar on click */
      $('body').on('click', '.menu-tool--expand', function () {
        $(this).removeClass('menu--tool--passive');
        $(this).addClass('menu--tool--active');

        var glyphButton = $(this).find('.glyphicon');

        if ($(this).find('.glyphicon').hasClass('glyphicon-menu-hamburger')) {
          glyphButton.switchClass('glyphicon-menu-hamburger', 'glyphicon-remove');
        }
        else {
          glyphButton.switchClass('glyphicon-remove', 'glyphicon-menu-hamburger');
        }

        $('.menu-tool--content').slideToggle();

      })

      if (typeof($('.book-navigation > .page-links') !== "undefined") && $('.book-navigation > .page-links') !== null) {

        /* BUTTON NEXT */
        var nextEl = $('.book-navigation > .page-links .page-next');
        if (typeof(nextEl[0]) !== "undefined") {
          var buttonNextPageTitle = nextEl.text().replace('›','');
          var buttonNextPageTitleLink = '<a class="controls--content controls--next-content"  href="' + $('.book-navigation > .page-links').find('.page-next')[0] + '">' + buttonNextPageTitle + '</a>';

          var buttonNextLabel = nextEl.attr('title');

          var buttonNextLink = '<a class="controls--nav-link controls--next" href="' + $('.book-navigation > .page-links').find('.page-next')[0] + '">' + buttonNextLabel + ' <span class="glyphicon glyphicon-menu-right" aria-hidden="true"></span></a>';
          var buttonNext = '<div class="controls--next-wrapper">' + buttonNextPageTitleLink + buttonNextLink + '</div>';
          nextEl.html(buttonNextPageTitle + ' <span class="glyphicon glyphicon-menu-right" aria-hidden="true"></span>');
        }
        else {
          buttonNext = "";
        }

        /* BUTTON PREV */
        var previousEl = $('.book-navigation > .page-links .page-previous');
        if (typeof(previousEl[0]) !== "undefined") {
          var buttonPreviousPageTitle = previousEl.text().replace('‹','');
          var buttonPreviousPageTitleLink = '<a class="controls--content controls--previous-content" href="' + $('.book-navigation > .page-links').find('.page-previous ')[0] + '">' + buttonPreviousPageTitle + '</a>';

          var buttonPreviousLabel = previousEl.attr('title');

          var buttonPreviousLink = '<a class="controls--nav-link controls--previous" href="' + $('.book-navigation > .page-links').find('.page-previous ')[0] + '"><span class="glyphicon glyphicon-menu-left" aria-hidden="true"></span> ' + buttonPreviousLabel + '</a>';
          var buttonPrevious = '<div class="controls--previous-wrapper">' + buttonPreviousPageTitleLink + buttonPreviousLink + '</div>';
          previousEl.html('<span class="glyphicon glyphicon-menu-left" aria-hidden="true"></span> ' + buttonPreviousPageTitle);
        }

        var bookNav = '<div class="book-toolbar--controls">' + buttonPrevious + buttonNext + '</div>';

        var toolbar = '<div class="book-toolbar hide-toolbar"><div class="container">' + menuToolbar + tools + bookNav + '</div></div>';

        $('body').append(toolbar);
      }
      else {
        var bookNav = '';
      }

      $(window).scroll(function () {
        if ($(".book-navigation").isOnScreen() == true || $('header.main-banner').isOnScreen() == true) {
          $(".book-toolbar").removeClass('show-toolbar');
          $(".book-toolbar").addClass('hide-toolbar');
        }
        if ($(".book-navigation").isOnScreen() != true  && $('header.main-banner').isOnScreen() != true) {
          $(".book-toolbar").removeClass('hide-toolbar');
          $(".book-toolbar").addClass('show-toolbar');
        }

      });

      $.fn.isOnScreen = function () {

        var win = $(window);

        var viewport = {
          top : win.scrollTop(),
          left : win.scrollLeft()
        };
        viewport.right = viewport.left + win.width();
        viewport.bottom = viewport.top + win.height();

        var bounds = this.offset();
        bounds.right = bounds.left + this.outerWidth();
        bounds.bottom = bounds.top + this.outerHeight();

        return (!(viewport.right < bounds.left || viewport.left > bounds.right || viewport.bottom < bounds.top || viewport.top > bounds.bottom));

      };

      /* FEEDBACK FORM - SHOW SUBMIT ON CLICK ON RADIO BUTTON */
      $('.feedbackform .form-radio').click(
        function () {
          $('.feedbackform .form-submit').fadeIn();
        }
      );

      /* Left menu item with dropdown rewritten  */
      $('.dropdown-toggle').each(function () {
        var urlReplace = $(this).attr('href');
        var urlTitle = $(this).text();
        $(this).closest('li').find('.dropdown-menu').before('<a class="list-group-item dropdown-toggle active" href="' + urlReplace + '" alt="' + urlTitle + '">' + urlTitle + '</a>');
        $(this).remove();
      });

      /* Active menu item detection */
      var currentUrl = window.location.pathname;

      if (currentUrl.indexOf("/programmes/erasmus-plus/") >= 0) {
        currentUrl = currentUrl.split('/programmes/erasmus-plus')[1];
      }

      if (currentUrl.indexOf("/programme-guide") >= 0) {
        currentUrl = currentUrl.split('/programme-guide')[1];
      }

      currentUrl = currentUrl.split('/');

      $.each(currentUrl, function (i, slice) {
        if (i == 1) {
          $('.block-om-maximenu:first-of-type li a[href*="' + slice + '"]').addClass('active');
        }
        else if (i == 2) {
          $('.om-menu-ul-wrapper li a[href*="' + slice + '"]').addClass('active');
        }
      });

    }
  );
})(jQuery);
