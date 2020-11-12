<?php

include_once ('Mediator.php');
include_once ('ConcreteMediator.php');
include_once ('BaseComponent.php');
include_once ('Component1.php');
include_once ('Component2.php');
/**
 * Concrete Components implement various functionality. They don't depend on
 * other components. They also don't depend on any concrete mediator classes.
 */


/**
 * The client code.
 */
$c1 = new Component1;
$c2 = new Component2;
$mediator = new ConcreteMediator($c1, $c2);

echo "Client triggers operation A.<br/>";
$c1->doA();

echo "<br/>";
echo "Client triggers operation D.<br/>";
$c2->doD();