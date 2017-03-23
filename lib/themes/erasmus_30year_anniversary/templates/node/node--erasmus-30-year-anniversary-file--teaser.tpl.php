<?php
/**
 * @file
 * Default theme implementation to display a node.
 */
?>
<div class="node-erasmus-30-year-anniversary-file">
  <div class="content"<?php print $content_attributes; ?>>
    <h3>
      <?php
        print $content['title_field'][0]['#markup'];
      ?>
    </h3>
    <p class="p-summary">
      <?php
       print render($content['field_e30ya_file_size']);
     ?>
    </p>
    <div class="description equal-height">
      <?php
        print render($content['field_e30ya_file_description']);
      ?>
    </div>
    <?php
       print render($content['file']);
    ?>
  </div>
</div>
