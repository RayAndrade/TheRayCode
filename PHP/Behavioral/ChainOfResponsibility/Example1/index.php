<?php
// index.php

require_once 'ConcreteHandlerA.php';
require_once 'ConcreteHandlerB.php';
require_once 'ConcreteHandlerC.php';

// Create handler instances
$a = new ConcreteHandlerA();
$b = new ConcreteHandlerB();
$c = new ConcreteHandlerC();

// Link the chain: A ➡️ B ➡️ C
$a->setNext($b)->setNext($c);

// Test various requests
$requests = ["A", "B", "C", "D"];

foreach ($requests as $req) {
    echo "Client: Sending request '$req'\n";
    echo $a->handle($req) . "\n";
    echo str_repeat("-", 40) . "\n";
}
