<?php
/**
 * @file
 * item.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function item_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_still_image|node|item|form';
  $field_group->group_name = 'group_still_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Still Image',
    'weight' => '7',
    'children' => array(
      0 => 'field_dc_original_format',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Still Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_still_image|node|item|form'] = $field_group;

  return $export;
}
