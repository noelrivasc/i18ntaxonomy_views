<?php

/**
 * Implementation of hook_views_data().
 */
function i18ntaxonomy_views_views_data_alter(&$data) {
 
  // tid field
  $data['term_node']['tid']['field']['handler'] = 'views_handler_field_term_node_tid_i18n';
  $data['term_node']['tid']['filter']['handler'] = 'views_handler_filter_term_node_tid_i18n';
  
  //tid data name
  $data['term_data']['name']['field']['handler'] = 'views_handler_field_taxonomy_i18n';
  
  return $data;
}

/**
 * Implementation of hook_views_handlers() to register all of the basic handlers
 * views uses.
 */
function i18ntaxonomy_views_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'i18ntaxonomy_views'),
    ),
    'handlers' => array(
      'views_handler_field_term_node_tid_i18n' => array(
        'parent' => 'views_handler_field_term_node_tid',
      ),
      'views_handler_filter_term_node_tid_i18n' => array(
        'parent' => 'views_handler_filter_term_node_tid',
      ),
      
      'views_handler_field_taxonomy_i18n' => array(
        'parent' => 'views_handler_field_taxonomy',
      ),
    ),
  );
}
