<?php
include_once ('AbstractFactory.php');

class Factory2 implements AbstractFactory
{

    public function createProductA(): IProductA
    {
        return new ProductA2;
    }

    public function createProductB(): IProductB
    {
        return new ProductB2;
    }
}