<?php
include_once 'Leaf.php';
include_once 'Composite.php';

// Creating individual components
$circle = new Leaf("Circle");
$square = new Leaf("Square");

// Creating composite components
$compositeShape1 = new Composite("CompositeShape1");
$compositeShape2 = new Composite("CompositeShape2");

// Adding individual components to composite
$compositeShape1->add($circle);
$compositeShape1->add($square);

// Creating a more complex shape by adding a composite to another composite
$compositeShape2->add($compositeShape1);

// Drawing the shapes
echo "Drawing Individual Components:<br>";
$circle->draw();
$square->draw();

echo "<br>Drawing Composite Shapes:<br>";
$compositeShape1->draw();
$compositeShape2->draw();