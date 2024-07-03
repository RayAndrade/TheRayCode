<?php
require_once 'AbstractFactory.php';
require_once 'ProductA1.php';
require_once 'ProductB1.php';
class ConcreteFactory1 extends AbstractFactory
{

    public function createProductA()
    {
        return new ProductA1();
    }

    public function createProductB()
    {
        return new ProductB1();
    }
}