<?php
require_once 'ConcreteComponent.php';
require_once 'ConcreteDecoratorA.php';
require_once 'ConcreteDecoratorB.php';

// Create a concrete component
$component = new ConcreteComponent();

// Decorate it with ConcreteDecoratorA
$decoratorA = new ConcreteDecoratorA($component);

// Further decorate with ConcreteDecoratorB
$decoratorB = new ConcreteDecoratorB($decoratorA);

// Display the final operation
echo $decoratorB->operation();