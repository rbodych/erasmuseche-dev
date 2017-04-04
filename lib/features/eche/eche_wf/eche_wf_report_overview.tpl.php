<?php
/**
 * @file
 * eche_wf_report_overview.tpl.php
 */
?>

<div class="overview">
  <?php foreach ($data as $item): ?>
    <div class="overview__item">
      <div class="overview__description"><?php print $item['#title']; ?></div>
      <div class="row">
        <div class="col-xs-12 col-sm-4">
          <div class="box">
            <?php
            $additional_class = '';
            $color = 'red';
            if ($item['#submission_score'] > 59 && $item['#submission_score'] <= 79) {
              $color = 'yellow';
            }
            elseif ($item['#submission_score'] > 79) {
              $color = 'green';
              if ($item['#submission_score'] == 100) {
                $additional_class = 'full-circle';
              }
            }
            ?>
            <div
              class="overview__stat overview__stat--your overview__stat--<?php print $color ?>">
              <div class="overview__donut <?php print $additional_class ?>"
                   style="animation-delay: -<?php print $item['#submission_score']; ?>s">
                <div
                  class="overview__value"><?php print $item['#submission_score']; ?>
                  %
                </div>
              </div>
              <div
                class="overview__label"><?php print t('Your performance'); ?></div>
            </div>
          </div>
        </div>
        <div class="col-xs-12 col-sm-4">
          <div class="box">
            <?php
            $additional_class = '';
            $color = 'red';
            if ($item['#iro_average_score'] > 59 && $item['#iro_average_score'] <= 79) {
              $color = 'yellow';
            }
            elseif ($item['#iro_average_score'] > 79) {
              $color = 'green';
              if ($item['#submission_score'] == 100) {
                $additional_class = 'full-circle';
              }
            }
            ?>
            <div class="overview__stat overview__stat--<?php print $color ?>">
              <div class="overview__donut <?php print $additional_class ?>"
                   style="animation-delay: -<?php print $item['#iro_average_score']; ?>s">
                <div
                  class="overview__value"><?php print $item['#iro_average_score']; ?>
                  %
                </div>
              </div>
              <div
                class="overview__label"><?php print t('Institutional performance'); ?></div>
            </div>
          </div>
        </div>
      </div>
    </div>
  <?php endforeach; ?>
</div>

<?php print eche_wf_download_as_pdf_button(); ?>
<?php print eche_wf_invite_button(); ?>
<?php print eche_wf_share_button($node->nid, $submission->sid); ?>
