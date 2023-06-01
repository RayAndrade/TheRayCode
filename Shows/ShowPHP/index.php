<?php

namespace TheRayCode\Factory;
require_once 'AbstractPetFactory.php';
require_once 'Dog.php';
require_once 'Cat.php';
require_once 'PetFactory.php';

class Demo {
    public static function run() {
        $dogFactory = new Dog();
        $catFactory = new Cat();

        $dog = $dogFactory->createDog();
        echo $dog->bark() . "<br/>\n";

        $cat = $catFactory->createCat();
        echo $cat->meow() . "<br/>\n";
    }
}

echo "The Ray Code is AWESOME!!!";

