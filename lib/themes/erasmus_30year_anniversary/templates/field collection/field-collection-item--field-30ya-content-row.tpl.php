<?php
/**
 * @file
 * Default theme implementation for field collection items.
 */
?>
<?php 
  $class = $content['field_30ya_contentrow_type'][0]['#markup'];
?>
<div class="<?php print $class; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <?php
      unset($content['field_30ya_contentrow_type']);
      
      switch ($class) {
        case 'image-left-row':
          print '<div class="left">';
          print render($content['field_30ya_contentrow_media']);
          print '</div><div class="right">';
          print render($content['title_field']);
          print render($content['field_30ya_contentrow_richtext']);
          print '</div>';

          break;
 
        case 'video-row':
          print '<div class="left">';
          print render($content['title_field']);
          print render($content['field_30ya_contentrow_richtext']);
          print '</div><div class="right">';
          print render($content['field_30ya_contentrow_media']);
          print '</div>';

          break;

        default:
          print render($content);
      }
    ?>
  </div>
</div>
