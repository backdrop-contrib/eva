<?php

/**
 * @file
 * Preprocess handlers for theme functions
 */

/**
 * Implements preprocess handler.
 */
function template_preprocess_eva_display_entity_view(&$variables) {
  template_preprocess_views_view($variables);
  $view = $variables['view'];
  $display = $view->display_handler;
  $variables['title'] = $display->get_option('show_title') ? filter_xss_admin($view->get_title()) : '';
  if ($display->get_option('show_on') == 'form') {
    $variables['exposed'] = NULL;
  }
  $variables['exposed_form_as_field'] = $display->get_option('exposed_form_as_field');
}
