<?php
/**
 * @file
 * Custom template file for header.
 */
?>
<div class="event-header">
  <?php if (isset($countries)): ?>
    <div class="event-header--country">
      <?php print format_plural($countries, t('1 country'), t('@count countries')); ?>
    </div>
  <?php endif; ?>
  <?php if (isset($events)): ?>
    <div class="event-header--events">
      <?php print format_plural($events, t('1 event'), t('@count events')); ?>
    </div>
  <?php endif; ?>
  <?php if (isset($participants)): ?>
    <div class="event-header--participants">
      <?php print $participants . ' ' . t('participants'); ?>
    </div>
  <?php endif; ?>
</div>
