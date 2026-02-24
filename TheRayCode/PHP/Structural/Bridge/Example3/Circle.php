<?php
require_once('Shape.php');
class Circle extends Shape
{

    public function draw(): string
    {
        return "Drawing a Square in " . $this->color->applyColor() . " color.";
    }
}