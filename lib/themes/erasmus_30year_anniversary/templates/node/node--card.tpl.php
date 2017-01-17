<?php
/**
 * @file
 * Default theme implementation to display a node.
 */
?>

<article class="node--card h-event <?php print isset($card_class) ? $card_class : ''; ?>">
  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
  ?>
  <?php if (isset($image)): ?>
    <img src="<?php print $image; ?>" alt="<?php print $title; ?>" class="card-image"/>
  <?php endif; ?>
  <?php if (isset($date)): ?>
    <p class="dt-start">
      <span class="glyphicon glyphicon-calendar" aria-hidden="true"></span>
      <?php print $date; ?>
    </p>
  <?php endif; ?>
  <?php if (isset($city)): ?>
    <p class="p-location">
      <span class="glyphicon glyphicon-map-marker" aria-hidden="true"></span>
      <?php print $city . ', ' . $country; ?>
    </p>
  <?php endif; ?>
  <?php if (isset($sector) || isset($theme)): ?>
    <p class="p-category">
      <span class="glyphicon glyphicon-tag" aria-hidden="true"></span>
      <?php print isset($sector) ? $sector : ''; ?>
      <?php print isset($theme) ? $theme : ''; ?>
    </p>
  <?php endif; ?>
  <?php if (isset($intro)): ?>
    <p class="p-summary">
      <?php print $intro; ?>
    </p>
  <?php endif; ?>

  <?php if (isset($expected_participants)): ?>
    <div class="node--card__participants">
      <p><?php print $expected_participants['number']; ?></p>
      <h4><?php print $expected_participants['title']; ?></h4>
    </div>
  <?php endif; ?>
  <ul class="node--card__links">
    <?php if (isset($link)): ?>
      <li>
        <?php print $link; ?>
      </li>
    <?php endif; ?>
    <?php if (isset($organiser)): ?>
      <li>
        <?php print $organiser; ?>
      </li>
    <?php endif; ?>
    <?php if (isset($fact_links)): ?>
      <?php foreach ($fact_links as $flink): ?>
        <li>
          <?php print $flink; ?>
        </li>
      <?php endforeach; ?>
    <?php endif; ?>
  </ul>
  <?php if (isset($share) && $share): ?>
    <div class="share-links">
      <div class="share-link facebook card">
        <?php print $share_fb; ?>
      </div>
      <div class="share-link twitter">
        <?php print $share_tw; ?>
      </div>
    </div>
  <?php endif; ?>
</article>
