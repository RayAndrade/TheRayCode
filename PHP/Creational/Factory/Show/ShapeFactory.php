<?php

namespace TheRayCode\Factory;

include_once ('Rectangle.php');

class ShapeFactory
{
    public function __construct($type)
    {
        if ($type=="Rectangle"){
            return new Rectangle(new Position());
        }
    }

}