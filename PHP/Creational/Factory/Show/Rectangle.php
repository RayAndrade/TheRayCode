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

    public function draw()
    {
        echo "Drawing a rectangle<br/>";
    }
}