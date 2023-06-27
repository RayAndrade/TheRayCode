<?php

namespace TheRayCode\Prototype;

require_once 'Vehicle.php';

class Car extends Vehicle
{
    public function __clone() {
        $this->model = clone $this->model;
    }
}