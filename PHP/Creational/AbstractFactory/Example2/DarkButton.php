<?php

include_once 'Button.php';
class DarkButton implements Button
{

    public function paint()
    {
        return "Rendering Dark-themed button";
    }
}