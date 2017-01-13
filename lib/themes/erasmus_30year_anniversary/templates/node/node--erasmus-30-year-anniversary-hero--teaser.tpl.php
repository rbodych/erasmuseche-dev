<?php
/**
 * @file
 * Default theme implementation to display a node.
 */
?>
<div class="node-erasmus-30-year-anniversary-hero" data-value="<?php print $node->nid; ?>">
  <div class="video-wrapper">
    <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
      <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    
    <video>
      <source src="<?php print $content['vid']; ?>" type="video/mp4">
      <track label="<?php print $content['srt_lang']; ?>" kind="subtitles"
        srclang="<?php print $content['srt_lang']; ?>"
        src="<?php print $content['srt']; ?>">
    </video>
    <div class="video-controls">
      <a href="#" class="play"><span class="glyphicon glyphicon-play" aria-hidden="true"></span></a>
      <a href="#" class="pause"><span class="glyphicon glyphicon-pause" aria-hidden="true"></span></a>
    </div>
  </div>
  
  <div class="content"<?php print $content_attributes; ?>>
    <?php
      print render($content['field_30ya_position']);
      print render($content['field_country_na_events']);
      print render($content['body']);
    ?>
    <figure class="background-img-slide"><img src="<?php print render($content['banner_url']); ?>"></figure>
  </div>
  
  <div class="share">
    <p> <?php print t('Share on'); ?></p>
    <div class="share-link facebook hero">
      <a href="#"><?php print t('Share on Facebook'); ?></a>
    </div>
    <div class="share-link twitter">
      <a class="twitter-share-button" target="_blank"
        href="https://twitter.com/intent/tweet?text=<?php print $title; ?>&hashtags=<?php print $hashtag; ?>&url=<?php
          print $share_link; ?>">Tweet</a>
    </div>
  </div>
</div>
