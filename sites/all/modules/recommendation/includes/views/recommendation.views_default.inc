<?php

function recommendation_views_default_views() {
$views = array();  
  
$view = new view();
$view->name = 'recommendation';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'recommendation';
$view->human_name = 'Recommendation';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Recommendation';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
/* Field: Recommendation: Date created */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'recommendation';
$handler->display->display_options['fields']['created']['field'] = 'created';
/* Field: Recommendation: Product ID */
$handler->display->display_options['fields']['product_id']['id'] = 'product_id';
$handler->display->display_options['fields']['product_id']['table'] = 'recommendation';
$handler->display->display_options['fields']['product_id']['field'] = 'product_id';
/* Field: Recommendation: Price */
$handler->display->display_options['fields']['recommendation_price']['id'] = 'recommendation_price';
$handler->display->display_options['fields']['recommendation_price']['table'] = 'field_data_recommendation_price';
$handler->display->display_options['fields']['recommendation_price']['field'] = 'recommendation_price';
$handler->display->display_options['fields']['recommendation_price']['element_type'] = '0';
$handler->display->display_options['fields']['recommendation_price']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['recommendation_price']['element_wrapper_type'] = '0';
$handler->display->display_options['fields']['recommendation_price']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['recommendation_price']['click_sort_column'] = 'amount';
$handler->display->display_options['fields']['recommendation_price']['type'] = 'commerce_price_no_decimals';
$handler->display->display_options['fields']['recommendation_price']['settings'] = array(
  'calculation' => TRUE,
);
$handler->display->display_options['fields']['recommendation_price']['field_api_classes'] = TRUE;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'recommendation';
$translatables['recommendation'] = array(
  t('Master'),
  t('Recommendation'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('« first'),
  t('‹ previous'),
  t('next ›'),
  t('last »'),
  t('Date created'),
  t('Product ID'),
  t('.'),
  t(','),
  t('Price'),
  t('Page'),
);

$views[$view->name] = $view;

return $views;

}

