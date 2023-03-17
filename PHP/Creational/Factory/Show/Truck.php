<?php

namespace Show;
include_once ('Vehicle.php');
class Truck implements Vehicle
{

    public function getName(): string
    {
        return "Truck";
    }
}