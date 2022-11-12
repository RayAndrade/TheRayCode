<?php

include_once "AbstractFactory.php";

class Factory2 extends AbstractFactory
{
    public function CreateProduct1()
    {
        return new Product1B();
    }

    public function CreateProduct2()
    {
        return new Product2_2();
    }
}