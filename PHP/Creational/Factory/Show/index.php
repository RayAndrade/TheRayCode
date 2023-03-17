<?php
namespace Show;

include_once ('VehicleFactory.php');

$car = VehicleFactory::createVehicle("car");
$truck = VehicleFactory::createVehicle("truck");

echo $car->getName(); // Output: "Car"
echo $truck->getName(); // Output: "Truck"
