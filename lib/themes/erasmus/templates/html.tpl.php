<?php
/**
 * @file
 * Html.tpl.php.
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
 * Default theme implementation of main page.
 */
?>
<!DOCTYPE html>
<html lang="<?php print (isset($language) ? $language->language : '') ?>">
<head>
  <meta http-equiv="X-UA-Compatible" content="IE=edge"/>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes; ?>>
<div id="skip-link">
  <a href="#main-content" class="element-invisible element-focusable">
    <?php print t('Skip to main content'); ?>
  </a>
</div>
<?php print $page_top; ?>
<?php print $page; ?>
<?php print $page_bottom; ?>
</body>
</html>
