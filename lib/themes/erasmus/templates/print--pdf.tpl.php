<?php
/**
 * @file
 * Print--pdf.tpl.php.
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
<head>
  <?php print $head; ?>
  <base href='<?php print $url ?>'/>
  <title><?php print $print_title; ?></title>
  <?php print $scripts; ?>
  <?php if (isset($sendtoprinter)) {
    print $sendtoprinter;
  } ?>
  <?php print $robots_meta; ?>
  <?php if (theme_get_setting('toggle_favicon')): ?>
    <link rel='shortcut icon' href='<?php print theme_get_setting('favicon') ?>'
          type='image/x-icon'/>
  <?php endif; ?>
  <?php print $css; ?>
</head>
<body>
<?php if ($print_logo): ?>
  <div class="print-logo"><?php print $print_logo; ?></div>
<?php endif; ?>
<p/>
<?php if (!isset($node->type)): ?>
  <h2 class="print-title"><?php print $print_title; ?></h2>
<?php endif; ?>
<div class="print-content"><?php print $content; ?></div>
<div class="print-footer"><?php print theme('print_footer'); ?></div>
<hr class="print-hr"/>
<?php if ($sourceurl_enabled): ?>
  <div class="print-source_url">
    <?php print theme('print_sourceurl', array(
      'url' => $source_url,
      'node' => $node,
      'cid' => $cid,
    )); ?>
  </div>
<?php endif; ?>
<div class="print-links"><?php print theme('print_url_list'); ?></div>
<?php print $footer_scripts; ?>
</body>
