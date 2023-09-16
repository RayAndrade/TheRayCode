<?php

namespace TheRayCode\Factory;

class VehicleFactory
{
    public function createVehicle($type) {
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