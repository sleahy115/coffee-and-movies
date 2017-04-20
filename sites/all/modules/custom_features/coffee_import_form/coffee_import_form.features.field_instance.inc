<?php
/**
 * @file
 * coffee_import_form.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function coffee_import_form_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-coffee_imports-body'.
  $field_instances['node-coffee_imports-body'] = array(
    'bundle' => 'coffee_imports',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Description of coffee (where it\'s from, elevation, etc.)',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 1,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-coffee_imports-field_locale'.
  $field_instances['node-coffee_imports-field_locale'] = array(
    'bundle' => 'coffee_imports',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Where the coffee is from',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_locale',
    'label' => 'Locale',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 30,
      ),
      'type' => 'text_textfield',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-coffee_imports-field_price'.
  $field_instances['node-coffee_imports-field_price'] = array(
    'bundle' => 'coffee_imports',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_price',
    'label' => 'Price',
    'required' => 1,
    'settings' => array(
      'max' => 200,
      'min' => 0,
      'prefix' => '$',
      'suffix' => '/lb',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-coffee_imports-field_roast'.
  $field_instances['node-coffee_imports-field_roast'] = array(
    'bundle' => 'coffee_imports',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Type of coffee roast',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_roast',
    'label' => 'Roast',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Description');
  t('Description of coffee (where it\'s from, elevation, etc.)');
  t('Locale');
  t('Price');
  t('Roast');
  t('Type of coffee roast');
  t('Where the coffee is from');

  return $field_instances;
}
