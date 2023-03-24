<?php

namespace Show;
include_once "AnimalFactory.php";
class DogFactory implements AnimalFactory
{

    public function createAnimal()
    {
        return new Dog();
    }
}