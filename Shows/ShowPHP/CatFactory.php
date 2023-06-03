<?php

namespace TheRayCode\AbstractFactory;
require_once('PetFactory.php');
require_once('Cat.php');


class CatFactory
{
    public function createDot() {
        throw new Exception("Hey! This is a DOG factory, not a cat factory!");
    }

    public function createCat() {
        return new Cat();
    }

    public function createBird() {
        throw new Exception("Birds? We don't do birds here. Only dogs. Woof!");
    }
}