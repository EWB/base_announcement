<?php
/**
 * @file
 * base_announcement.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function base_announcement_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'basic';
  $preset->title = 'basic';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = '320';
  $preset->options = array(
    'animation' => 'fade',
    'animationDuration' => 600,
    'slideDirection' => 'horizontal',
    'slideshow' => 1,
    'slideshowSpeed' => 7000,
    'animationLoop' => 0,
    'randomize' => 0,
    'slideToStart' => 0,
    'directionNav' => 0,
    'controlNav' => 1,
    'keyboardNav' => 1,
    'mousewheel' => 1,
    'prevText' => 'Previous',
    'nextText' => 'Next',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'pauseOnAction' => 1,
    'controlsContainer' => '.flex-nav-container',
    'manualControls' => '',
  );
  $export['basic'] = $preset;

  return $export;
}
