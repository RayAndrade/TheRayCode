<?php
include_once "AbstractFactory.php";

class ConcreteFactory1 extends AbstractFactory
{
    public function CreateProduct1()
    {
        return new Product1_1();
    }

    public function CreateProduct2()
    {
        return new Product2_1();
    }
}