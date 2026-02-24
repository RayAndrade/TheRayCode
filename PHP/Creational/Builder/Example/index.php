<?php

include_once 'Director.php';
include_once 'ConcreteBuilder.php';

// Create Director and Builder objects
$director = new Director();
$builder = new ConcreteBuilder();

// Tell the Director which builder to use
$director->setBuilder($builder);

// Director constructs the product
$director->construct();

// Get the final product from the builder
$product = $builder->getResult();

// Display the built product
$product->show();