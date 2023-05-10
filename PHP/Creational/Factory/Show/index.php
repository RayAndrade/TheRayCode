<?php
namespace TheRayCode\Factory;

require_once 'ProductInterface.php';
require_once 'Shirt.php';
require_once 'Pants.php';
require_once 'ProductFactory.php';


// Create a shirt and print its name and price
$shirt = ProductFactory::createProduct('shirt');
echo 'Product: ' . $shirt->getName() . ', Price: $' . number_format($shirt->getPrice(), 2) . '<br>';

// Create pants and print their name and price
$pants = ProductFactory::createProduct('pants');
echo 'Product: ' . $pants->getName() . ', Price: $' . number_format($pants->getPrice(), 2) . '<br>';

echo "The Ray Code is AWESOME!!!";
