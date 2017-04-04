<?php
/**
 * @file
 * Eche_wf_rq_report.tpl.php.
 */
?>

<div class="layout--content-boxed__header">
  <div class="submission-info">
    <p><?php print t('Based on your answers, we have prepared an overview for you.') ?></p>
  </div>
</div>

<?php print $answers_table; ?>

<h3><?php print t('Feedback and suggestions for consideration'); ?></h3>

<div class="vertical-tabs">
  <?php foreach ($data as $question): ?>
    <div class="question">
      <label class="vertical-tabs__label">
        <h4><?php print $question['#title']; ?></h4>
      </label>
      <div class="vertical-tabs__content">
        <h4><?php print t('Your answer(s)'); ?>:</h4>
        <ul>
          <?php foreach ($question['#answers'] as $answer): ?>
            <li><?php print $answer; ?></li>
          <?php endforeach ?>
        </ul>
        <?php if (!empty($question['#recommendation'])) : ?>
          <h4><?php print t('Suggestions for considerations'); ?>:</h4>
          <?php print $question['#recommendation']; ?>
        <?php endif; ?>
      </div>
    </div>
  <?php endforeach ?>
</div>
