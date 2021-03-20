<?php
include_once ('AbstractProductA.php');
class ProductA2 implements AbstractProductA
{
    public function usefulFunctionA(): string
    {
        return "The result of the product A2.";
    }
}