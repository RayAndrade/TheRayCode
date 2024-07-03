<?php
require_once 'ConcreteFactory1.php';
require_once 'ConcreteFactory2.php';
require_once 'Client.php';

// Using Concrete Factory 1
$factory1 = new ConcreteFactory1();
$client1 = new Client($factory1);
echo "Client with ConcreteFactory1:\n";
$client1->run();

echo "\n";

// Using Concrete Factory 2
$factory2 = new ConcreteFactory2();
$client2 = new Client($factory2);
echo "Client with ConcreteFactory2:\n";
$client2->run();

