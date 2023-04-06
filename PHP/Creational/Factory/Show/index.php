<?php

namespace TheRayCode\Factory;

include('VehicleFactory.php');

$vehicleFactory = new VehicleFactory();
$car = $vehicleFactory->createVehicle('car');
$motorcycle = $vehicleFactory->createVehicle('motorcycle');
$bicycle = $vehicleFactory->createVehicle('bicycle');

$car->drive();          // Output: Driving a car...
$motorcycle->drive();   // Output: Riding a motorcycle...
$bicycle->drive();      // Output: Riding a bicycle...