<?php

namespace TheRayCode\Prototype;

require_once 'Model.php';

class Vehicle
{
    public $model;

    public function __construct(Model $model) {
        $this->model = $model;
    }

    public function getModel() {
        return $this->model->getName();
    }
}