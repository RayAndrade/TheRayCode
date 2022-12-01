<?php
//https://www.youtube.com/watch?v=VuBVAgwMfLE
// Factory Pattern - PHP Design Patterns
// Easy Learn Tutorial

namespace TheRayCode\Factory;

include_once ('ShapeFactory.php');

function drawStuff(Shape $shape){
    $shape ->draw();
}

$shape1 = new Rectangle(new Position());
$shape2 = new Rectangle(new Position());

drawStuff($shape1);
drawStuff($shape2);

$factory = new ShapeFactory("Rectangle");
$rect = $factory->create("Rectangle");
echo $rect->draw();


//echo "The Ray Code is AWESOME!!!<br/>";$rect ->draw();
