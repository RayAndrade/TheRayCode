<?php
require_once 'TreeType.php';
require_once 'TreeFactory.php';
require_once 'Tree.php';
require_once 'Forest.php';

$forest = new Forest();

// Planting trees with shared TreeType objects
$forest->plantTree(1, 2, "Cherry Blossom", "Pink", "CherryTexture");
$forest->plantTree(5, 3, "Maple", "Red", "MapleTexture");
$forest->plantTree(10, 6, "Cherry Blossom", "Pink", "CherryTexture");

// Drawing the forest with trees
$forest->draw("Canvas1");