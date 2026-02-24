<?php
require_once 'ShapeInterface.php';
class Shape implements ShapeInterface
{
    private string $type;

    public function __construct(string $type) {
        $this->type = $type;
    }
    public function draw(): string
    {
        return "Drawing a " . $this->type;
    }
}