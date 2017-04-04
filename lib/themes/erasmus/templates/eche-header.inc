<?php // @codingStandardsIgnoreStart ?>
<a id="top-page"></a>
<?php if ($page['announcement']) : ?>
  <section class="notification">
    <div class="container-fluid">
      <div class="notification__content">
        <div class="notification__text" align="center">
          <p><?php print render($page['announcement']); ?></p>
        </div>
      </div>
    </div>
  </section>
<?php endif; ?>
<div id="ErasmusDisclaimer" class="modal fade" role="dialog">
  <div class="modal-dialog">
    <div id="ErasmusDisclaimer" class="modal-content">
      <div class="modal-header">
        <img src="<?php print $GLOBALS['base_url'] .
          "/" . path_to_theme() ?>/images/disclaimer.png">
      </div>
      <div>
      </div>
      <div class="modal-body">
        <div class="row">
          <div class="col-md-5" id="modalleft">
            <h1><?php print $modallefttitlelineone; ?></h1>
            <h1><?php print $modallefttitlelinetwo; ?></h1>
          </div>
          <div class="col-md-7" id="modalright">
            <p><?php print $modalrighttext; ?></p>
          </div>
          <div class="col-md-12" id="modalbottom">
            <a type="button" class="link-more" data-dismiss="modal">
              <?php print $modalclose; ?>
            </a>
            <?php print $modalnewsletter; ?>
          </div>
        </div>
      </div>
    </div>
  </div>
</div>
<div class="videowrap">
  <label class="closebox">×</label>
  <iframe id="video" frameborder="0" allowfullscreen></iframe>
</div>
<div class="container">
  <?php print $regions['header_top']; ?>
</div>
<div id="layout-header">
  <div class="container">
    <img alt="European Commission logo"
         id="banner-flag" src="<?php print $logo; ?>"/>
    <span id="banner-image-right" class="hidden-sm hidden-xs">
        <?php print $regions['header_right']; ?>
    </span>
    <div id="main-title"><?php print $site_name; ?></div>
    <div id="sub-title" class="hidden-xs"><?php print $site_slogan; ?></div>
  </div>
</div>
<div class="region-featured-wrapper
<?php print ($has_responsive_sidebar ? 'sidebar-visible-sm' : ''); ?>">
  <?php if ($menu_visible || $has_responsive_sidebar) : ?>
    <div class="mobile-user-bar navbar navbar-default visible-sm visible-xs"
         data-spy="affix" data-offset-top="82">
      <div class="container">
        <div class="navbar-header" data-spy="affix" data-offset-top="165">
          <?php if ($menu_visible) : ?>
            <button id="menu-button" type="button" class="navbar-toggle"
                    data-toggle="collapse" data-target=".navbar-ex1-collapse">
              <div class="arrow-down"></div>
            </button>
          <?php endif; ?>
          <?php if ($has_responsive_sidebar) : ?>
            <div class="sidebar-button-wrapper">
              <button class="sidebar-button">
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
              </button>
            </div>
          <?php endif; ?>
        </div>
      </div>
    </div>
  <?php endif; ?>
  <?php print $regions['featured']; ?>

  <?php if (isset($node->type) && $node->type != 'video_gallery') : ?>
    <?php if (isset($hide_page_margin) && $hide_page_margin != TRUE): ?>
      <div class="<?php if (isset($bgpage)) : print $bgpage;
      endif; ?> pagemargin">
        <div id="layout-body imgbg" class="container">
        </div>
      </div>
    <?php endif; ?>
  <?php endif; ?>
</div>
<?php if ($has_responsive_sidebar) : ?>
  <div id="responsive-sidebar">
    <div id="responsive-header-right"></div>
    <div id="responsive-sidebar-left"></div>
    <div id="responsive-sidebar-right"></div>
  </div>
<?php endif; ?>
<?php // @codingStandardsIgnoreEnd ?>
