<?php

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

function recommendation_default_rules_configuration() {
  $rule = rules_import('
  { "rules_create_recommendation" : {
      "LABEL" : "Create Recommendation",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "recommendation", "commerce_cart" ],
      "ON" : { "commerce_cart_product_add" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "commerce-order:owner" ],
            "roles" : { "value" : { "2" : "2" } }
          }
        }
      ],
      "DO" : [
        { "recommendation_create_entity" : { "order" : [ "commerce-order" ], "product" : [ "commerce-product" ] } }
      ]
    }
  }');
}
