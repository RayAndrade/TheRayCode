<?php
include_once 'Light.php';
include_once 'LightString.php';

$redLight = new Light('red');
$greenLight = new Light('green');
$blueLight = new Light('blue');

$firstString = new LightString();
$firstString->addLight($redLight);
$firstString->addLight($greenLight);

$secondString = new LightString();
$secondString->addLight($blueLight);
$secondString->addLight($firstString); // Demonstrating composition by adding firstString into secondString

echo "Christmas Tree Lights: " . $secondString->shine();