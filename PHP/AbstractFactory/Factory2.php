<?php
include_once ('AbstractFactory.php');
/**
 * Each Concrete Factory has a corresponding product variant.
 */
class Factory2 implements AbstractFactory
{
    public function createProductA(): AbstractProductA
    {
        return new ProductA2;
    }
    public function createProductB(): AbstractProductB
    {
        return new ProductB2;
    }
}
