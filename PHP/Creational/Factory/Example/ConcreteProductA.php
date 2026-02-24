<?php
require_once "Product.php";
class ConcreteProductA implements Product
{

    public function operation(): string
    {
        return "Result from ConcreteProductA";
    }
}