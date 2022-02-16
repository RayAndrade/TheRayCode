<?php

//https://www.youtube.com/watch?v=VuBVAgwMfLE

namespace TheRayCode\Factory;



include_once ('ShapeFactory.php');

function drawStuff(Shape $shape){
    $shape ->draw();
}

//$shape = new Rectangle();
$shape1 = new Rectangle(new Position());

$shape2 = new Rectangle(new Position());
//$shape3 = new Rectangle(new Position());

//drawStuff($shape);
drawStuff($shape1);
drawStuff($shape2);

//echo "The Ray Code is AWESOME!!!<br/>";