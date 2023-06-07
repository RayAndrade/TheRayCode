<?php

namespace TheRayCode\Builder;

include 'Sandwich.php';
include 'SandwichBuilder.php';

$sandwichBuilder = new SandwichBuilder();

$sandwich = $sandwichBuilder->setBread("whole grain")
    ->setMeat("turkey")
    ->setCheese("swiss")
    ->setVeggies("lettuce, tomato, onions")
    ->build();

echo $sandwich;

echo "The Ray Code is AWESOME!!!";

