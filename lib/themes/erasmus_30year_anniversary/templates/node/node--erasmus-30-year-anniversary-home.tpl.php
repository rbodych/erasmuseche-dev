<?php
/**
 * @file
 * Default theme implementation to display a node.
 */
?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="top">
    <div class="left">
       <?php print render($title_prefix); ?>
        <h1<?php print $title_attributes; ?>><?php print $title; ?></h1>
      <?php print render($title_suffix); ?>
      <?php print render($content['body']); ?>
    </div>
    <div class="right">
      <?php
        print erasmus_30_year_anniversary_story_get_html_random_stories();
      ?>
    </div>
  </div>
 
  <div class="gradient-stripe gradient-a" <?php print $content_attributes; ?>>
    <div class="background-pattern"></div>
    <div class="gradient-stripe__content">
      <?php
        print render($content['field_30ya_share_story_text']);
      ?>
    </div>
    <div class="btn">
      <a href="/share-my-story"><php print t('Share my story'); ?></a>
    </div>
  </div>
 
  <div class="bottom" <?php print $content_attributes; ?>>
    <div class="left">
      <?php
        print render($content['field_30ya_discover_erasmus']);
      ?>
      <div class="btn">
        <a href="/discover-erasmusplus"><php print t('Discover more'); ?></a>
      </div>
    </div>
    <div class="right">
       <?php
        print views_embed_view('erasmus_30_year_anniversary_heroes', 'block_random_hero');
      ?>
    </div>
  </div>
</div>
