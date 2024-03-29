<?php
namespace TheRayCode\Prototype;

require_once 'Car.php';

$car1 = new Car("BMW");
$car2 = clone $car1;

$car2->model = "Audi";

echo "Car 1 Model: " . $car1->getModel() . "<br/>"; // Outputs: "Car 1 Model: BMW"
echo "Car 2 Model: " . $car2->getModel() . "<br/>"; // Outputs: "Car 2 Model: Audi"

echo "The Ray Code is AWESOME!!!";