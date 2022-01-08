<?php

include_once ('Factory1.php');
include_once ('Factory2.php');

include_once ('ProductA1.php');
include_once ('ProductA2.php');

include_once ('ProductB1.php');
include_once ('ProductB2.php');

function clientCode(AbstractFactory $factory)
{
    $productA = $factory->createProductA();
    $productB = $factory->createProductB();

    echo $productB->usefulFunctionB() . "<br/>";
    echo $productB->anotherUsefulFunctionB($productA) . "<br/>";
}

echo "Client: Testing client code with the first factory type:<br/>";
clientCode(new Factory1);

echo "<br/>";

echo "Client: Testing the same client code with the second factory type:<br/>";
clientCode(new Factory2);