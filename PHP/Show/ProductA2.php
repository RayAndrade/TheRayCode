<?php
include_once('IProductA.php');

class ProductA2 implements IProductA
{

    public function usefulFunctionA(): string
    {
        return "The result of the product A2.";
    }
}
