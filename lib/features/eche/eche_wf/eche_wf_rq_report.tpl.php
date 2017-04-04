<?php
/**
 * @file
 * eche_wf_rq_report.tpl.php
 */
?>

<div class="layout--content-boxed__preinner">
  <div class="subway">
    <div class="subway__item">
      <div class="subway__label"><?php print t('Start') ?></div>
    </div>
    <div class="subway__item">
      <div class="subway__label"><?php print t('Page 1') ?></div>
    </div>
    <div class="subway__item">
      <div class="subway__label"><?php print t('Page 2') ?></div>
    </div>
    <div class="subway__item">
      <div class="subway__label"><?php print t('Page 3') ?></div>
    </div>
    <div class="subway__item">
      <div class="subway__label"><?php print t('Page 4') ?></div>
    </div>
    <div class="subway__item">
      <div class="subway__label"><?php print t('Page 5') ?></div>
    </div>
    <div class="subway__item">
      <div class="subway__label"><?php print t('Page 6') ?></div>
    </div>
    <div class="subway__item is-active">
      <div class="subway__label"><?php print t('Complete') ?></div>
    </div>
  </div>
</div>

<div class="layout--content-boxed__header">
  <div class="submission-info">
    <h2
      class="submission-info__title"><?php print t('SELF-ASSESSMENT COMPLETE') ?></h2>
    <p><?php print t('Based on your answers, we have prepared an overview for you. You can view it below and / or download it by clicking on the "Download results" button at the bottom of this page.') ?></p>
  </div>
</div>

<?php print $answers_table; ?>

<h3><?php print t('Feedback and suggestions for consideration'); ?></h3>

<div class="vertical-tabs">
  <?php foreach ($data as $question): ?>
    <input class="vertical-tabs__input"
           id="vertical-tabs-toggle-<?php print $question['#count'] ?>"
           type="radio"
           name="toggle" <?php print $question['#count'] == 1 ? 'checked=""' : ''; ?>>
    <label class="vertical-tabs__label"
           for="vertical-tabs-toggle-<?php print $question['#count'] ?>">
      <?php print $question['#title']; ?>
    </label>
    <div class="vertical-tabs__content"
         id="vertical-tabs-content-<?php print $question['#count'] ?>">
      <h4><?php print t('Your answers'); ?>:</h4>
      <ul>
        <?php foreach ($question['#answers'] as $answer): ?>
          <li><?php print $answer; ?></li>
        <?php endforeach ?>
      </ul>
      <h4><?php print t('Suggestions for considerations'); ?>:</h4>
      <?php print $question['#recommendation']; ?>
    </div>
  <?php endforeach ?>
</div>

<div class="form-actions clearfix">
  <div class="pull-left">
    <?php print eche_wf_invite_button(); ?>
    <?php print eche_wf_share_button($node->nid, $submission->sid); ?>
  </div>
  <?php print eche_wf_download_as_pdf_button(); ?>
</div>
