<?php
require_once 'AbstractProductA.php';
class ProductA1 implements AbstractProductA
{

    public function usefulFunctionA(): string
    {
        return "The result of the product A1.";
    }
}