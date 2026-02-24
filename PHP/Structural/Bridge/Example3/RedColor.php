<?php
require_once('ColorInterface.php');
class RedColor implements ColorInterface
{

    public function applyColor(): string
    {
        return "Red";
    }
}