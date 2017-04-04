<?php
/**
 * @file
 * eche-user-registration-form.tpl.php
 */
?>

<h1 class="text-center">Register an ECHE account</h1>
<div class="login-form section--dark">
  <div class="row">
    <div class="section--login-form col-md-5">
      <h2><?php print t('Sign in with your ECHE account'); ?></h2>
      <?php print $login_form; ?>
    </div>
    <div class="section--register-form col-md-5 col-md-offset-2">
      <h2><?php print t('Register'); ?></h2>
      <?php print $register_info_box; ?>
      <p class="text-center"><br/>
        <?php print $register_button; ?>
      </p>
    </div>
  </div>
</div>
