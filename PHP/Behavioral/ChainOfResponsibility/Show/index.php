<?php

namespace TheRayCode\ChainOfResponsibility;

include_once ('ConcreteHandler1.php');
include_once ('ConcreteHandler2.php');

// Usage example
$handler1 = new ConcreteHandler1();
$handler2 = new ConcreteHandler2();

$handler1->setNext($handler2);

$handler1->handleRequest('A'); // Output: ConcreteHandler1 handles request: A
$handler1->handleRequest('B'); // Output: ConcreteHandler2 handles request: B
$handler1->handleRequest('C'); // No output

