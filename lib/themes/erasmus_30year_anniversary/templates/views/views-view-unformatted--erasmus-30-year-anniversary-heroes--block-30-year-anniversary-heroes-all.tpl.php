<?php

/**
 * @file
 * View TPL for all videos/heroes popup.
 */
?>

<button type="button" class="button button--stroke-secondary button--medium" data-toggle="modal" data-target="#allHeroes">
  <span class="glyphicon glyphicon-th-large" aria-hidden="true"></span> <?php print t('View all videos'); ?>
</button>

<div class="all-heroes modal fade" id="allHeroes" tabindex="-1" role="dialog" aria-labelledby="allHeroes" aria-hidden="true">
  <h2>
    <?php print t('All videos'); ?>
    <button type="button" class="close" data-dismiss="modal" aria-label="Close">
      <span class="glyphicon glyphicon-remove" aria-hidden="true"></span>
    </button>
  </h2>
  <div class="all-heroes-content modal-dialog" role="document">
        <?php if (!empty($title)): ?>
          <h3><?php print $title; ?></h3>
        <?php endif; ?>
        <?php foreach ($rows as $id => $row): ?>
          <article class="all-heroes-item">
            <?php print $row; ?>
          </article>
        <?php endforeach; ?>
  </div>
</div>
