<?php
require_once('Shape.php');
class Square extends Shape
{

    public function draw(): string
    {
        return "Drawing a Square in " . $this->color->applyColor() . " color.";
    }
}