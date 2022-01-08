<?php
include_once ('AbstractFactory.php');

class ConcreteFactory implements AbstractFactory
{
    public function createProductA(): IProductA
    {
        return new ProductA1;
    }

    public function createProductB(): IProductB
    {
        return new ProductB1;
    }
}