<?php

namespace TheRayCode;

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