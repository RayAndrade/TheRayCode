<?php
include_once('IProductA.php');

class ProductA1 implements IProductA
{

    public function usefulFunctionA(): string
    {
        return "The result of the product A1.";
    }
}
