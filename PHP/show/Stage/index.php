<?php
include_once ('Mediator.php');
include_once('SolidMediator.php');
include_once ('BaseComponent.php');
include_once('ComponentA.php');
include_once('ComponentB.php');

$cA = new ComponentA;
$cB = new ComponentB;
$mediator = new SolidMediator($cA, $cB);

echo "Client triggers operation A.<br/>";
$cA->doA();

echo "<br/>";
echo "Client triggers operation B.<br/>";
$cB->doD();