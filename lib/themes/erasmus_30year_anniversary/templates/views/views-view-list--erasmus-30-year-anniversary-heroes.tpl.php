<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>

<div class="swiper-numeric-pagination">
  <a href="#" class="first" data-action="first">&laquo;</a>
  <a href="#" class="previous" data-action="previous">&lsaquo;</a>
  <input type="text" disabled readonly="readonly" data-max-page="<?php print count($rows); ?>" />
  <a href="#" class="next" data-action="next">&rsaquo;</a>
  <a href="#" class="last" data-action="last">&raquo;</a>
</div>
    
<!-- Slider main container -->
<div class="swiper-container">
    <!-- Additional required wrapper -->
    <div class="swiper-wrapper">
        <!-- Slides -->
        <?php foreach ($rows as $id => $row): ?>
          <div class="swiper-slide"><?php print $row; ?></div>
        <?php endforeach; ?>
    </div>
    <!-- If we need pagination -->
    <div class="swiper-pagination"></div>
    
    <!-- If we need navigation buttons -->
    <div class="swiper-button-prev"></div>
    <div class="swiper-button-next"></div>
</div>