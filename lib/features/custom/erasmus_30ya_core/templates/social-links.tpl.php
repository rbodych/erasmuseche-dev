<?php
/**
 * @file
 * Template for social links.
 */
?>
<div class="find-us-on">
  <div class="title">
    <?php print t('Erasmus+ on'); ?>
  </div>
  <div class="links">
    <ul>
    <?php foreach ($links as $link): ?>
      <li>
        <?php print $link; ?>
      </li>
    <?php endforeach; ?>
    </ul>
  </div>
</div>
