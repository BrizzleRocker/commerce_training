<?php

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

function recommendation_entity_property_info() {
  $info = array();

  $properties = &$info['recommendation']['properties'];

  $properties['recid'] = array(
    'label' => t('Recommendation ID'),
    'description' => t('The internal numeric ID of the recommendation.'),
    'type' => 'integer',
    'schema field' => 'rec_id',
  );
  $properties['created'] = array(
    'label' => t('Date created'),
    'description' => t('The date the recommendation was created.'),
    'type' => 'date',
    'schema field' => 'created',
  );
  $properties['uid'] = array(
    'label' => t('Creator ID'),
    'type' => 'integer',
    'description' => t('The unique ID of the recommendation creator.'),
    'clear' => array('creator'),
    'schema field' => 'uid',
  );
  $properties['product_id'] = array(
    'label' => t('Product ID'),
    'description' => t('The internal numeric ID of the product.'),
    'type' => 'integer',
    'schema field' => 'product_id',
  );
  
  $properties['time_ago'] = array(
    'label' => t('Recommendation time ago'),
    'description' => t('time since the recommendation'),
    'type' => 'date',
    'getter_callback' => 'recommendation_get_properties',
    'computed' => TRUE,
  );
  
  return $info;
}
