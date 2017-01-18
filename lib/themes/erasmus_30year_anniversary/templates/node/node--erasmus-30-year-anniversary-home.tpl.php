<?php
/**
 * @file
 * Default theme implementation to display a node.
 */
?>
<section class="gradient-stripe gradient-a" <?php print $content_attributes; ?>>
  <div class="background-pattern"></div>
  <?php if ($content['hideShareStory'] == 0): ?>
    <div class="gradient-stripe__content">
      <?php
        print render($content['field_30ya_share_story_text']);
      ?>
    </div>
  <?php endif; ?>
</section>

<section class="stripe-highlight--right" <?php print $content_attributes; ?>>
  <div class="stripe-highlight--content">
    <?php
      print render($content['field_30ya_discover_erasmus']);
    ?>
  </div>
  <div class="stripe-highlight--assets">
     <?php
      print views_embed_view('erasmus_30_year_anniversary_heroes', 'block_random_hero');
    ?>
  </div>
</section>
