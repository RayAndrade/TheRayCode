<?php

// echo "The Ray Code is AWESOME!!!";

require_once 'Sheep.php';
require_once 'SheepHerd.php';
require_once 'SheepHerdIterator.php';

// Create sheep herd and add sheep
$sheepHerd = new SheepHerd();
$sheepHerd->addSheep(new Sheep("Dolly"));
$sheepHerd->addSheep(new Sheep("Shaun"));
$sheepHerd->addSheep(new Sheep("Timmy"));

// Iterate over sheep herd
$iterator = new SheepHerdIterator($sheepHerd);
while ($iterator->hasNext()) {
    $sheep = $iterator->next();
    echo "Counting sheep: " . $sheep->getName() . "<br/>";
}