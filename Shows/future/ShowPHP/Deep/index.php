<?php
namespace TheRayCode\Prototype;

require_once 'Car.php';

$bmwModel = new Model("BMW");
$car1 = new Car($bmwModel);
$audiModel = new Model("Audi");
$car2 = clone $car1;
$car2->model = $audiModel;

echo "Car 1 Model: " . $car1->getModel() . "<br/>"; // Outputs: "Car 1 Model: BMW"
echo "Car 2 Model: " . $car2->getModel() . "<br/>"; // Outputs: "Car 2 Model: Audi"