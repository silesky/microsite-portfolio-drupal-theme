<?php
/**
 * @file
 * custom_footer.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function custom_footer_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_tulane_custom_footer';
  $strongarm->value = 0;
  $export['comment_anonymous_tulane_custom_footer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_tulane_custom_footer';
  $strongarm->value = 1;
  $export['comment_default_mode_tulane_custom_footer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_tulane_custom_footer';
  $strongarm->value = '50';
  $export['comment_default_per_page_tulane_custom_footer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_tulane_custom_footer';
  $strongarm->value = 1;
  $export['comment_form_location_tulane_custom_footer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_tulane_custom_footer';
  $strongarm->value = '1';
  $export['comment_preview_tulane_custom_footer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_tulane_custom_footer';
  $strongarm->value = 1;
  $export['comment_subject_field_tulane_custom_footer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_tulane_custom_footer';
  $strongarm->value = '2';
  $export['comment_tulane_custom_footer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_tulane_custom_footer';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_tulane_custom_footer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_tulane_custom_footer';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_tulane_custom_footer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_tulane_custom_footer';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_tulane_custom_footer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_tulane_custom_footer';
  $strongarm->value = '1';
  $export['node_preview_tulane_custom_footer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_tulane_custom_footer';
  $strongarm->value = 1;
  $export['node_submitted_tulane_custom_footer'] = $strongarm;

  return $export;
}
