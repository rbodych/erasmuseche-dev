<?php
/**
 * @file
 * Random stories TPL, used on the homepage.
 */
?>
<?php foreach ($stories as $story): ?>
  <div class="item-card-float">
    <img src="<?php print $story['url']; ?>"
      alt="<?php print $story['alt']; ?>" />
  </div>
<?php endforeach; ?>
