<?php

include_once 'Cake.php';
include_once 'IceCream.php';

class DessertFactory
{    public static function createDessert(string $type): ?Dessert {
        switch (strtolower($type)) {
            case 'cake':
                return new Cake();
            case 'icecream':
                return new IceCream();
            default:
                return null;
        }
    }
}