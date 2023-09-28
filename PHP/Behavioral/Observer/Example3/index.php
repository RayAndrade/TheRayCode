<?php
include 'Cat.php';
include 'Mouse.php';

$cat = new Cat();

$mouse1 = new Mouse("Jerry");
$mouse2 = new Mouse("Mickey");
$mouse3 = new Mouse("Stuart");

$cat->addObserver($mouse1);
$cat->addObserver($mouse2);
$cat->addObserver($mouse3);

echo "Cat goes away...<br>";
$cat->goAway();

echo "<br>Cat returns...<br>";
$cat->returnHome();

