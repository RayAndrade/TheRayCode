<?php

include_once 'Expression.php';
include_once 'NumberExpression.php';
include_once 'AddExpression.php';
include_once 'SubtractExpression.php';

$context = "";  // This can be used to provide any contextual data necessary for interpretation.

// Constructing an expression tree: 5 + 3 - 2
$numberFive = new NumberExpression(5);
$numberThree = new NumberExpression(3);
$addition = new AddExpression($numberFive, $numberThree);
$numberTwo = new NumberExpression(2);
$resultExpression = new SubtractExpression($addition, $numberTwo);

// Interpreting the expression
$result = $resultExpression->interpret($context);

echo "Result of 5 + 3 - 2 = $result";  // This should output 6


