<div class="all-heroes">
  <a class="open-close-link" href="#" alt="<?php print t('View all heroes'); ?>"><?php print t('View  all heroes'); ?></a>
  <div class="all-heroes-content">
    <?php if (!empty($title)): ?>
      <h3><?php print $title; ?></h3>
    <?php endif; ?>
    <?php foreach ($rows as $id => $row): ?>
      <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
        <?php print $row; ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>
