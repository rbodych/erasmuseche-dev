<?php
/**
 * @file
 * Template for social sharing on share your story.
 */
?>
<div class="share share-story">
  <div class="share-link facebook share-story">
    <a href="#"><?php print t('Share on Facebook'); ?></a>
    <div class="hidden">
      <?php print $title; ?>
    </div>
  </div>
  <div class="share-link twitter">
    <a class="twitter-share-button"
      href="https://twitter.com/intent/tweet?text=<?php print $title; ?>&hashtags=<?php print $hashtags; ?>">
      Tweet
    </a>
  </div>
</div>
