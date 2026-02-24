<?php
require_once 'Forest.php';

$forest = new Forest();

$forest->plantTree(1, 2, "Pine", "Green", "PineTexture");
$forest->plantTree(5, 7, "Oak", "Green", "OakTexture");
$forest->plantTree(6, 9, "Pine", "Green", "PineTexture");

echo $forest->render();