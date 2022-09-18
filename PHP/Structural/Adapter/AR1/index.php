<?php


include_once ('Adaptee.php');
include_once ('Adapter.php');

/**
* The client code supports all classes that follow the Target interface.
*/


function clientCode(Target $target)
{
echo $target->request();
}


echo "Client: I can work just fine with the Target objects:<br/>";
$target = new Target;

clientCode($target);

echo "<br/><br/>";

$adaptee = new Adaptee;
echo "Client: The Adaptee class has a weird interface. See, I don't understand it:<br/>";
echo "Adaptee: " . $adaptee->specificRequest();
echo "<br/><br/>";

echo "Client: But I can work with it via the Adapter:<br/>";
$adapter = new Adapter($adaptee);
clientCode($adapter);

echo "<br/><br/>";
echo "The Ray Code is AWESOME!!!";