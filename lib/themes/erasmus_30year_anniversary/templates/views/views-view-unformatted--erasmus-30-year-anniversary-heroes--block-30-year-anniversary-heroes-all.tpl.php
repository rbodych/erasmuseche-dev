<button type="button" class="btn btn-primary btn-lg" data-toggle="modal" data-target="#allHeroes">
  <?php print t('View all heroes'); ?>
</button>

<div class="all-heroes modal fade" id="allHeroes" tabindex="-1" role="dialog" aria-labelledby="allHeroes" aria-hidden="true">
  <h2>
    <?php print t('All heroes'); ?>
    <button type="button" class="close" data-dismiss="modal" aria-label="Close">
      <span class="glyphicon glyphicon-remove" aria-hidden="true"></span>
    </button>
  </h2>
  <div class="all-heroes-content modal-dialog" role="document">
        <?php if (!empty($title)): ?>
          <h3><?php print $title; ?></h3>
        <?php endif; ?>
        <?php foreach ($rows as $id => $row): ?>
          <article<?php if ($classes_array[$id]) { print ' class="all-heroes-item ' . $classes_array[$id] .'"';  } ?>>
            <?php print $row; ?>
          </article>
        <?php endforeach; ?>
  </div>
</div>
