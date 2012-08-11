<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function soe_dept_faculty_imagecache_default_presets() {
  $items = array(
    '108px_wide' => array(
      'presetname' => '108px_wide',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '108',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    '140wide' => array(
      'presetname' => '140wide',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '140',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function soe_dept_faculty_node_info() {
  $items = array(
    'facultystaff' => array(
      'name' => t('Faculty & Staff'),
      'module' => 'features',
      'description' => t('Stores information about faculty and staff,'),
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function soe_dept_faculty_views_api() {
  return array(
    'api' => '2',
  );
}
