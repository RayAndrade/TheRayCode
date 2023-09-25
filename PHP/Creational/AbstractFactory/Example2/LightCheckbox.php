<?php

include_once 'Checkbox.php';

class LightCheckbox implements Checkbox
{

    public function paint()
    {
        return "Rendering Light-themed checkbox";
    }
}