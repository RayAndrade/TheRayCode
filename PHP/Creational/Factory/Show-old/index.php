<?php

namespace TheRayCode\Factory;

require_once 'AbstractPetFactory.php';
require_once 'DogFactory.php';
require_once 'CatFactory.php';


class Demo {
    public static function run() {
        $dogFactory = new DogFactory();
        $catFactory = new CatFactory();

        $dog = $dogFactory->createDog();
        echo $dog->bark() . "<br/>";

        $cat = $catFactory->createCat();
        echo $cat->meow() . "<br/>";
    }
}

Demo::run();
