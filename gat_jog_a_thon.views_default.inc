<?php
/**
 * @file
 * gat_jog_a_thon.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function gat_jog_a_thon_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'jog_a_thon_participants';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Jog-a-thon Participants';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Jog-a-thon Participants';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Fields: Signup for a-thon (field_noderef_url_signup) - nid */
  $handler->display->display_options['arguments']['field_noderef_url_signup_nid']['id'] = 'field_noderef_url_signup_nid';
  $handler->display->display_options['arguments']['field_noderef_url_signup_nid']['table'] = 'field_data_field_noderef_url_signup';
  $handler->display->display_options['arguments']['field_noderef_url_signup_nid']['field'] = 'field_noderef_url_signup_nid';
  $handler->display->display_options['arguments']['field_noderef_url_signup_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_noderef_url_signup_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_noderef_url_signup_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_noderef_url_signup_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_noderef_url_signup_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_noderef_url_signup_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_noderef_url_signup_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_noderef_url_signup_nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jog_a_thon_signup' => 'jog_a_thon_signup',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['jog_a_thon_participants'] = array(
    t('Master'),
    t('Jog-a-thon Participants'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('All'),
    t('Block'),
  );
  $export['jog_a_thon_participants'] = $view;

  $view = new view;
  $view->name = 'jog_a_thon_pledges';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Jog-a-thon Pledges';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Jog-a-thon Pledges';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Amount */
  $handler->display->display_options['fields']['field_dec_amount']['id'] = 'field_dec_amount';
  $handler->display->display_options['fields']['field_dec_amount']['table'] = 'field_data_field_dec_amount';
  $handler->display->display_options['fields']['field_dec_amount']['field'] = 'field_dec_amount';
  $handler->display->display_options['fields']['field_dec_amount']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dec_amount']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dec_amount']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dec_amount']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dec_amount']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dec_amount']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dec_amount']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dec_amount']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dec_amount']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dec_amount']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dec_amount']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dec_amount']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_dec_amount']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dec_amount']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dec_amount']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dec_amount']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_dec_amount']['field_api_classes'] = 0;
  /* Field: Content: Per What? */
  $handler->display->display_options['fields']['field_list_perwhat']['id'] = 'field_list_perwhat';
  $handler->display->display_options['fields']['field_list_perwhat']['table'] = 'field_data_field_list_perwhat';
  $handler->display->display_options['fields']['field_list_perwhat']['field'] = 'field_list_perwhat';
  $handler->display->display_options['fields']['field_list_perwhat']['label'] = '';
  $handler->display->display_options['fields']['field_list_perwhat']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_list_perwhat']['alter']['text'] = 'per [field_list_perwhat]';
  $handler->display->display_options['fields']['field_list_perwhat']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_list_perwhat']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_list_perwhat']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_list_perwhat']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_list_perwhat']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_list_perwhat']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_list_perwhat']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_list_perwhat']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_list_perwhat']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_list_perwhat']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_list_perwhat']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_list_perwhat']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_list_perwhat']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_list_perwhat']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_list_perwhat']['field_api_classes'] = 0;
  /* Field: Content: Jog-a-thon pledge */
  $handler->display->display_options['fields']['field_noderef_url_pledge']['id'] = 'field_noderef_url_pledge';
  $handler->display->display_options['fields']['field_noderef_url_pledge']['table'] = 'field_data_field_noderef_url_pledge';
  $handler->display->display_options['fields']['field_noderef_url_pledge']['field'] = 'field_noderef_url_pledge';
  $handler->display->display_options['fields']['field_noderef_url_pledge']['label'] = 'Jog-a-thon Participant';
  $handler->display->display_options['fields']['field_noderef_url_pledge']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_noderef_url_pledge']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_noderef_url_pledge']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_noderef_url_pledge']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_noderef_url_pledge']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_noderef_url_pledge']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_noderef_url_pledge']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_noderef_url_pledge']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_noderef_url_pledge']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_noderef_url_pledge']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_noderef_url_pledge']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_noderef_url_pledge']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_noderef_url_pledge']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_noderef_url_pledge']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_noderef_url_pledge']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_noderef_url_pledge']['click_sort_column'] = 'nid';
  $handler->display->display_options['fields']['field_noderef_url_pledge']['field_api_classes'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Pledger';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Fields: Jog-a-thon pledge (field_noderef_url_pledge) - nid */
  $handler->display->display_options['arguments']['field_noderef_url_pledge_nid']['id'] = 'field_noderef_url_pledge_nid';
  $handler->display->display_options['arguments']['field_noderef_url_pledge_nid']['table'] = 'field_data_field_noderef_url_pledge';
  $handler->display->display_options['arguments']['field_noderef_url_pledge_nid']['field'] = 'field_noderef_url_pledge_nid';
  $handler->display->display_options['arguments']['field_noderef_url_pledge_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_noderef_url_pledge_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_noderef_url_pledge_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_noderef_url_pledge_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_noderef_url_pledge_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_noderef_url_pledge_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_noderef_url_pledge_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_noderef_url_pledge_nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jog_a_thon_pledge' => 'jog_a_thon_pledge',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['jog_a_thon_pledges'] = array(
    t('Master'),
    t('Jog-a-thon Pledges'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Amount'),
    t('per [field_list_perwhat]'),
    t('Jog-a-thon Participant'),
    t('Pledger'),
    t('All'),
    t('Block'),
  );
  $export['jog_a_thon_pledges'] = $view;

  return $export;
}
