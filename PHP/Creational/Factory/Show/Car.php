<?php

namespace TheRayCode\Factory;

include_once('Vehicle.php');
class Car implements Vehicle
{

    public function drive()
    {
        echo "Driving a car...\n";
    }
}