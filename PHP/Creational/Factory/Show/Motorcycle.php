<?php

namespace TheRayCode\Factory;

include_once('Vehicle.php');
class Motorcycle implements Vehicle
{

    public function drive()
    {
        echo "Riding a motorcycle...\n";
    }
}