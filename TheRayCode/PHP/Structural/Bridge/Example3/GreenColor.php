<?php
require_once('ColorInterface.php');
class GreenColor implements ColorInterface
{

    public function applyColor(): string
    {
        return "Green";
    }
}