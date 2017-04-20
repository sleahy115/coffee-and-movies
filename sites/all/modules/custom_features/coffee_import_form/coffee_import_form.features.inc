<?php
/**
 * @file
 * coffee_import_form.features.inc
 */

/**
 * Implements hook_node_info().
 */
function coffee_import_form_node_info() {
  $items = array(
    'coffee_imports' => array(
      'name' => t('Coffee Imports'),
      'base' => 'node_content',
      'description' => t('Form to add new coffees'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('Coffee name'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
