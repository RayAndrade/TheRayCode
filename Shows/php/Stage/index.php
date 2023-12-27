<?php

require_once('Leaf.php');
require_once('Composite.php');

// Create leaves
$leaf1 = new Leaf("1");
$leaf2 = new Leaf("2");

// Create composite
$composite = new Composite("Comp1");
$composite->add($leaf1);
$composite->add($leaf2);

// Add leaf to composite
$leaf3 = new Leaf("3");
$composite->add($leaf3);

echo $composite->operation();

// Remove a leaf
$composite->remove($leaf2);

echo "<br/>After removing leaf 2:<br/>";
echo $composite->operation();

