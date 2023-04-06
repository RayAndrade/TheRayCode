<?php

namespace TheRayCode\Factory;

include_once('Vehicle.php');
class Bicycle implements Vehicle
{

    public function drive()
    {
        echo "Riding a motorcycle...\n";
    }
}