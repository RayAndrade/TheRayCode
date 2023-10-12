<?php

include_once 'Leaf.php';
include_once 'Composite.php';

$circle = new Leaf("Circle");
$square = new Leaf("Square");

$compositeShape1 = new Composite("CompositeShape1");
$compositeShape2 = new Composite("CompositeShape2");

$compositeShape1->add($circle);
$compositeShape1->add($square);

$compositeShape2->add($compositeShape1);

echo "Drawing Individual Components:<br>";
$circle->draw();
$square->draw();

echo "<br>Drawing Composite Shapes:<br>";
$compositeShape1->draw();
$compositeShape2->draw();