<?php
require_once "Creator.php";
require_once "ConcreteProductA.php";
class ConcreteCreatorA implements Creator
{

    public function factoryMethod(): Product
    {
        return new ConcreteProductA();
    }
}