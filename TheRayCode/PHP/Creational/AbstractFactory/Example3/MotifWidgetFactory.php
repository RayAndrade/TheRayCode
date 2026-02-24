<?php
include_once 'WidgetFactory.php';
//include 'MotifWindow.php';
//include 'MotifScrollBar.php';
class MotifWidgetFactory implements WidgetFactory
{

    public function createWindow(): Window
    {
        return new MotifWindow();
    }

    public function createScrollBar(): ScrollBar
    {
        return new MotifScrollBar();
    }
}