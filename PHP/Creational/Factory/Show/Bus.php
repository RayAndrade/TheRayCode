<?php

namespace TheRayCode\Prototype;

class Bus implements CloneablePrototype
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
        return new Bus($this->brand, $this->color);
    }
}