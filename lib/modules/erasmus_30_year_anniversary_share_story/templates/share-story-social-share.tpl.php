<?php
/**
 * @file
 * Template for social sharing on share your story.
 */
?>
<div class="share share-story">
  <div class="share-link facebook share-story">
    <p class="no-link">
      <?php print t('Share on') ?>
    </p>
    <?php print $fb; ?>
    <div class="hidden">
      <?php print $title; ?>
    </div>
  </div>
  <div class="share-link twitter">
    <?php print $tw; ?>
  </div>
</div>
