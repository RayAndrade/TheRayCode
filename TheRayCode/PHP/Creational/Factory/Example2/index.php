<?php
include_once 'ToyFactory.php';

$factory = new ToyFactory();

try {
    $carToy = $factory->createToy("Car");
    echo $carToy->make() . "<br>";

    $dollToy = $factory->createToy("Doll");
    echo $dollToy->make();
} catch (Exception $e) {
    echo "Error: " . $e->getMessage();
}
