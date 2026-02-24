<?php

include_once 'Dessert.php';
class Cake extends Dessert
{

    public function eat(): string
    {
        return "Eating a delicious cake!";
    }
}