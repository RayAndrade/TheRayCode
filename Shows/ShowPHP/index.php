<?php

namespace TheRayCode\AbstractFactory;

require_once('DogFactory.php');
require_once('CatFactory.php');
require_once('BirdFactory.php');

$dogFactory = new DogFactory();
$catFactory = new CatFactory();
$birdFactory = new BirdFactory();

$dog = $dogFactory->createDog();
$cat = $catFactory->createCat();
$bird = $birdFactory->createBird();

$dog->bark();
$cat->meow();
$bird->tweet();

echo "The Ray Code is AWESOME!!!";

