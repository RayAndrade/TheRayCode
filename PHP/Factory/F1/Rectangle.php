<?php
namespace TheRayCode\Factory;
include_once "Shape.php";
// 2:12 / 11:19

class Position { }

class Rectangle implements Shape
{
    //public $x;
    //public $y;
    //public $w;
    //public $h;

    private $position;

    public function __construct($pos){
        $this->position = $pos;
    }


    public function draw()
    {
        echo "Drawing a rectangle<br/>";
    }
}