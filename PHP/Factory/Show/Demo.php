<?php
namespace TheRayCode\Factory;
include_once ('ShapeFactory.php');

function drawStuff(Shape $shape){
    $shape ->draw();
}

$shape1 = new Rectangle(new Position());
$shape2 = new Rectangle(new Position());

drawStuff($shape1);
drawStuff($shape2);