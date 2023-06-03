<?php

namespace TheRayCode\AbstractFactory;
require_once 'AbstractFactory.php';
require_once 'AbstractPet.php';
require_once 'Dog.php';
require_once 'Cat.php';
require_once 'Bird.php';
require_once 'DogFactory.php';
require_once 'CatFactory.php';
require_once 'BirdFactory.php';

function petSounds(AbstractFactory $factory) {
    $pet = $factory->createPet();
    echo $pet->makeSound() . ",<br/>\n";
}

petSounds(new DogFactory());
petSounds(new CatFactory());
petSounds(new BirdFactory());

echo "The Ray Code is AWESOME!!!";

