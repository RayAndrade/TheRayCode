<?php

include_once 'Number.php';
include_once 'Add.php';
include_once 'Subtract.php';

// Create expressions
$addition = new Add(new Number(3), new Number(5));
$subtraction = new Subtract(new Number(8), new Number(5));

// Interpret the expressions
echo "Result of addition: " . $addition->interpret([]) . PHP_EOL;
echo "Result of subtraction: " . $subtraction->interpret([]) . PHP_EOL;