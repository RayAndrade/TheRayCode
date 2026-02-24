<?php
include_once 'Theme.php';
class LightTheme implements Theme
{

    public function getColor(): string
    {
        return "light";
    }
}