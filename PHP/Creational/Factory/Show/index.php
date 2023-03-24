<?php

namespace Show;

include_once "DogFactory.php";
include_once "CatFactory.php";

include_once "Dog.php";
include_once "Cat.php";

// Create a dog using the DogFactory
$dogFactory = new DogFactory();
$dog = $dogFactory->createAnimal();
$dog->speak(); // Output: Woof!

// Create a cat using the CatFactory
$catFactory = new CatFactory();
$cat = $catFactory->createAnimal();
$cat->speak(); // Output: Meow!
