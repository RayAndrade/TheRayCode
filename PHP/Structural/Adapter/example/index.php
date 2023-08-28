<?php
require_once 'Target.php';
require_once 'Adaptee.php';
require_once 'Adapter.php';

use TheRayCode\Adapter\Adapter;

// The client code can work with any class that follows the Target interface.
function clientCode(Target $target)
{
    echo $target->request();
}

echo "Client code with Adaptee:\n";
$adaptee = new Adaptee();
echo $adaptee->specificRequest();
echo "\n\n";

echo "Client code with Adapter:\n";
$adapter = new Adapter($adaptee);
clientCode($adapter);