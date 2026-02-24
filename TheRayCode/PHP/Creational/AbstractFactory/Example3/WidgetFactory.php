<?php

interface WidgetFactory
{
    public function createWindow(): Window;
    public function createScrollBar(): ScrollBar;
}