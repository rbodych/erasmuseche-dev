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
 <div class="left"
    <?php print render($element['field_30ya_contentrow_media']); ?>
  </div>
  <div class="right">
    <h2>
      <?php print render($element['title_field']); ?>
    </h2>
    <?php print render($element['field_30ya_contentrow_richtext']); ?>
  </div>
</section>
