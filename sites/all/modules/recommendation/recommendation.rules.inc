<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

function recommendation_rules_action_info() {
  $actions = array();
  
  $actions['recommendation_create_entity'] = array(
    'label' => t('Create a recommendation entity'),
    'parameter' => array(
      'order' => array(
        'type' => 'commerce_order',
        'label' => t('Order'),
      ),
      'product' => array(
        'type' => 'commerce_product',
        'label' => t('Product'),
      ),
    ),
    'group' => t('Custom'),
    'callbacks' => array(
      'execute' => 'recommendation_create_entity',
    ),
  );
  
  return $actions;
}

// react to adding product to cart 

function recommendation_create_entity($order, $product) {
  $rec = entity_create('recommendation', array(
    'type' => 'recommendation',
    'uid' => $order->order_id,
    'product_id' => $product->product_id,
    'recommendation_price' => $product->commerce_price,
    'created' => time(),
      )
  );
  $rec->save();
}