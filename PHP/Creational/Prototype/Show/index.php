<?php
namespace TheRayCode\Prototype;

include 'Clown.php';
include 'Nose.php';

$bozoClown = new Clown("Bozo", new Nose("Red"));

$bozoShallowClone = clone $bozoClown;
$bozoDeepClone = $bozoClown->deepClone();

// Let's change the nose color of original bozoClown
$bozoClown->nose->color = "Blue";

echo "Original Bozo 🤡 CLOWN Nose Color: " . $bozoClown->nose->color . "<br/>\n"; // Blue
echo "Shallow Clone Bozo 🥸 Clone Nose Color: " . $bozoShallowClone->nose->color . "<br/>\n"; // Blue
echo "Deep Clone Bozo Clone 😎 Nose Color: " . $bozoDeepClone->nose->color . "<br/>\n"; // Red
