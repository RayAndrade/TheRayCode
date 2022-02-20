<?php

namespace TheRayCode\Factory;
include_once "Shape.php";
// 2:12 / 11:19

class Position { }

class Rectangle implements Shape
{
    // 7:20
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