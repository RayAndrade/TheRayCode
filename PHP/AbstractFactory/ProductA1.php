<?php
include_once ('AbstractProductA.php');
/**
 * Concrete Products are created by corresponding Concrete Factories.
 */
class ProductA1 implements AbstractProductA
{
    public function usefulFunctionA(): string
    {
        return "The result of the product A1.";
    }
}