<?php
//include 'ScrollBar.php';
class MotifScrollBar implements ScrollBar
{

    public function scroll(): void
    {
        echo "Scrolling with a Motif style ScrollBar<hr/>\n";
    }
}