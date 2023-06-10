<?php
namespace TheRayCode\Factory;
include('Vehicle.php');
include('Car.php');
include('Motorcycle.php');
include('Bicycle.php');
include('VehicleFactory.php');

$vehicleFactory = new VehicleFactory();
$car = $vehicleFactory->createVehicle('car');
$motorcycle = $vehicleFactory->createVehicle('motorcycle');
$bicycle = $vehicleFactory->createVehicle('bicycle');

$car->drive();          // Output: Driving a car...
$motorcycle->drive();   // Output: Riding a motorcycle...
$bicycle->drive();      // Output: Riding a bicycle...
echo "The Ray Code is AWESOME!!!";
