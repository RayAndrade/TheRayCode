<?php

include_once ('Factory1.php');
include_once ('Factory2.php');

include_once ('ProductA1.php');
include_once ('ProductA2.php');

include_once ('ProductB1.php');
include_once ('ProductB2.php');

/**
 * The client code works with factories and products only through abstract
 * types: AbstractFactory and AbstractProduct. This lets you pass any factory or
 * product subclass to the client code without breaking it.
 * @param AbstractFactory $factory
 */
function clientCode(AbstractFactory $factory)
{
$productA = $factory->createProductA();
$productB = $factory->createProductB();

echo $productB->usefulFunctionB() . "<br/>";
echo $productB->anotherUsefulFunctionB($productA) . "<br/>";
}

/**
* The client code can work with any concrete factory class.
*/
echo "Client: Testing client code with the first factory type:<br/>";
clientCode(new Factory1);

echo "<br/>";

echo "Client: Testing the same client code with the second factory type:<br/>";
clientCode(new Factory2);
