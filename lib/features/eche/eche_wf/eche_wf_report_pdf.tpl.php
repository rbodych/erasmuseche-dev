<?php
/**
 * @file
 * Eche_wf_report.tpl.php.
 */
?>

<div class="detail">
  <?php $i = 0; ?>
  <?php foreach ($data as $category_slug => $category_data): ?>
    <h2 class="detail__category"><?php print $category_data['#title']; ?>
      (<?php print $category_data['#count']; ?>
      )</h2>

    <?php foreach ($category_data['#items'] as $question_data): ?>
      <?php if (count($question_data['#recommendations']) > 0): ?>
        <?php $i++; ?>
        <div class="detail__item">
          <label class="detail__label" for="detail-toggle-<?php print $i; ?>">
            <h3><?php print $question_data['#title']; ?></h3>
          </label>

          <div class="detail__content" id="detail-content-<?php print $i; ?>">
            <?php if (!empty($question_data['#recommendations']['high'])): ?>
              <h4><?php print t('Must have'); ?></h4>
              <?php foreach ($question_data['#recommendations']['high'] as $item): ?>
                <p><?php print $item['#title']; ?></p>
                <?php if (!empty($item['text']['value'])): ?>
                  <h4>Gudance note:</h4>
                  <?php print check_markup($item['text']['value'], $item['text']['format']); ?>
                <?php endif; ?>
              <?php endforeach ?>
            <?php endif; ?>

            <?php if (!empty($question_data['#recommendations']['regular'])): ?>
              <h4><?php print t('Best practices'); ?></h4>
              <?php foreach ($question_data['#recommendations']['regular'] as $item): ?>
                <p><?php print $item['#title']; ?></p>
                <?php if (!empty($item['text']['value'])): ?>
                  <h4>Gudance note:</h4>
                  <?php print check_markup($item['text']['value'], $item['text']['format']); ?>
                <?php endif; ?>
              <?php endforeach ?>
            <?php endif; ?>
            <?php if (!empty($question_data['#case_studies'])): ?>
              <h4><?php print t('Case studies'); ?></h4>
              <ul>
                <?php foreach ($question_data['#case_studies'] as $case_studies_item): ?>
                  <?php if (isset($case_studies_item['#node']->nid)): ?>
                    <li>
                      <?php echo l($case_studies_item['#title'], 'node/' . $case_studies_item['#node']->nid,
                        ['attributes' => ['target' => '_blank']]) ?>
                    </li>
                  <?php endif; ?>
                <?php endforeach ?>
              </ul>
            <?php endif; ?>
          </div>
        </div>
      <?php endif; ?>
    <?php endforeach ?>
  <?php endforeach ?>
</div>
