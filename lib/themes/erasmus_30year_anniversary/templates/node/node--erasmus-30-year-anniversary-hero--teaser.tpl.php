<?php
/**
 * @file
 * Default theme implementation to display a node.
 */
?>
  <div class="video-wrapper">
    <video controls="controls">
      <source src="<?php print $content['vid']; ?>" type="video/mp4">
      <track label="<?php print $content['srt_lang']; ?>" kind="subtitles"
        srclang="<?php print $content['srt_lang']; ?>"
        src="<?php print $content['srt']; ?>">
    </video>
    <div class="video-controls">
      <a href="#" class="play"><?php print t('Play'); ?></a>
      <a href="#" class="pause"><?php print t('Pause'); ?></a>
    </div>
  </div>
  
  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <div class="content"<?php print $content_attributes; ?>>
    <?php
      print render($content['body']);
    ?>
    <figure class="background-img-slide"><img src="<?php print render($content['banner_url']); ?>"></figure>
  </div>
  
  <div class="share">
    <div class="share-link facebook hero">
      <a href="#"><?php print t('Share on Facebook'); ?></a>
    </div>
    <div class="share-link twitter">
      <a class="twitter-share-button"
        href="https://twitter.com/intent/tweet?text=<?php print $title; ?>&hashtags=<?php print $hashtag; ?>&url=<?php 
          print $share_link; ?>">Tweet</a>
    </div>
  </div>

