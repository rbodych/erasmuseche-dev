<?php
/**
 * @file
 * Default theme implementation to display a block.
 */
?>
<a class="js-mobile-nav-toggle">
  <span><?php print t('menu'); ?></span>
  <hr/>
  <hr/>
</a>
<div class="container">
  <div class="logo-anniversary">
    <img alt="<?php print t('Erasmus+ 30 anniversary logo'); ?>" src="/sites/all/themes/erasmus_30year_anniversary/logo.png" />
  </div>
  <nav role="navigation">
    <?php print $content ?>
  </nav>
</div>
