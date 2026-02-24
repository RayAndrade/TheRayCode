<?php
require_once "Product.php";
class ConcreteProductB implements Product
{

    public function operation(): string
    {
        return "Result from ConcreteProductB";
    }
}