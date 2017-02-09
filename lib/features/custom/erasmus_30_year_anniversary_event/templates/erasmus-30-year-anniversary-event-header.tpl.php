<?php
/**
 * @file
 * Custom template file for header.
 */
?>
<div class="event-header--highlights">
  <p><?php print $label; ?></p>
  <?php if (isset($countries)): ?>
    <div class="event-header--country">
      <?php print format_plural($countries, t('1 country'), t('@count') . '<span>' . t('countries') . '</span>'); ?>
    </div>
  <?php endif; ?>
  <?php if (isset($events)): ?>
    <div class="event-header--events">
      <?php print format_plural($events, t('1 event'), t('@count') . '<span>' . t('events') . '</span>'); ?>
    </div>
  <?php endif; ?>
  <p><?php print t('with'); ?></p>
  <?php if (isset($participants)): ?>
    <div class="event-header--participants">
      <?php print $participants . '<span>' . t('participants') . '</span>'; ?>
    </div>
  <?php endif; ?>
</div>
