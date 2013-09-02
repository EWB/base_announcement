<?php
/**
 * @file
 * base_announcement.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function base_announcement_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function base_announcement_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function base_announcement_image_default_styles() {
  $styles = array();

  // Exported image style: micro-slide.
  $styles['micro-slide'] = array(
    'name' => 'micro-slide',
    'effects' => array(
      10 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '300',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
    'label' => 'micro-slide',
  );

  // Exported image style: micro-thumb.
  $styles['micro-thumb'] = array(
    'name' => 'micro-thumb',
    'effects' => array(
      11 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '52',
          'height' => '38',
        ),
        'weight' => '1',
      ),
    ),
    'label' => 'micro-thumb',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function base_announcement_node_info() {
  $items = array(
    'base_announcement' => array(
      'name' => t('Announcement'),
      'base' => 'node_content',
      'description' => t('Use <em>Announcement</em> for time-sensitive content like news, press releases or general postings.  This content is moderated - which means that contributors can create announcements which will then be passed on to editors for review prior to publication.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
