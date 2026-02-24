<?php
include 'WidgetFactory.php';
include 'Window.php';
include 'ScrollBar.php';
class Client
{
    private Window $window;
    private ScrollBar $scrollBar;

public function __construct(WidgetFactory $factory) {
    // Use factory to create UI components
    $this->window = $factory->createWindow();
    $this->scrollBar = $factory->createScrollBar();
    }
    public function renderUI(): void {
        $this->window->render();
        $this->scrollBar->scroll();
    }
}