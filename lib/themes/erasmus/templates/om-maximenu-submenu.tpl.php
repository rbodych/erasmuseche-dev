<?php

/**
 * @file
 * Om-maximenu-submenu.tpl.php.
 *
 * PHP version 5
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
 * Default theme implementation of om maximenu with submenu blocks.
 *
 * Available variables:
 * - $maximenu_name: Menu name given on configuration
 * - $disabled: Set links to be disabled when viewing the page of its path
 * - $links: All menu items which also contents each link property.
 *
 * Helper variables:
 * - $zebra: Same output as $block_zebra but independent of any block region.
 * - $id: Same output as $block_id but independent of any block region.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 * - $user: (object) user properties
 * - $code: unique id given in the system
 * - $total: number of links
 *
 * @see template_preprocess_om_maximenu_submenu()
 * @see template_preprocess_om_maximenu_submenu_links()
 * @see template_preprocess_om_maximenu_submenu_content()
 */
?>
<div id="om-menu-<?php print $maximenu_name; ?>-ul-wrapper"
class="om-menu-ul-wrapper">
  <div class="navbar navbar-default" data-spy="affix" data-offset-top="165">
    <div class="container">
      <div class="collapse navbar-collapse navbar-ex1-collapse">
        <ul id="om-menu-<?php print $maximenu_name; ?>"
        class="om-menu nav navbar-nav">
            <?php foreach ($links['links'] as $key => $content): ?>
            <?php $count++; ?>
            <?php
            print theme(
                'om_maximenu_submenu_links', array(
                  'content' => $content,
                  'maximenu_name' => $maximenu_name,
                  'skin' => $skin,
                  'disabled' => $disabled,
                  'key' => $key,
                  'code' => $code,
                  'count' => $count,
                  'total' => $total,
                )
            ); ?>
            <?php endforeach; ?>
          </ul>
          <div id="socialicons" class="socialiconsmenu ">
            <?php print $iconnewsletter . $newsletterdesktop .
            $facebook . $twitter . $gplus; ?>
         </div>
       </div>
     </div>
   </div>
 </div>
<nav class="mobile-nav-wrapper visible-xs-block visible-sm-block" 
role="navigation">
    <div class="mobile-nav-bar">
        <button>
    <?php print $nav_ico; ?>
        </button>
        <h1><?php print $namesite; ?></h1>
    <?php print $flat_ec_logo; ?>
    </div>
    <div class="mobile-nav-panel">
        <header>
            <div class="nav-mobile-wrapper">
        <?php print $logo_ce_en; ?>
    <h1><?php print $namesite; ?></h1>
            </div>
        </header>
        <ul class="mobile-nav-tools">
            <li>
                <span class="glyphicon glyphicon-comment" aria-hidden="true"></span>
                <?php print $lang; ?>
            </li>
      <li>
                <i class="fa fa-newspaper-o"></i><?php print $newslettermobile; ?>
            </li>
      <li>
                <i class="fa fa-search"></i><?php print $searchlink; ?>
            </li>
        </ul>
        <div class="mobile-tools-panel mobile-nav-lg container">
            <p><?php print $langintro; ?></p>
            <p><?php print $langlink . $langsummary; ?></p>
        </div>
        <div class="nav-main-wrapper">
            <ul>
    <?php foreach ($links['links'] as $key => $content): ?>
                <?php $count++; ?>
                <?php print theme(
    'om_maximenu_submenu_links', array(
      'content' => $content,
      'maximenu_name' => $maximenu_name,
      'skin' => $skin,
      'disabled' => $disabled,
      'key' => $key,
      'code' => $code,
      'count' => $count,
      'total' => $total,
    )
); ?>
    <?php endforeach; ?>
            </ul>
        </div>
    </div>
    <div class="mobile-nav-shadow"></div>
</nav>
