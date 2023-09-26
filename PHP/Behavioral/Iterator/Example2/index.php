<?php
require_once('ConcreteAggregate.php');

// Create aggregate and add items.
$aggregate = new ConcreteAggregate();
$aggregate->addItem("Item 1");
$aggregate->addItem("Item 2");
$aggregate->addItem("Item 3");

// Get iterator and print items.
$iterator = $aggregate->createIterator();

echo "Iterating through items:<br>";
while ($iterator->valid()) {
    echo $iterator->current() . "<br>";
    $iterator->next();
}
