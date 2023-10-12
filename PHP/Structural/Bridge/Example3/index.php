<?php

require_once('RedColor.php');
require_once('GreenColor.php');
require_once('Circle.php');
require_once('Square.php');

$red = new RedColor();
$green = new GreenColor();

$redCircle = new Circle($red);
$greenSquare = new Square($green);

echo "<h1>Shapes Drawing</h1>";
echo "<p>{$redCircle->draw()}</p>";
echo "<p>{$greenSquare->draw()}</p>";
