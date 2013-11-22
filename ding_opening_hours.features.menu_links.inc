<?php
/**
 * @file
 * ding_opening_hours.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ding_opening_hours_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-tabs-menu:openhours
  $menu_links['menu-tabs-menu:openhours'] = array(
    'menu_name' => 'menu-tabs-menu',
    'link_path' => 'openhours',
    'router_path' => 'openhours',
    'link_title' => 'Åbningstider',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Åbningstider');


  return $menu_links;
}
