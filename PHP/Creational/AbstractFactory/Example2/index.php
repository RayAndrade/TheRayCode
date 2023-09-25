<?php
include_once 'DarkFactory.php';
include_once 'LightFactory.php';

$theme = "dark"; // You can change this to "light" to see the difference

if ($theme == "dark") {
    $factory = new DarkFactory();
} else {
    $factory = new LightFactory();
}

$button = $factory->createButton();
$checkbox = $factory->createCheckbox();

echo $button->paint() . "<br>";
echo $checkbox->paint();