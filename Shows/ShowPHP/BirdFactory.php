<?php

namespace TheRayCode\AbstractFactory;

require_once('PetFactory.php');
require_once('Bird.php');
class BirdFactory extends PetFactory
{
    public function createBird() {
        return new Bird();
    }

    public function createDog() {
        throw new Exception("This isn't a dog house. It's a BIRD house!");
    }

    public function createCat() {
        throw new Exception("Cats? Too risky for our feathered friends. Strictly no cats here!");
    }
}