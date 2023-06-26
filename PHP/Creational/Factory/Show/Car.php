<?php

namespace TheRayCode\Prototype;

class Car implements CloneablePrototype
{
    private $brand;
    public $color;

    public function __construct($brand, $color)
    {
        $this->brand = $brand;
        $this->color = $color;
    }

    public function getBrand()
    {
        return $this->brand;
    }

    public function getColor()
    {
        return $this->color;
    }


    public function clone(): CloneablePrototype
    {
        return clone $this;
    }
}