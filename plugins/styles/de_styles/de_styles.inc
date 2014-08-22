<?php
/**
 * @file
 * DrupalEasy Panel style.
 */

/**
 * Implements hook_panels_styles().
 */
$plugin = array(
  'de_styles' => array(
    'title' => t('DrupalEasy panel style'),
    'description'   => t('DrupalEasy panel style.'),
    'render pane' => 'de_styles_render_pane',
    'render region' => 'de_styles_render_region',
    'pane settings form' => '_de_styles_settings_form',
  ),
);

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_de_styles_render_pane($variables) {
  $settings = $variables['settings'];
  $content = $variables['content'];
  $pane = $variables['pane'];

  $attributes = array();
  $attributes['class'][] = 'de-pane';
  
  if (empty($settings['background_color'])) {
    $attributes['class'][] = 'bg-grey';
  }
  else {
    $attributes['class'][] = $settings['background_color'];
  }
  
  if (empty($settings['text_color'])) {
    $attributes['class'][] = 'tx-white';
  }
  else {
    $attributes['class'][] = $settings['text_color'];
  }

  drupal_add_css(drupal_get_path('module', 'de_panels') . '/css/de-styles.css');
  
  $output = '<section' . drupal_attributes($attributes) . '>';
  if (!empty($content->title)) {
    $output .= '  <h2>' .  $content->title . '</h2>';
  }
  $output .= '  <div class="content">' . render($content->content) . '</div>';
  $output .= '</section>';
  return $output;
}

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_de_styles_render_region($variables) {
  return implode($variables['panes']);
}

/**
 * Form callback.
 */
function _de_styles_settings_form($settings) {
  $form['background_color'] = array(
    '#type' => 'select',
    '#title' => t('Background color'),
    '#options' => array(
      'bg-none' => t('No background color'),
      'bg-grey' => t('Grey background'),
      'bg-blue' => t('Blue background'),
    ),
    '#default_value' => (isset($settings['background_color'])) ? $settings['background_color'] : 'bg-grey',
  );

  return $form;
}
