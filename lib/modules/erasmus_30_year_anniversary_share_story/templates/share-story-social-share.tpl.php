<?php
/**
 * @file
 * Template for social sharing on share your story.
 */
?>
<div class="share share-story">
  <div class="share-story-wrapper">
    <p class="no-link">
      <?php print t('Let others know:') ?>
    </p>
    <div class="share-link facebook share-story">
      <?php print $fb; ?>
      <div class="hidden">
        <?php print $title; ?>
      </div>
    </div>
    <div class="share-link twitter">
      <?php print $tw; ?>
    </div>
  </div>
</div>
