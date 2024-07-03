<?php
require_once 'AbstractFactory.php';
require_once 'ProductA2.php';
require_once 'ProductB2.php';
class ConcreteFactory2 extends AbstractFactory
{

    public function createProductA()
    {
        return new ProductA2();
    }

    public function createProductB()
    {
        return new ProductB2();
    }
}