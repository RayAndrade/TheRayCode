<?php

namespace TheRayCode\Factory;

include('Car.php');
include('Motorcycle.php');
include('Bicycle.php');
class VehicleFactory
{
    public function createVehicle($type): Bicycle|Car|Motorcycle {
        if ($type == 'car') {
            return new Car();
        } elseif ($type == 'motorcycle') {
            return new Motorcycle();
        } elseif ($type == 'bicycle') {
            return new Bicycle();
        } else {
            throw new InvalidArgumentException("Invalid vehicle type");
        }
    }
}