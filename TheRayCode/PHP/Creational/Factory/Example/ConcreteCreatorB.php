<?php
require_once "Creator.php";
require_once "ConcreteProductB.php";
class ConcreteCreatorB implements Creator
{

    public function factoryMethod(): Product
    {
        return new ConcreteProductB();
    }
}