<?php
/**
 * @file
 * Default theme implementation to display a node.
 */
?>

<article class="node--card h-event">
  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <?php if ($node->type == 'erasmus_30_year_anniversary_stor'): ?>
      <a href="<?php print $node_url; ?>">
    <?php endif; ?>
    <h3><?php print $title; ?></h3>
    <?php if ($node->type == 'erasmus_30_year_anniversary_stor'): ?>
      </a>
    <?php endif; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
  ?>
  <?php if (isset($image)): ?>
    <img src="<?php print $image; ?>" alt="<?php print $title; ?>" />
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
      <li><a class="button button--primary button--medium" href="<?php print $link['url']; ?>" alt="<?php print $link['title']; ?>">
        <?php print $link['title']; ?>
        </a>
      </li>
    <?php endif; ?>
    <?php if (isset($organiser)): ?>
      <li><a class="button button--stroke-primary button--medium" href="<?php print $organiser['url']; ?>"
        alt="<?php print $organiser['title']; ?>">
        <?php print $organiser['title']; ?>
        </a>
      </li>
    <?php endif; ?>
    <?php if (isset($fact_links)): ?>
      <?php foreach ($fact_links as $flink): ?>
        <li>
          <a class="button button--primary button--medium" href="<?php print $flink['url']; ?>" alt="<?php print $flink['title']; ?>">
            <?php print $flink['title']; ?>
          </a>
        </li>
      <?php endforeach; ?>
    <?php endif; ?>
    <?php if (isset($info_links)): ?>
      <?php foreach ($info_links as $ilink): ?>
        <li>
          <a class="button button--primary button--medium" href="<?php print $ilink['url']; ?>" alt="<?php print $ilink['title']; ?>">
            <?php print $ilink['title']; ?>
          </a>
        </li>
      <?php endforeach; ?>
    <?php endif; ?>
  </ul>

</article>
