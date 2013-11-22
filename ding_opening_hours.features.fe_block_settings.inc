<?php
/**
 * @file
 * ding_opening_hours.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ding_opening_hours_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['ding_opening_hours-oho-lib-today'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'oho-lib-today',
    'module' => 'ding_opening_hours',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ddbasic' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ddbasic',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'wellejus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wellejus',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
