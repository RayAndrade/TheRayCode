<?php

include_once 'Dessert.php';

class IceCream extends Dessert
{

    public function eat(): string
    {
        return "Eating a yummy ice cream!";
    }
}