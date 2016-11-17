<?php
/**
 * @file
 * coffee_imports2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function coffee_imports2_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function coffee_imports2_node_info() {
  $items = array(
    'coffee_import' => array(
      'name' => t('Coffee Import'),
      'base' => 'node_content',
      'description' => t('Content type for imported coffee. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
