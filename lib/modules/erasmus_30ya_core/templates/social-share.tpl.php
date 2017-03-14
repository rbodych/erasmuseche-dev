<?php
/**
 * @file
 * Template for social sharing.
 */
?>
<div class="share">
  <p class="no-link">
    <?php print t('Share on') ?>
  </p>
  <div class="share-link facebook <?php print $class; ?>">
     <?php print $fb; ?>
  </div>
  <div class="share-link twitter">
     <?php print $tw; ?>
  </div>
</div>
