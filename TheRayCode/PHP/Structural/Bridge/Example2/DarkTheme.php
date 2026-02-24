<?php
include_once 'Theme.php';
class DarkTheme implements Theme
{

    public function getColor(): string
    {
        return "dark";
    }
}