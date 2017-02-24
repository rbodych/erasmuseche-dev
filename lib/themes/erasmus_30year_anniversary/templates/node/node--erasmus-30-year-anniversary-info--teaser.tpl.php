<?php
/**
 * @file
 * Default theme implementation to display a node.
 */
?>
<span class="node-erasmus-30-year-anniversary-info" data-value="<?php print $node->nid; ?>">
  <?php
    print render($content['infographic']);
  ?>
</span>
