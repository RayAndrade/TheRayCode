<?php

include_once 'DessertFactory.php';

$dessertType = 'cake'; // You can change this to 'icecream' for testing purposes.

$dessert = DessertFactory::createDessert($dessertType);

if ($dessert) {
    echo $dessert->eat();
} else {
    echo "Invalid dessert type!";
}
