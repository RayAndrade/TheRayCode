<?php
require_once 'AbstractProductB.php';
require_once 'AbstractProductA.php';
class ProductB1 implements AbstractProductB
{

    public function usefulFunctionB(): string
    {
        return "The result of the product B1.";
    }

    public function anotherUsefulFunctionB(AbstractProductA $collaborator): string
    {
        $result = $collaborator->usefulFunctionA();
        return "The result of the B1 collaborating with ({$result})";
    }
}