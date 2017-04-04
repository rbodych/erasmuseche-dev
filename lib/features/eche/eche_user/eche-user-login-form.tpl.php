<?php
/**
 * @file
 * eche-user-login-form.tpl.php
 */
?>

<div class="col-sm-7">
  <div class="layout--sign-in__login">
    <h3
      class="layout--sign-in__title"><?php print t('Sign in with your<br />ECHE account'); ?></h3>
    <?php print $login_form; ?>
  </div>
</div>
<div class="col-sm-5">
  <div class="layout--sign-in__register">
    <h3 class="layout--sign-in__title"><?php print t('Register'); ?></h3>
    <div class="layout--sign-in__description">
      <?php print $register_info_box; ?>
      <?php print $register_button; ?>
    </div>
  </div>
</div>
