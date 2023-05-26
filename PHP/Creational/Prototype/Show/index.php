<?php

use TheRayCode\Prototype\Car;

require 'Car.php';

$car1 = new Car('Tesla Model 3', 'Red', 2020);
echo $car1->getInfo();

echo "<br/>\n";

$car2 = $car1->clone();
echo $car2->getInfo();

echo "<br/>\n";

// Now let's modify some property in car2, but car1 should not be affected.
$car2->color = 'Blue';
echo $car1->getInfo();
echo "<br/>\n";
echo $car2->getInfo();

echo "<br/>\n";
echo "The Ray Code is AWESOME!!!";