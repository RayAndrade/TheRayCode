<?php

namespace Show;
include_once ('Car.php');
include_once ('Truck.php');
class VehicleFactory
{
    public static function createVehicle(string $type): Vehicle {
        if ($type === "car") {
            return new Car();
        } else if ($type === "truck") {
            return new Truck();
        } else {
            throw new Exception("Invalid vehicle type");
        }
    }
}