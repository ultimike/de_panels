<?php
/**
 * @file
 * Template for DrupalEasy Layout 1.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display de-layout1 clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="de-layout1-container de-layout1-column-content de-layout1-column-content-row1 clearfix">
  
    <div class="de-layout1-column-content-region de-layout1-column1 panel-panel">
      <div class="de-layout1-column-content-region-inner de-layout1-column1-inner panel-panel-inner">
        <?php print $content['column1']; ?>
      </div>
    </div>
    <div class="de-layout1-column-content-region de-layout1-column2 panel-panel">
      <div class="de-layout1-column-content-region-inner de-layout1-column2-inner panel-panel-inner">
        <?php print $content['column2']; ?>
      </div>
    </div>
    <div class="de-layout1-column-content-region de-layout1-column3 panel-panel">
      <div class="de-layout1-column-content-region-inner de-layout1-column3-inner panel-panel-inner">
        <?php print $content['column3']; ?>
      </div>
    </div>
    <div class="de-layout1-column-content-region de-layout1-column4 panel-panel">
      <div class="de-layout1-column-content-region-inner de-layout1-column4-inner panel-panel-inner">
        <?php print $content['column4']; ?>
      </div>
    </div>
  </div>
  
  <div class="de-layout1-container de-layout1-secondary-column-content de-layout1-column-content-row2 clearfix">
    <div class="de-layout1-secondary-column-content-region de-layout1-secondary-column1 panel-panel">
      <div class="de-layout1-secondary-column-content-region-inner de-layout1-secondary-column1-inner panel-panel-inner">
        <?php print $content['secondarycolumn1']; ?>
      </div>
    </div>
    <div class="de-layout1-secondary-column-content-region de-layout1-secondary-column2 panel-panel">
      <div class="de-layout1-secondary-column-content-region-inner de-layout1-secondary-column2-inner panel-panel-inner">
        <?php print $content['secondarycolumn2']; ?>
      </div>
    </div>
  </div>
  
</div><!-- /.de-layout1 -->
