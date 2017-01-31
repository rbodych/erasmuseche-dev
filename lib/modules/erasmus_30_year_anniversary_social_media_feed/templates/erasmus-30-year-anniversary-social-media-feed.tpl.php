<?php
/**
 * @file
 * Template for social media feed.
 */
?>

<section class="social-media-feed-container">
  <section class="view-filters gradient-stripe gradient-a">
    <div class="gradient-stripe__content">
      <h2>
        <?php print t('Social media feed'); ?>
      </h2>
    </div>
    <div class="background-pattern"></div>
  </section>

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
