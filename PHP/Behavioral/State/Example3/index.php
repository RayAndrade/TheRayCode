<?php
include_once 'FoodItem.php';

$steak = new FoodItem();

$steak->cook();     // Cooked to perfection!
$steak->cook();     // Oops! Overcooked!
$steak->overcook(); // It's already overcooked!