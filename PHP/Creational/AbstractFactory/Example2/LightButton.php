<?php

include_once 'Button.php';
class LightButton implements Button
{

    public function paint()
    {
        return "Rendering Light-themed button";
    }
}