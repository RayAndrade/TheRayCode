<?php
require_once "Unicorn.php";

$unicorn1 = Unicorn::getInstance("Starlight");
$unicorn2 = Unicorn::getInstance("Moonbeam");

echo "First Unicorn's name: " . $unicorn1->getName() . "<br>";
echo "Second Unicorn's name: " . $unicorn2->getName() . "<br>";

if ($unicorn1 === $unicorn2) {
    echo "Both unicorns are the same unicorn!";
} else {
    echo "They are different unicorns.";
}