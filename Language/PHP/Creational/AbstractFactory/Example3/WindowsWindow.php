<?php
include 'Window.php';
class WindowsWindow implements Window
{

    public function render(): void
    {
        echo "Rendering a Windows style Window<hr/>\n";
    }
}