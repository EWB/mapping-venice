<?php
/**
 * @file
 * st_lawrence_university_login.ldap_servers.inc
 */

/**
 * Implements hook_default_ldap_servers().
 */
function st_lawrence_university_login_default_ldap_servers() {
  $export = array();

  $ldap_servers_conf = new stdClass();
  $ldap_servers_conf->disabled = FALSE; /* Edit this to true to make a default ldap_servers_conf disabled initially */
  $ldap_servers_conf->api_version = 1;
  $ldap_servers_conf->sid = 'slu_directory';
  $ldap_servers_conf->name = 'SLU Directory';
  $ldap_servers_conf->status = TRUE;
  $ldap_servers_conf->ldap_type = 'ad';
  $ldap_servers_conf->address = 'stlawu.local';
  $ldap_servers_conf->port = 389;
  $ldap_servers_conf->tls = FALSE;
  $ldap_servers_conf->followrefs = FALSE;
  $ldap_servers_conf->bind_method = 1;
  $ldap_servers_conf->binddn = 'cn=ldap_bind,ou=special,dc=stlawu,dc=local';
  $ldap_servers_conf->bindpw = '9to7b';
  $ldap_servers_conf->basedn = array(
    0 => 'ou=employees,dc=stlawu,dc=local',
    1 => 'ou=students,dc=stlawu,dc=local',
  );
  $ldap_servers_conf->user_attr = 'samaccountname';
  $ldap_servers_conf->account_name_attr = '';
  $ldap_servers_conf->mail_attr = 'mail';
  $ldap_servers_conf->mail_template = '';
  $ldap_servers_conf->picture_attr = '';
  $ldap_servers_conf->unique_persistent_attr = '';
  $ldap_servers_conf->unique_persistent_attr_binary = FALSE;
  $ldap_servers_conf->user_dn_expression = 'cn=%username,%basedn';
  $ldap_servers_conf->ldap_to_drupal_user = '';
  $ldap_servers_conf->testing_drupal_username = '';
  $ldap_servers_conf->testing_drupal_user_dn = '';
  $ldap_servers_conf->grp_unused = FALSE;
  $ldap_servers_conf->grp_object_cat = 'group';
  $ldap_servers_conf->grp_nested = TRUE;
  $ldap_servers_conf->grp_user_memb_attr_exists = TRUE;
  $ldap_servers_conf->grp_user_memb_attr = 'memberof';
  $ldap_servers_conf->grp_memb_attr = 'member';
  $ldap_servers_conf->grp_memb_attr_match_user_attr = 'cn';
  $ldap_servers_conf->grp_derive_from_dn = TRUE;
  $ldap_servers_conf->grp_derive_from_dn_attr = 'ou';
  $ldap_servers_conf->grp_test_grp_dn = '';
  $ldap_servers_conf->grp_test_grp_dn_writeable = '';
  $ldap_servers_conf->search_pagination = FALSE;
  $ldap_servers_conf->search_page_size = 1000;
  $ldap_servers_conf->weight = 0;
  $export['slu_directory'] = $ldap_servers_conf;

  return $export;
}
