<?php
/**
 * @file
 * Template for social media feed.
 */
?>

<section class="social-media-feed-container">
  <div class="swiper-wrapper">
    <?php foreach ($items as $item): ?>
      <div class="swiper-slide">
        <div class="content-wrapper">
          <a href="<?php print $item['url']; ?>" target="_blank">
            <?php if (isset($item['image']) && !empty($item['image'])): ?>
              <div class="image">
                <img src="<?php print $item['image']; ?>" />
              </div>
            <?php endif; ?>
            <div class="text">
              <?php print $item['text']; ?>
            </div>
            <div class="social-media-type social-media-type--<?php print $item['type']; ?>"></div>
          </a>
        </div>
      </div>
    <?php endforeach; ?>
  </div>
</section>
