<?php
/**
 * @file
 * Custom template file colorbox html in the popup.
 */
?>
<div class="colorbox-popup-html">
  <div class="main">
    <?php print $main; ?>
  </div>
  <div class="sub-items">
    <?php foreach ($sub as $item): ?>
      <div class="item">
        <?php print $item; ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>
