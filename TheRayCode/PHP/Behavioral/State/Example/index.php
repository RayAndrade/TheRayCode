<?php
include_once ('Context.php');
include_once ('State.php');
include_once ('ConcreteStateA.php');
include_once ('ConcreteStateB.php');

/**
 * The client code.
 */
$context = new Context(new ConcreteStateA);
$context->request1();
$context->request2();
