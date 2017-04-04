<?php
/**
 * @file
 * eche_user.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function eche_user_default_rules_configuration() {
  $items = array();
  $items['rules_check_access_on_self_assessment'] = entity_import('rules_config', '{ "rules_check_access_on_self_assessment" : {
      "LABEL" : "Check access on self-assessment",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_view--webform" : { "bundle" : "webform" } },
      "IF" : [
        { "data_is" : {
            "data" : [ "node:title" ],
            "op" : "IN",
            "value" : { "value" : [
                "Complete your self-assessment as an Erasmus+ coordinator",
                "Complete your self-assessment as Rector \\/ Vice rector \\/ Vice chancellor"
              ]
            }
          }
        },
        { "AND" : [] },
        { "NOT user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "2" : "2", "3" : "3", "32" : "32" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "redirect" : { "url" : "user\\/login?destination=[site:current-page:path]" } }
      ]
    }
  }');
  $items['rules_user_registration'] = entity_import('rules_config', '{ "rules_user_registration" : {
      "LABEL" : "User registration",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "32" : "32" } } } },
        { "redirect" : { "url" : "user" } }
      ]
    }
  }');
  return $items;
}
