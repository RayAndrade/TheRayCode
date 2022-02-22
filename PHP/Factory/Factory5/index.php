<?php
// https://www.youtube.com/watch?v=JIEUcTzvpS4
// Design Patterns in PHP - Simple Factory (Uber)
// ScreenCasts
//did not work

// require  __DIR__ . './../../';

use TheRayCode\Factory\Simple\VehicleFactory;
//use \TheRayCode\TheRayCode\PHP\Factory\Factory5\SimpleFactory;

function simpleFactory() {
    $luxurious = VehicleFactory::getVehicle('Luxurious');
    echo $luxurious->call() . '<br/>';
    $lowCost = VehicleFactory::getVehicle('LowCost');
    echo $luxurious->call() . '<br/>';
}