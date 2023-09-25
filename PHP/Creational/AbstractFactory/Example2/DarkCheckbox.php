<?php

include_once 'Checkbox.php';
class DarkCheckbox implements Checkbox
{

    public function paint()
    {
        return "Rendering Dark-themed checkbox";
    }
}