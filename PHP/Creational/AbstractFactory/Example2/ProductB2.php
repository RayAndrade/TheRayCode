<?php
require_once 'AbstractProductB.php';
require_once 'AbstractProductA.php';
class ProductB2  implements AbstractProductB
{

    public function usefulFunctionB(): string
    {
        return "The result of the product B2.";
    }

    public function anotherUsefulFunctionB(AbstractProductA $collaborator): string
    {
        $result = $collaborator->usefulFunctionA();
        return "The result of the B2 collaborating with ({$result})";
    }
}