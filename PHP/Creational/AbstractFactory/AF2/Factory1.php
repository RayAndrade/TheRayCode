<?php
include_once "AbstractFactory.php";

class Factory1 extends AbstractFactory
{
    public function CreateProduct1()
    {
        return new Product1A();
    }

    public function CreateProduct2()
    {
        return new Product1A();
    }
}