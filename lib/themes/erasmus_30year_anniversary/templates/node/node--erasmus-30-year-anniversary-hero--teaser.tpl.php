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
      <div class="video-wrapper--introduction">
        <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
        <p><?php print render($content['field_30ya_position']); ?></p>
        <?php print render($content['field_country_na_events']); ?>
      </div>

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
      print render($content['body']);
    ?>
    <figure class="background-img-slide">
      <?php print render($content['banner_url']); ?>
    </figure>
  </div>
  
  <div class="share">
    <p> <?php print t('share'); ?></p>
    <div class="share-link facebook hero">
      <?php print $share_fb; ?>
    </div>
    <div class="share-link twitter">
      <?php print $share_tw; ?>
    </div>
  </div>
</div>
