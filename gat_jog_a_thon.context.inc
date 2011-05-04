<?php
/**
 * @file
 * gat_jog_a_thon.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function gat_jog_a_thon_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Jog-a-thon Page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'jog_a_thon' => 'jog_a_thon',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-jog_a_thon_participants-block' => array(
          'module' => 'views',
          'delta' => 'jog_a_thon_participants-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['Jog-a-thon Page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Jog-a-thon Signup Page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'jog_a_thon_signup' => 'jog_a_thon_signup',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-jog_a_thon_pledges-block' => array(
          'module' => 'views',
          'delta' => 'jog_a_thon_pledges-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['Jog-a-thon Signup Page'] = $context;

  return $export;
}
