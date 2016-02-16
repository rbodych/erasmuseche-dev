<?php

/**
 * @file
 * Views-view-fields--updates--page-1.tpl.php.
 *
 * PHP version 5
 *
 * @category Production
 *
 * @package ErasmusCore/Theme
 *
 * @author EAC WEB <EAC-LIST-C4@nomail.ec.europa.eu>
 *
 * @copyright 2015 European-Commission
 *
 * @license http://ec.europa.eu Europa
 * @link NA
 *
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field.
 *   Do not use  var_export to dump this object, as it can't handle the
 *    recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
  <article class="col-xs-12 update-list-item">
    <?php if ($fields['type']->raw == 'events'): ?>
      <div class="col-sm-4 update-list-image">
        <?php if (isset($fields['field_events_images'])): ?>
          <?php print $fields['field_events_images']->content; ?>
        <?php endif ?>
      </div>
      <div class="col-sm-8 update-list-content">
        <?php print $fields['title']->content; ?>
        <p class="update-list-date">
            <span class="glyphicon glyphicon-tags" aria-hidden="true"></span>
            <?php print $fields['type']->content; ?> |  
          
          <?php if (isset($fields['field_events_date'])): ?>  
            <span class="glyphicon glyphicon-calendar" aria-hidden="true"></span>
            <?php print $fields['field_events_date']->content; ?>
          <?php endif ?>
        </p>
        <?php if (isset($fields['field_events_venue'])): ?>
          <h2>
            <span class="glyphicon glyphicon-map-marker" aria-hidden="true"></span>
            <?php print $fields['field_events_venue']->content; ?>
          </h2>
        <?php endif ?>
        <?php if (isset($fields['field_events_abstract'])): ?>
          <p class="update-list-abstract">
            <?php print $fields['field_events_abstract']->content; ?>
          </p>
        <?php endif ?>
      </div>
    <?php endif ?>
    
    <?php if ($fields['type']->raw == 'news'): ?>
      <div class="col-sm-4 update-list-image">
        <?php if (isset($fields['field_news_images'])): ?>
          <?php print $fields['field_news_images']->content; ?>
        <?php endif ?>
      </div>
      <div class="col-sm-8 update-list-content">
        <?php print $fields['title']->content; ?>
        <p class="update-list-date">
            <span class="glyphicon glyphicon-tags" aria-hidden="true"></span>
            <?php print $fields['type']->content; ?> |  
          
            <span class="glyphicon glyphicon-time" aria-hidden="true"></span>
            <?php print $fields['created']->content; ?>
        </p>
          
        <?php if (isset($fields['field_news_abstract'])): ?>
          <p class="update-list-abstract">
            <?php print $fields['field_news_abstract']->content; ?>
          </p>
        <?php endif ?>
      </div>
    <?php endif ?> 
    
  </article>
