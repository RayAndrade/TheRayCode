<?php
require_once 'ShapeFactory.php';

$shapeTypes = ["Circle", "Square", "Rectangle"];
$colors = ["Red", "Green", "Blue"];
$factory = new ShapeFactory();

for ($i = 0; $i < 10; $i++) {
    $randomShape = $shapeTypes[array_rand($shapeTypes)];
    $shape = $factory->getShape($randomShape);
    $result = $shape->draw();
    echo $result . " in color " . $colors[array_rand($colors)] . "<br>";
}