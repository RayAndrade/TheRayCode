<?php
include 'Window.php';
class MotifWindow implements Window
{

    public function render(): void
    {
        echo "Rendering a Motif style Window<hr/>\n";
    }
}