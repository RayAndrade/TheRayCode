<?php
include_once('IProductA.php');
/**
 * Concrete Products are created by corresponding Concrete Factories.
 */
class ProductA1 implements IProductA
{
    public function usefulFunctionA(): string
    {
        return "The result of the product A1.";
    }
}