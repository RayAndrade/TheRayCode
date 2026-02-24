<?php

include_once ('Mediator.php');
include_once('SolidMediator.php');
include_once ('BaseComponent.php');
include_once('ComponentA.php');
include_once('ComponentB.php');
/**
 * Concrete Components implement various functionality. They don't depend on
 * other components. They also don't depend on any concrete mediator classes.
 */


/**
 * The client code.
 */
$cA = new ComponentA;
$cB = new ComponentB;
$mediator = new SolidMediator($cA, $cB);

echo "Client triggers operation A.<br/>";
$cA->doA();

echo "<br/>";
echo "Client triggers operation B.<br/>";
$cB->doD();