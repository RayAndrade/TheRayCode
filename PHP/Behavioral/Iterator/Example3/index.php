<?php

require_once 'Sheep.php';
require_once 'SheepCollection.php';
require_once 'SheepIterator.php';

$sheepCollection = new SheepCollection();
$sheepCollection->addSheep(new Sheep("Sheep 1"));
$sheepCollection->addSheep(new Sheep("Sheep 2"));
$sheepCollection->addSheep(new Sheep("Sheep 3"));

echo "Iterating over sheep collection:<br>";
foreach ($sheepCollection as $sheep) {
    echo $sheep->getName() . "<br>";
}
