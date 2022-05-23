<?php

include_once "AbstractFactory.php";

class ConcreteFactory2 extends AbstractFactory
{
    public function CreateProduct1()
    {
        return new Product1_2();
    }

    public function CreateProduct2()
    {
        return new Product2_2();
    }
}