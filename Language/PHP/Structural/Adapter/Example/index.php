<?php
require_once 'Target.php';
require_once 'Adaptee.php';
require_once 'Adapter.php';

function clientCode(Target $target)
{
    echo $target->request();
}

echo "Client code with Adaptee:<br/>\n";
$adaptee = new Adaptee();
echo $adaptee->specificRequest();
echo "<br/>\n<br/>\n";

echo "Client code with Adapter:<br/>\n";
$adapter = new Adapter($adaptee);
clientCode($adapter);