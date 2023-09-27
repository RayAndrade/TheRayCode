<?php
require_once('FlockOfSheep.php');

// Create a flock and add sheep.
$flock = new FlockOfSheep();
$flock->addSheep("Sheep 1");
$flock->addSheep("Sheep 2");
$flock->addSheep("Sheep 3");

// Get iterator and count sheep.
$iterator = $flock->createIterator();

echo "Counting sheep:<br>";
$count = 0;
while ($iterator->valid()) {
    $count++;
    echo "Counted " . $iterator->current() . "<br>";
    $iterator->next();
}
echo "<br>Total sheep counted: $count";
