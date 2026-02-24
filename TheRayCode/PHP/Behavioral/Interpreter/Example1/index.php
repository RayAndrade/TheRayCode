<?php
// index.php

require_once 'TerminalExpression.php';
require_once 'OrExpression.php';
require_once 'AndExpression.php';

// Rule: "Ray or Andrade"
$ray = new TerminalExpression("Ray");
$andrade = new TerminalExpression("Andrade");
$rayOrAndrade = new OrExpression($ray, $andrade);

// Rule: "Ray AND Developer"
$developer = new TerminalExpression("Developer");
$rayAndDeveloper = new AndExpression($ray, $developer);

// Test interpretation
echo "Test 1: 'Ray Andrade' matches Ray OR Andrade? ";
echo $rayOrAndrade->interpret("Ray Andrade") ? "Yes\n" : "No\n";

echo "Test 2: 'Ray is a Developer' matches Ray AND Developer? ";
echo $rayAndDeveloper->interpret("Ray is a Developer") ? "Yes\n" : "No\n";

echo "Test 3: 'Andrade is a Developer' matches Ray AND Developer? ";
echo $rayAndDeveloper->interpret("Andrade is a Developer") ? "Yes\n" : "No\n";
