<div class="random-stories">
  <?php foreach ($stories as $story): ?>
    <div class="item">
      <img src="<?php print $story['url']; ?>"
        alt="<?php print $story['alt']; ?>" />
    </div>
  <?php endforeach; ?>
</div>
