<?php
namespace TheRayCode\Factory;
// 6:20
include_once ('Rectangle.php');

class ShapeFactory
{
    public function __construct($type)
    {
        if ($type=="Rectangle"){
            // 7:55
            return new Rectangle(new Position());
        }
    }

}