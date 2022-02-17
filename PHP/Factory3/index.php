<?php

/**
 * https://www.youtube.com/watch?v=koOQWs4BdAY
 * PHP Design Patterns: The Simple Factory Pattern
 * video not finished
 * @param $class_name
 * @return void
 */

function __autoload($class_name)
{
    include 'classes/' . $class_name . '.php';
}
$car = new Car();