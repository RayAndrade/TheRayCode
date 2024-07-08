<?php

require_once 'ConcreteFactory1.php';
require_once 'ConcreteFactory2.php';
require_once 'Client.php';

function main() {
    echo "Testing with ConcreteFactory1:\n";
    $factory1 = new ConcreteFactory1();
    $client1 = new Client($factory1);
    $client1->run();

    echo "\nTesting with ConcreteFactory2:\n";
    $factory2 = new ConcreteFactory2();
    $client2 = new Client($factory2);
    $client2->run();
}

main();