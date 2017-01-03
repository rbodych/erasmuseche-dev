<?php
/**
 * @file
 * Default theme implementation to display a node.
 * Teaser homepage.
 */
?>
<article>
  <figure>
    <img src="<?php print render($content['banner_url']); ?>" title="<?php print $title; ?>" alt="<?php print $title; ?>" />
  </figure>
  <div class="">
    <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
      <h3><?php print $title; ?></h3>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    
    <?php
      print render($content['body']);
    ?>
    <p>
      <a class="button button--stroke-secondary button--small" href="<?php print $content['node_url']; ?>">
        <?php print t('Read more'); ?>
      </a>
    </p>
  </div>
</article>