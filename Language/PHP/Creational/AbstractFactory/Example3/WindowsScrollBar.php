<?php
//include 'ScrollBar.php';
class WindowsScrollBar implements ScrollBar
{

    public function scroll(): void
    {
        echo "Scrolling with a Windows style ScrollBar<hr/>\n";
    }
}