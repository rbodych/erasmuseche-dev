<?php
/**
 * @file
 * Default theme implementation to display a node.
 */
?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?> data-value="<?php print $node->nid; ?>">
  
  <div class="background" data-url="<?php print render($content['banner_url']); ?>"></div>
  
  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <div class="content"<?php print $content_attributes; ?>>
    <?php
      print render($content['body']);
    ?>
  </div>
  
  <video controls="controls">
    <source src="<?php print $content['vid']; ?>" type="video/mp4">
    <track label="<?php print $content['srt_lang']; ?>" kind="subtitles"
      srclang="<?php print $content['srt_lang']; ?>"
      src="<?php print $content['srt']; ?>">
  </video>
  
  <div class="share">
    <div class="share-link facebook">
      <a href="#"><?php print t('Share on Facebook'); ?></a>
    </div>
    <div class="share-link twitter">
      <a class="twitter-share-button"
        href="https://twitter.com/intent/tweet?text=<?php print $title; ?>&hashtags=<?php print $hashtag; ?>&url=<?php 
          print $share_link; ?>">Tweet</a>
    </div>
  </div>

</div>
