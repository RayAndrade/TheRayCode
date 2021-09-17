<?php

//echo "hello;


include "ConcreteFactory2.php";
include "ConcreteFactory1.php";

$factory1 = new ConcreteFactory2();
$prod1 = $factory1->CreateProduct1();
$prod1->Display();
$prod2 = $factory1->CreateProduct2();
$prod2->Display();

$factory2 = new ConcreteFactory2();
$prod1 = $factory2->CreateProduct1();
$prod1->Display();
$prod2 = $factory2->CreateProduct2();
$prod2->Display();