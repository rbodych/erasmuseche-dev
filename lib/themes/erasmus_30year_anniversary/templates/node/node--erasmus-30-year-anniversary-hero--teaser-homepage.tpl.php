<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Teaser homepage.
 */
?>
<article>
  <figure>
    <?php print render($content['banner_url']); ?>
  </figure>
  <div class="stripe-highlight--assets-text">
    <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
      <h3><?php print $title; ?></h3>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    
    <?php
      print render($content['field_30ya_position']);
      print render($content['field_country_na_events']);
      print render($content['body']);
    ?>
    <p>
      <?php print $content['moreLink']; ?>
    </p>
  </div>
</article>
