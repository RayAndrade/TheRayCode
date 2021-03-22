<?php
include_once('IProductB.php');
/**
 * Concrete Products are created by corresponding Concrete Factories.
 */
class ProductB1 implements IProductB
{
    public function usefulFunctionB(): string
    {
        return "The result of the product B1.";
    }

    /**
     * The variant, Product B1, is only able to work correctly with the variant,
     * Product A1. Nevertheless, it accepts any instance of AbstractProductA as
     * an argument.
     * @param IProductA $collaborator
     * @return string
     */
    public function anotherUsefulFunctionB(IProductA $collaborator): string
    {
        $result = $collaborator->usefulFunctionA();

        return "The result of the B1 collaborating with the ({$result})";
    }
}