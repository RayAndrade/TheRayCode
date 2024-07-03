<?php

require_once 'AbstractFactory.php';
require_once 'ProductA1.php';
require_once 'ProductB1.php';

class ConcreteFactory1 implements AbstractFactory
{

    public function createProductA(): AbstractProductA
    {
        return new ProductA1();
    }

    public function createProductB(): AbstractProductB
    {
        return new ProductB1();
    }
}