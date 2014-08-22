<?php
// Plugin definition
$plugin = array(
  'title' => t('DrupalEasy Layout 1'),
  'icon' => 'de_layout1.png',
  'category' => t('DrupalEasy'),
  'theme' => 'de_layout1',
  'css' => 'de-layout1.css',
  'regions' => array(
    'column1' => t('Row 1: First Column'),
    'column2' => t('Row 1: Second Column'),
    'column3' => t('Row 1: Third Column'),
    'column4' => t('Row 1: Fourth Column'),
    'secondarycolumn1' => t('Row 2: First Column'),
    'secondarycolumn2' => t('Row 2: Second Column'),
  ),
);
