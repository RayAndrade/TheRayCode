<?php
require_once 'AbstractFactory.php';
class Client
{
    private AbstractProductA $productA;
    private AbstractProductB $productB;

    public function __construct(AbstractFactory $factory) {
        $this->productA = $factory->createProductA();
        $this->productB = $factory->createProductB();
    }

    public function run(): void {
        echo $this->productB->usefulFunctionB() . "<br/>\n";
        echo $this->productB->anotherUsefulFunctionB($this->productA) . "<br/>\n";
    }
}