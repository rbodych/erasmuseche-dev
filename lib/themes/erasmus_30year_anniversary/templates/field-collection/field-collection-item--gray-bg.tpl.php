<?php
/**
 * @file
 * Default theme implementation for field collection items.
 */
?>
<section class="container content-stripe <?php print $type; print ' ' . $disable_auto_columns; ?> clearfix"<?php print $attributes; ?>>
  <h2>
    <?php print $title_field; ?>
  </h2>
  <div class="content">
    <?php print $text; ?>
  </div>
</section>
