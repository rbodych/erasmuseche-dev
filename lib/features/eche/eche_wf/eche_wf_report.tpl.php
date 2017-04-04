<?php
/**
 * @file
 * eche_wf_report.tpl.php
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
          <input class="detail__input" id="detail-toggle-<?php print $i; ?>"
                 type="checkbox"
                 name="toggle<?php print $i; ?>" <?php print ($i === 1 ? 'checked=""' : '') ?>>
          <label class="detail__label"
                 for="detail-toggle-<?php print $i; ?>">
            <?php
            if (strpos($question_data['#title'], '|') !== FALSE) {
              $title_data = explode('|', $question_data['#title']);
              if (isset($title_data[1])) {
                print $title_data[0] . '. ' . $title_data[1];
              }
            }
            else {
              print $question_data['#title'];
            }
            ?>
          </label>

          <div class="detail__content" id="detail-content-<?php print $i; ?>">
            <?php if (!empty($question_data['#recommendations']['high'])): ?>
              <h3><?php print t('Must have'); ?></h3>
              <?php foreach ($question_data['#recommendations']['high'] as $item): ?>
                <p><strong><?php print $item['#title']; ?></strong></p>
                <?php if (!empty($item['text']['value'])): ?>
                  <h3>Gudance note:</h3>
                  <?php print check_markup($item['text']['value'], $item['text']['format']); ?>
                <?php endif; ?>
              <?php endforeach ?>
            <?php endif; ?>

            <?php if (!empty($question_data['#recommendations']['regular'])): ?>
              <h3><?php print t('Best practices'); ?></h3>
              <?php foreach ($question_data['#recommendations']['regular'] as $item): ?>
                <p><strong><?php print $item['#title']; ?></strong></p>
                <?php if (!empty($item['text']['value'])): ?>
                  <h3>Gudance note:</h3>
                  <?php print check_markup($item['text']['value'], $item['text']['format']); ?>
                <?php endif; ?>
              <?php endforeach ?>
            <?php endif; ?>
            <?php if (!empty($question_data['#case_studies'])): ?>
              <h3><?php print t('Case studies'); ?></h3>
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

<?php print eche_wf_download_as_pdf_button(); ?>
<?php print eche_wf_invite_button(); ?>
<?php print eche_wf_share_button($node->nid, $submission->sid); ?>
