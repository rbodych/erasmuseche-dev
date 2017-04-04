<?php
/**
 * @file
 * Views-bootstrap-tab-plugin-style--resources--page.tpl.php.
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
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<?php // @codingStandardsIgnoreStart ?>
<div id="views-bootstrap-tab-<?php print $id ?>"
     class="<?php print $classes ?>">
  <ul
    class="nav nav-<?php print $tab_type ?> <?php if ($justified) print 'nav-justified' ?>">
    <?php foreach ($tabs as $key => $tab): ?>
      <?php if (strpos($tab, '|')):
        $data = explode('|', $tab);
        if (is_array($data)):
          $title = "";
          $type = "";
          $nid = "";
          $link = "";
          if (isset($data[0])):
            $title = $data[0];
          endif;
          if (isset($data[1])):
            $type = $data[1];
          endif;
          if (isset($data[2])):
            $nid = $data[2];
          endif;
          if (isset($data[3])):
            $link = $data[3];
          endif;
          ?>
          <?php if ($type == "Link"): ?>
          <li class="<?php if ($key === 0) print 'active' ?>">
            <a href="<?php if (empty($link)): print url('node/' . $nid);
            else: print $link; endif; ?>"><?php print $title ?></a>
          </li>
        <?php else: ?>
          <li class="<?php if ($key === 0) print 'active' ?>">
            <a href="#tab-<?php print "{$id}-{$key}" ?>"
               data-toggle="tab"><?php print $title ?></a>
          </li>
        <?php endif; ?>
        <?php endif; ?>
      <?php else: ?>
        <li class="<?php if ($key === 0) print 'active' ?>">
          <a href="#tab-<?php print "{$id}-{$key}" ?>"
             data-toggle="tab"><?php print $tab ?></a>
        </li>
      <?php endif; ?>
    <?php endforeach ?>
  </ul>
  <div class="tab-content">
    <?php foreach ($rows as $key => $row): ?>
      <div class="tab-pane <?php if ($key === 0) print 'active' ?>"
           id="tab-<?php print "{$id}-{$key}" ?>">
        <?php print $row ?>
      </div>
    <?php endforeach ?>
  </div>
</div>
<?php // @codingStandardsIgnoreEnd ?>
