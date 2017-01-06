<?php
/**
 * @file
 * Default theme implementation for field collection items.
 */
?>
<?php 
  $class = $element['field_30ya_contentrow_type'][0]['#markup'];
?>
<section class="container content-stripe <?php print $class; ?> clearfix"<?php print $attributes; ?>>
  <?php
    unset($element['field_30ya_contentrow_type']);
  ?>
  <h2 class="title">
    <?php print render($element['title_field']); ?>
  </h2>
  <div class="content">
    <?php print render($element); ?>
  </div>
</section>
