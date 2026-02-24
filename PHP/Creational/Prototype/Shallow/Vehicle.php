<?php

namespace TheRayCode\Prototype;

class Vehicle
{
    public $model;

    public function __construct($model) {
        $this->model = $model;
    }

    public function getModel() {
        return $this->model;
    }
}