<?php

/**
 * @file
 * This template handles the layout of the views exposed filter form.
 *
 * Variables available:
 * - $widgets: An array of exposed form widgets. Each widget contains:
 * - $widget->label: The visible label to print. May be optional.
 * - $widget->operator: The operator for the widget. May be optional.
 * - $widget->widget: The widget itself.
 * - $sort_by: The select box to sort the view using an exposed form.
 * - $button: The submit button for the form.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($q)): ?>
  <?php
  // This ensures that, if clean URLs are off, the 'q' is added first so that
  // it shows up first in the URL.
  print $q;
  ?>
<?php endif; ?>
<div class="views-exposed-form">
  <div class="views-exposed-widgets clearfix">
    <?php foreach ($widgets as $id => $widget): ?>
      <?php if (!empty($widget->label)): ?>
        <div class="col-sm-3">
          <label for="<?php print $widget->id; ?>">
            <?php print $widget->label; ?>
          </label>
        </div>
      <?php endif; ?>
      <?php if (!empty($widget->operator)): ?>
        <div class="views-operator">
          <?php print $widget->operator; ?>
        </div>
      <?php endif; ?>
      <div class="col-sm-7">
        <?php print $widget->widget; ?>
      </div>
      <?php if (!empty($widget->description)): ?>
        <div class="description">
          <?php print $widget->description; ?>
        </div>
      <?php endif; ?>
    <?php endforeach; ?>
    <?php if (!empty($sort_by)): ?>
      <div class="views-exposed-widget views-widget-sort-by">
        <?php print $sort_by; ?>
      </div>
      <div class="views-exposed-widget views-widget-sort-order">
        <?php print $sort_order; ?>
      </div>
    <?php endif; ?>
    <?php if (!empty($items_per_page)): ?>
      <div class="views-exposed-widget views-widget-per-page">
        <?php print $items_per_page; ?>
      </div>
    <?php endif; ?>
    <?php if (!empty($offset)): ?>
      <div class="views-exposed-widget views-widget-offset">
        <?php print $offset; ?>
      </div>
    <?php endif; ?>
    <div class="col-sm-2">
      <div class="form-actions">
        <?php print $button; ?>
      </div>
    </div>
    <?php if (!empty($reset_button)): ?>
      <div class="views-exposed-widget views-reset-button">
        <?php print $reset_button; ?>
      </div>
    <?php endif; ?>
  </div>
</div>
