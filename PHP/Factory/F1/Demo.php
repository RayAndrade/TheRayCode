<?php
//https://www.youtube.com/watch?v=VuBVAgwMfLE
// Factory Pattern - PHP Design Patterns
// Easy Learn Tutorial

namespace TheRayCode\Factory;

include_once ('ShapeFactory.php');

function drawStuff(Shape $shape){
    $shape ->draw();
}
// time 2:58 / 11:19
//$shape = new Rectangle();

// 8:13
$shape1 = new Rectangle(new Position());
// 8:17
$shape2 = new Rectangle(new Position());
//$shape3 = new Rectangle(new Position());

// 3:53
//drawStuff($shape);
drawStuff($shape1);
drawStuff($shape2);

$factory = new ShapeFactory("Rectangle");
$rect = $factory->create("Rectangle");
echo $rect->draw();

//echo "The Ray Code is AWESOME!!!<br/>";$rect ->draw();
