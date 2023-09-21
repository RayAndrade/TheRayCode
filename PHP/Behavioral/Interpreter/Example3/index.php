<?php

include_once 'ColorExpression.php';
include_once 'PrimaryColorExpression.php';
include_once 'CombineColorExpression.php';

$red = new PrimaryColorExpression("Red");
$blue = new PrimaryColorExpression("Blue");
$yellow = new PrimaryColorExpression("Yellow");

$combineRedBlue = new CombineColorExpression($red, $blue);
$combineRedYellow = new CombineColorExpression($red, $yellow);
$combineBlueYellow = new CombineColorExpression($blue, $yellow);

echo "Red + Blue = " . $combineRedBlue->interpret() . "\n";  // Should output Purple
echo "Red + Yellow = " . $combineRedYellow->interpret() . "\n";  // Should output Orange
echo "Blue + Yellow = " . $combineBlueYellow->interpret();  // Should output Green
?>
