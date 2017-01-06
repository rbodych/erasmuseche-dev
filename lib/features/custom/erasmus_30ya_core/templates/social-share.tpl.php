<?php
/**
 * @file
 * Template for social sharing.
 */
?>
<div class="share">
  <div class="share-link facebook normal">
    <a href="#"><?php print t('Share on Facebook'); ?></a>
  </div>
  <div class="share-link twitter">
    <a class="twitter-share-button"
      href="https://twitter.com/intent/tweet?text=<?php print $title; ?>&hashtags=<?php print $hashtags; ?>">
      Tweet
    </a>
  </div>
</div>