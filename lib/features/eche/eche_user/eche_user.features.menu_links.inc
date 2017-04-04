<?php
/**
 * @file
 * eche_user.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function eche_user_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-eche-navigation_about:node/261.
  $menu_links['menu-eche-navigation_about:node/261'] = array(
    'menu_name' => 'menu-eche-navigation',
    'link_path' => 'node/261',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'identifier' => 'menu-eche-navigation_about:node/261',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-eche-navigation_home:eche.
  $menu_links['menu-eche-navigation_home:eche'] = array(
    'menu_name' => 'menu-eche-navigation',
    'link_path' => 'eche',
    'router_path' => 'eche',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'identifier' => 'menu-eche-navigation_home:eche',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-eche-navigation_resources:eche/resources.
  $menu_links['menu-eche-navigation_resources:eche/resources'] = array(
    'menu_name' => 'menu-eche-navigation',
    'link_path' => 'eche/resources',
    'router_path' => 'eche/resources',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'identifier' => 'menu-eche-navigation_resources:eche/resources',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-eche-navigation_self-assessments:user/my-submissions.
  $menu_links['menu-eche-navigation_self-assessments:user/my-submissions'] = array(
    'menu_name' => 'menu-eche-navigation',
    'link_path' => 'user/my-submissions',
    'router_path' => 'user/my-submissions',
    'link_title' => 'Self-assessments',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'identifier' => 'menu-eche-navigation_self-assessments:user/my-submissions',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-eche-user-menu_current-username:menutoken/583da54351532.
  $menu_links['menu-eche-user-menu_current-username:menutoken/583da54351532'] = array(
    'menu_name' => 'menu-eche-user-menu',
    'link_path' => 'menutoken/583da54351532',
    'router_path' => 'menutoken/%',
    'link_title' => '[current-user:name]',
    'options' => array(
      'menu_token_link_path' => 'user',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/583da54351532',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'identifier' => 'menu-eche-user-menu_current-username:menutoken/583da54351532',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-eche-user-menu_logout:user/logout.
  $menu_links['menu-eche-user-menu_logout:user/logout'] = array(
    'menu_name' => 'menu-eche-user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'identifier' => 'menu-eche-user-menu_logout:user/logout',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-eche-user-menu_register--sign-in:user/login.
  $menu_links['menu-eche-user-menu_register--sign-in:user/login'] = array(
    'menu_name' => 'menu-eche-user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Register / Sign in',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'identifier' => 'menu-eche-user-menu_register--sign-in:user/login',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_account-settings:user.
  $menu_links['user-menu_account-settings:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Account settings',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'data-image' => 'user',
        'data-display-title' => 0,
        'title' => 'My account',
        'data-hide-children' => 0,
        'class' => array(
          0 => 'btn',
          1 => 'btn-default',
        ),
        'data-remove-class' => 0,
        'data-toggle' => 'tooltip',
        'data-placement' => 'bottom',
        'data-container' => 'body',
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'identifier' => 'user-menu_account-settings:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_complete-your-self-assessment:user/complete.
  $menu_links['user-menu_complete-your-self-assessment:user/complete'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/complete',
    'router_path' => 'user/complete',
    'link_title' => 'Complete your self-assessment',
    'options' => array(
      'identifier' => 'user-menu_complete-your-self-assessment:user/complete',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_account-settings:user',
  );
  // Exported menu link: user-menu_create-new-account:user/register.
  $menu_links['user-menu_create-new-account:user/register'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Create new account',
    'options' => array(
      'identifier' => 'user-menu_create-new-account:user/register',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_account-settings:user',
  );
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'attributes' => array(
        'title' => 'Log out',
        'class' => array(
          0 => 'btn',
          1 => 'btn-default',
        ),
        'data-image' => 'log-out',
        'data-display-title' => 0,
        'data-toggle' => 'tooltip',
        'data-placement' => 'bottom',
        'data-container' => 'body',
      ),
      'identifier' => 'user-menu_log-out:user/logout',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_manage-translation-tasks:manage-translate.
  $menu_links['user-menu_manage-translation-tasks:manage-translate'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'manage-translate',
    'router_path' => 'manage-translate',
    'link_title' => 'Manage translation tasks',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage translation tasks',
        'class' => array(
          0 => 'btn',
          1 => 'btn-default',
        ),
        'data-image' => 'flag',
        'data-display-title' => 0,
        'data-toggle' => 'tooltip',
        'data-placement' => 'bottom',
        'data-container' => 'body',
      ),
      'identifier' => 'user-menu_manage-translation-tasks:manage-translate',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_my-workbench:admin/workbench.
  $menu_links['user-menu_my-workbench:admin/workbench'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'admin/workbench',
    'router_path' => 'admin/workbench',
    'link_title' => 'My workbench',
    'options' => array(
      'attributes' => array(
        'title' => 'My workbench',
        'class' => array(
          0 => 'btn',
          1 => 'btn-info',
        ),
        'data-image' => 'list-alt',
        'data-display-title' => 0,
        'data-toggle' => 'tooltip',
        'data-placement' => 'bottom',
        'data-container' => 'body',
      ),
      'identifier' => 'user-menu_my-workbench:admin/workbench',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_request-new-password:user/password.
  $menu_links['user-menu_request-new-password:user/password'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/password',
    'router_path' => 'user/password',
    'link_title' => 'Request new password',
    'options' => array(
      'identifier' => 'user-menu_request-new-password:user/password',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_account-settings:user',
  );
  // Exported menu link: user-menu_results-shared-with-me:user/shared-with-me.
  $menu_links['user-menu_results-shared-with-me:user/shared-with-me'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/shared-with-me',
    'router_path' => 'user/shared-with-me',
    'link_title' => 'Results shared with me',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'identifier' => 'user-menu_results-shared-with-me:user/shared-with-me',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_self-assessment-results:user/my-submissions.
  $menu_links['user-menu_self-assessment-results:user/my-submissions'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/my-submissions',
    'router_path' => 'user/my-submissions',
    'link_title' => 'Self-assessment results',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'identifier' => 'user-menu_self-assessment-results:user/my-submissions',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_translate:translate.
  $menu_links['user-menu_translate:translate'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'translate',
    'router_path' => 'translate',
    'link_title' => 'Translate',
    'options' => array(
      'attributes' => array(
        'title' => 'Translate',
        'class' => array(
          0 => 'btn',
          1 => 'btn-default',
        ),
        'data-image' => 'globe',
        'data-display-title' => 0,
        'data-toggle' => 'tooltip',
        'data-placement' => 'bottom',
        'data-container' => 'body',
      ),
      'identifier' => 'user-menu_translate:translate',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Account settings');
  t('Complete your self-assessment');
  t('Create new account');
  t('Home');
  t('Log out');
  t('Logout');
  t('Manage translation tasks');
  t('My workbench');
  t('Register / Sign in');
  t('Request new password');
  t('Resources');
  t('Results shared with me');
  t('Self-assessment results');
  t('Self-assessments');
  t('Translate');
  t('[current-user:name]');

  return $menu_links;
}
