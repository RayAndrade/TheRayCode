<?php

namespace Show;
include_once ('Vehicle.php');

class Car implements Vehicle
{
    public function getName(): string {
        return "Car";
    }
}