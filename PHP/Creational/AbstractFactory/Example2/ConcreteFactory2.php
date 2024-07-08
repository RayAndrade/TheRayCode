<?php
require_once 'AbstractFactory.php';
require_once 'ProductA2.php';
require_once 'ProductB2.php';
class ConcreteFactory2 implements AbstractFactory
{

    public function createProductA(): AbstractProductA
    {
        return new ProductA2();
    }

    public function createProductB(): AbstractProductB
    {
        return new ProductB2();
    }
}