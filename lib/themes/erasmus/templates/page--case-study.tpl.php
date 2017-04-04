<?php
/**
 * @file
 * Page-case-study.tpl.php.
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
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see ec_resp_process_page()
 */
?>

<?php include 'eche-header.inc'; ?>

<main class="bootsmacss">

  <div class="layout--page-title">
    <div class="container">
      <?php if ($page['eche_top_content']) : ?>
        <?php print render($page['eche_top_content']); ?>
      <?php else: ?>
        <h2><?php print t('Case study'); ?></h2>
      <?php endif; ?>
      <?php if ($page['eche_top_navigation']) : ?>
        <div class="top-navigation__wrapper">
          <?php print render($page['eche_top_navigation']); ?>
        </div>
      <?php endif; ?>
    </div>
  </div>

  <div class="container">
    <?php if ($messages) : ?>
      <div id="messages"><?php print $messages; ?></div>
    <?php endif; ?>

    <?php if ($tabs) : ?>
      <div class="tabs"><?php print render($tabs); ?></div>
    <?php endif; ?>
    <?php print $regions['help']; ?>
  </div>

  <div class="page-title">
    <h2 class="page-title__title"><?php print $title; ?></h2>
    <?php if (!empty($subtitle)) : ?>
      <div class="page-title__subtitle"><?php print $subtitle; ?></div>
    <?php endif; ?>
  </div>

  <div class="content">
    <?php print render($regions['content']); ?>
  </div>
</main>

<?php include 'eche-footer.inc'; ?>
