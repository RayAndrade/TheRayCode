<?php

include 'Component.php';
include 'ConcreteComponent.php';
include 'Decorator.php';
include 'MilkDecorator.php';
include 'SugarDecorator.php';

$coffee = new ConcreteComponent();
echo "Description: " . $coffee->operation() . "<br>";

$milkCoffee = new MilkDecorator($coffee);
echo "Description: " . $milkCoffee->operation() . "<br>";

$sugarMilkCoffee = new SugarDecorator($milkCoffee);
echo "Description: " . $sugarMilkCoffee->operation() . "<br>";