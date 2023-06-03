<?php

namespace TheRayCode\AbstractFactory;

require_once('PetFactory.php');
require_once('Dog.php');
class DogFactory extends PetFactory
{

    public function createDog() {
        return new Dog();
    }

    public function createCat() {
        throw new Exception("Hey! This is a DOG factory, not a cat factory!");
    }

    public function createBird() {
        throw new Exception("Birds? We don't do birds here. Only dogs. Woof!");
    }
}