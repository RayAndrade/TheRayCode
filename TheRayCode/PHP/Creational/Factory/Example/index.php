<?php
require_once "ConcreteCreatorA.php";
require_once "ConcreteCreatorB.php";

function clientCode(Creator $creator)
{
    echo "Client: I'm working with " . get_class($creator) . "<br>";
    $product = $creator->factoryMethod();
    echo "Product says: " . $product->operation() . "<br><br>";
}

echo "<h2>Factory Method Pattern in PHP</h2>";

echo "<h3>Using ConcreteCreatorA:</h3>";
clientCode(new ConcreteCreatorA());

echo "<h3>Using ConcreteCreatorB:</h3>";
clientCode(new ConcreteCreatorB());