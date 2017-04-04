<?php
/**
 * @file
 * Eche_user.box.inc.
 */

/**
 * Menu callback for user/login.
 *
 * Creates a unified login/registration form (without tabs).
 */
function eche_user_login_page() {
  global $user;
  if ($user->uid) {
    menu_set_active_item('user/' . $user->uid);
    return menu_execute_active_handler(NULL, FALSE);
  }
  else {
    // Title just clutters the interface...
    drupal_set_title('');
    $output = _eche_user_login_form();
    return $output;
  }
}

/**
 * Menu callback for user/register.
 *
 * Creates a unified login/registration form (without tabs).
 */
function eche_user_register_page() {
  global $user;
  if ($user->uid) {
    menu_set_active_item('user/' . $user->uid);
    return menu_execute_active_handler(NULL, FALSE);
  }
  else {
    // Title just clutters the interface...
    drupal_set_title(t('Register an ECHE account'));
    $output = _eche_user_register_form();
    return $output;
  }
}

/**
 * Menu callback for user/password.
 *
 * Creates a unified user forgot password form (without tabs).
 */
function eche_user_password_page() {
  global $user;
  if ($user->uid) {
    menu_set_active_item('user/' . $user->uid);
    return menu_execute_active_handler(NULL, FALSE);
  }
  else {
    // Title just clutters the interface...
    drupal_set_title(t('Login into the ECHE account'));
    $output = _eche_user_password_form();
    return $output;
  }
}

/**
 * Implements hook_menu_alter().
 */
function eche_user_menu_alter(&$items) {
  // Kill the tabs on the login pages.
  $items['user']['type'] = MENU_NORMAL_ITEM;
  $items['user']['page callback'] = 'eche_user_login_page';
  $items['user/login']['type'] = MENU_NORMAL_ITEM;
  $items['user/login']['page callback'] = 'eche_user_login_page';
  $items['user/register']['type'] = MENU_NORMAL_ITEM;
  $items['user/register']['page callback'] = 'eche_user_register_page';
  $items['user/password']['type'] = MENU_NORMAL_ITEM;
  $items['user/password']['page callback'] = 'eche_user_password_page';
}

/**
 * Implements hook_theme().
 */
function eche_user_theme() {
  return array(
    'eche_user_login_form' => array(
      'variables' => array(
        'login_form' => NULL,
        'register_info_box' => NULL,
        'register_button' => NULL,
      ),
      'template' => 'eche-user-login-form',
    ),
    'eche_user_register_form' => array(
      'variables' => array(
        'register_form' => NULL,
      ),
      'template' => 'eche-user-register-form',
    ),
    'eche_user_pass' => array(
      'variables' => array(
        'password_form' => NULL,
      ),
      'template' => 'eche-user-pass',
    ),
  );
}

/**
 * Builds a unified login form.
 */
function _eche_user_login_form() {
  $login_form = drupal_get_form('user_login');
  $register_info_box = module_invoke('boxes', 'block_view', 'eche_user_register_info_box');

  $register_button = l(t('Register'),
    'user/register',
    array(
      'html' => TRUE,
      'attributes' => array(
        'class' => array(
          'btn',
          'btn--primary',
          'btn--block',
        ),
      ),
    )
  );

  $variables = array(
    'login_form' => drupal_render($login_form),
    'register_info_box' => $register_info_box['content'],
    'register_button' => $register_button,
  );
  $output = theme('eche_user_login_form', $variables);
  return $output;
}

/**
 * Builds a unified register form.
 */
function _eche_user_register_form() {
  $register_form = drupal_get_form('user_register_form');
  $variables = array(
    'register_form' => drupal_render($register_form),
  );

  $output = theme('eche_user_register_form', $variables);
  return $output;
}

/**
 * Builds a unified password form.
 */
function _eche_user_password_form() {
  $password_form = drupal_get_form('user_pass');
  $variables = array(
    'password_form' => drupal_render($password_form),
  );

  $output = theme('eche_user_pass', $variables);
  return $output;
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function eche_user_form_user_login_alter(&$form, &$form_state, $form_id) {
  // Submit button theming.
  $form['actions']['submit']['#attributes'] = array(
    'class' => array(
      'btn',
      'btn--primary',
      'btn--block',
    ),
    'value' => 'Log in',
  );
  // Forgot password link.
  $form['forgot'] = array(
    '#markup' => l(t('I forgot my password'), 'user/password'),
    '#prefix' => '<div class="help-block">',
    '#suffix' => '</div>',
    '#weight' => 101,
  );
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function eche_user_form_user_register_form_alter(&$form, &$form_state, $form_id) {
  unset($form['account']['mail']['#description']);
  unset($form['account']['pass']['#description']);
  $form['account']['mail']['#title'] = t('Email address');
  $form['field_lastname'][LANGUAGE_NONE][0]['value']['#title'] = t('Surname');
  if (isset($form['field_user_hei'])) {
    $form['field_user_hei'][LANGUAGE_NONE][0]['target_id']['#attributes']['data-toggle'] = 'popover';
    $form['field_user_hei'][LANGUAGE_NONE][0]['target_id']['#attributes']['data-placement'] = 'right';
    $suffix = $form['field_user_hei']['#suffix'];
    $popover_content = t('If your institution is not listed, please <a href="@link">click here</a> to request a new institution entry to proceed with the registration.', array('@link' => url('institution-request')));
    $form['field_user_hei']['#suffix'] = '<span class="input-group-popover-html">' . $popover_content . '</span>' . $suffix;

    $form['#attached']['js'] = array(
      drupal_get_path('module', 'eche_user') . '/js/register.js',
    );
  }
  $form['actions']['#attributes'] = array(
    'class' => array(
      'text-center',
    ),
  );
  $form['actions']['submit']['#value'] = t('Submit registration');
  $form['actions']['submit']['#attributes'] = array(
    'class' => array(
      'btn',
      'btn--primary',
      'btn--lg',
    ),
  );

  $form['#validate'][] = 'eche_user_register_validate';
}

/**
 * Custom validate handler.
 */
function eche_user_register_validate($form, &$form_state) {
  if (isset($form_state['values']['field_user_hei'])) {
    if (empty($form_state['values']['field_user_hei'][LANGUAGE_NONE][0]['target_id'])) {
      form_set_error('field_user_hei][und][0][target_id', t('If your institution is not listed, please <a href="@link" target="_blank" >click here</a> to request a new institution entry to proceed with the registration.', array('@link' => url('institution-request'))));
    }
  }

}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function eche_user_form_user_pass_alter(&$form, &$form_state, $form_id) {
  // Submit button theming.
  $form['actions']['submit']['#attributes'] = array(
    'class' => array(
      'btn',
      'btn--primary',
      'btn--block',
    ),
  );
}
