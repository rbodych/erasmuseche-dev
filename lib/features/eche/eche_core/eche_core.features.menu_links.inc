<?php
/**
 * @file
 * eche_core.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function eche_core_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-about-eche_about:node/294.
  $menu_links['menu-about-eche_about:node/294'] = array(
    'menu_name' => 'menu-about-eche',
    'link_path' => 'node/294',
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
      'identifier' => 'menu-about-eche_about:node/294',
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
  // Exported menu link: menu-about-eche_video-tutorials:node/293.
  $menu_links['menu-about-eche_video-tutorials:node/293'] = array(
    'menu_name' => 'menu-about-eche',
    'link_path' => 'node/293',
    'router_path' => 'node/%',
    'link_title' => 'Video Tutorials',
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
      'identifier' => 'menu-about-eche_video-tutorials:node/293',
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
  // Exported menu link: menu-eche-navigation_about:node/294.
  $menu_links['menu-eche-navigation_about:node/294'] = array(
    'menu_name' => 'menu-eche-navigation',
    'link_path' => 'node/294',
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
      'identifier' => 'menu-eche-navigation_about:node/294',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Home');
  t('Resources');
  t('Self-assessments');
  t('Video Tutorials');

  return $menu_links;
}
