<?php
include_once ('Component.php');
include_once ('ConcreteComponent.php');
include_once ('Decorator.php');
include_once ('ConcreteDecoratorA.php');
include_once ('ConcreteDecoratorB.php');

/**
 * The client code works with all objects using the Component interface. This
 * way it can stay independent of the concrete classes of components it works
 * with.
 */
function clientCode(Component $component)
{
    // ...

    echo "RESULT: " . $component->operation();

    // ...
}

/**
 * This way the client code can support both simple components...
 */
$simple = new ConcreteComponent;
echo "Client: I've got a simple component:<br/>";
clientCode($simple);
echo "<br/><br/>";

/**
 * ...as well as decorated ones.
 *
 * Note how decorators can wrap not only simple components but the other
 * decorators as well.
 */
$decorator1 = new ConcreteDecoratorA($simple);
$decorator2 = new ConcreteDecoratorB($decorator1);
echo "Client: Now I've got a decorated component:<br/>";
clientCode($decorator2);
