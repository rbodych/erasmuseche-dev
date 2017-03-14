<?php
/**
 * @file
 * Default theme implementation for field collection items.
 */
?>
<section class="container content-stripe <?php print $type; ?> clearfix"<?php print $attributes; ?>>
 <div class="left">
    <h2>
      <?php print $title_field; ?>
    </h2>
    <?php print $text; ?>
  </div>
  <div class="right">
    <?php print $media; ?>
  </div>
</section>
