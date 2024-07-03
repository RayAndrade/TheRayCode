<?php
require_once 'AbstractFactory.php';
require_once 'AbstractProductA.php';
require_once 'AbstractProductB.php';
class Client
{
    private $factory;

    public function __construct(AbstractFactory $factory) {
        $this->factory = $factory;
    }

    public function run() {
        $productA = $this->factory->createProductA();
        $productB = $this->factory->createProductB();

        echo $productA->usefulFunctionA() . "\n";
        echo $productB->usefulFunctionB() . "\n";
    }
}