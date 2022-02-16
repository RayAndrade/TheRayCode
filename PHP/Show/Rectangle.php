<?php

namespace TheRayCode\Factory;
include_once "Shape.php";

class Position { }

class Rectangle implements Shape
{
    private $position;

    public function __construct($pos){
       $this->position = $pos;
    }
    //public $x;
    //public $y;
    //public $w;
    //public $h;

    public function draw()
    {
        echo "Drawing a rectangle<br/>";
    }
}