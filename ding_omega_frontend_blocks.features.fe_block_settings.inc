<?php
/**
 * @file
 * ding_omega_frontend_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ding_omega_frontend_blocks_default_fe_block_settings() {
  $export = array();

  // ding2_basetheme
  $theme = array();

  $theme['ding_library-ding_menu'] = array(
    'module' => 'ding_library',
    'delta' => 'ding_menu',
    'theme' => 'ding2_basetheme',
    'status' => '1',
    'weight' => '-20',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => 4,
    'i18n_mode' => '0',
  );

  $theme['ding_library-library_address'] = array(
    'module' => 'ding_library',
    'delta' => 'library_address',
    'theme' => 'ding2_basetheme',
    'status' => '1',
    'weight' => '-24',
    'region' => 'footer',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
    'i18n_mode' => '0',
  );

  $theme['ding_user_frontend-ding-user-loan-number'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-user-loan-number',
    'theme' => 'ding2_basetheme',
    'status' => '1',
    'weight' => '-21',
    'region' => 'action_user',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['ding_user_frontend-ding-username'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-username',
    'theme' => 'ding2_basetheme',
    'status' => '1',
    'weight' => '-24',
    'region' => 'action_user',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'ding2_basetheme',
    'status' => '1',
    'weight' => '-20',
    'region' => 'help',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['menu-menu-footer-menu-1'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-1',
    'theme' => 'ding2_basetheme',
    'status' => '1',
    'weight' => '-24',
    'region' => 'footer_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['menu-menu-footer-menu-2'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-2',
    'theme' => 'ding2_basetheme',
    'status' => '1',
    'weight' => '-23',
    'region' => 'footer_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['menu-menu-footer-menu-3'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-3',
    'theme' => 'ding2_basetheme',
    'status' => '1',
    'weight' => '-23',
    'region' => 'footer_third',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['menu-menu-footer-menu-4'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-4',
    'theme' => 'ding2_basetheme',
    'status' => '1',
    'weight' => '-23',
    'region' => 'footer_fourth',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'ding2_basetheme',
    'status' => '1',
    'weight' => '-22',
    'region' => 'action_search',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'ding2_basetheme',
    'status' => '1',
    'weight' => '-23',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'ding2_basetheme',
    'status' => '1',
    'weight' => '-23',
    'region' => 'action_user',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'ding2_basetheme',
    'status' => '1',
    'weight' => '-22',
    'region' => 'action_user',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $export['ding2_basetheme'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
