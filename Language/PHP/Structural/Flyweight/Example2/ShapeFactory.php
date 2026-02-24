<?php
require_once 'Shape.php';
class ShapeFactory
{
    private array $shapeMap = [];

    public function getShape(string $shapeType): Shape {
        if (!isset($this->shapeMap[$shapeType])) {
            $this->shapeMap[$shapeType] = new Shape($shapeType);
            echo "Creating new shape of type: " . $shapeType . "<br>";
        }
        return $this->shapeMap[$shapeType];
    }
}