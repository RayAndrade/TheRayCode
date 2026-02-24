<?php
require_once('ColorInterface.php');
abstract class Shape
{
    protected ColorInterface $color;

    public function __construct(ColorInterface $color) {
        $this->color = $color;
    }

    abstract public function draw(): string;

}