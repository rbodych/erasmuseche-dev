<?php
/**
 * @file
 * Default theme implementation for field collection items.
 */
?>
<?php 
  $class = $content['field_30ya_contentrow_type'][0]['#markup'];
?>
<section class="container content-stripe <?php print $class; ?> clearfix"<?php print $attributes; ?>>
  <?php
    unset($content['field_30ya_contentrow_type']);

    switch ($class) {
      case 'image-left-row':
        print '<div class="left">';
        print render($content['field_30ya_contentrow_media']);
        print '</div><div class="right">';
        print '<h2>' . render($content['title_field']) . '</h2>';
        print render($content['field_30ya_contentrow_richtext']);
        print '</div>';

        break;

      case 'video-row':
        print '<div class="left">';
        print '<h2>' . render($content['title_field']) . '</h2>';
        print render($content['field_30ya_contentrow_richtext']);
        print '</div><div class="right">';
        print render($content['field_30ya_contentrow_media']);
        print '</div>';

        break;

      default:
        print '<h2 class="title">';
        print render($content['title_field']);
        print '</h2><div class="content">';
        print render($content);
        print '</div>';
    }
  ?>
</section>
