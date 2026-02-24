<?php
//include 'WidgetFactory.php';
//include 'WindowsWindow.php';
//include 'WindowsScrollBar.php';
class WindowsWidgetFactory implements WidgetFactory
{

    public function createWindow(): Window
    {
        return new WindowsWindow();
    }

    public function createScrollBar(): ScrollBar
    {
        return new WindowsScrollBar();
    }
}