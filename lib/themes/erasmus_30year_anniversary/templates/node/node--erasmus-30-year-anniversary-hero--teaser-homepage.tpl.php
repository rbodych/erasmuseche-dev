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
      <a class="button button--primary button--small" href="/discover-erasmusplus#slideid=<?php print $node->nid; ?>">
        <?php print t('Read more'); ?>
      </a>
    </p>
  </div>
</article>