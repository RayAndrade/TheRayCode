<?php
include_once ('AbstractFactory.php');
/**
 * Concrete Factories produce a family of products that belong to a single
 * variant. The factory guarantees that resulting products are compatible. Note
 * that signatures of the Concrete Factory's methods return an abstract product,
 * while inside the method a concrete product is instantiated.
 */
class ConcreteFactory1 implements AbstractFactory
{
    public function createProductA(): IProductA
    {
        return new ProductA1;
    }

    public function createProductB(): IProductB
    {
        return new ProductB1;
    }
}

