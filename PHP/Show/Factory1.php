<?php

include_once ('AbstractFactory.php');

class Factory1 implements AbstractFactory
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
