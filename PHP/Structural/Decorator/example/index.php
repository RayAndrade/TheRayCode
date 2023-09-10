<?php

include_once ('Component.php');
include_once ('ConcreteComponent.php');
include_once ('Decorator.php');
include_once ('ConcreteDecoratorA.php');
include_once ('ConcreteDecoratorB.php');

function clientCode(Component $component)
{
    // ...

    echo "RESULT: " . $component->operation();

    // ...
}

$simple = new ConcreteComponent;
echo "Client: I've got a simple component:<br/>";
clientCode($simple);
echo "<br/><br/>";

$decorator1 = new ConcreteDecoratorA($simple);
$decorator2 = new ConcreteDecoratorB($decorator1);
echo "Client: Now I've got a decorated component:<br/>";
clientCode($decorator2);

$decorator1 = new ConcreteDecoratorA($simple);
$decorator2 = new ConcreteDecoratorB($decorator1);
echo "Client: Now I've got a decorated component:<br/>";
clientCode($decorator2);