<?php

require_once 'ConcreteHandlerA.php';
require_once 'ConcreteHandlerB.php';
require_once 'ConcreteHandlerC.php';

$a = new ConcreteHandlerA();
$b = new ConcreteHandlerB();
$c = new ConcreteHandlerC();

$requests = ['A', 'B', 'C', 'D'];
foreach ($requests as $request) {
    echo "Client: Who can handle '$request'?\n";
    $result = $a->handle($request);

    if ($result) {
        echo "$result\n";
    } else {
        echo "No handler could handle the request.\n";
    }

    echo str_repeat('-', 40) . "\n";
}