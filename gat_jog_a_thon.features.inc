<?php
/**
 * @file
 * gat_jog_a_thon.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function gat_jog_a_thon_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}

/**
 * Implementation of hook_views_api().
 */
function gat_jog_a_thon_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_node_info().
 */
function gat_jog_a_thon_node_info() {
  $items = array(
    'jog_a_thon' => array(
      'name' => t('Jog-a-thon'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'jog_a_thon_pledge' => array(
      'name' => t('Jog-a-thon Pledge'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title (auto generated later)'),
      'help' => '',
    ),
    'jog_a_thon_signup' => array(
      'name' => t('Jog-a-thon Signup'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Participant\'s Name (temporary title)'),
      'help' => '',
    ),
  );
  return $items;
}
