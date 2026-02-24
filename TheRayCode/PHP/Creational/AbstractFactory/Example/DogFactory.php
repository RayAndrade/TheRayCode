<?php

namespace TheRayCode\Factory;

class DogFactory extends AbstractFactory
{

    public function createPet()
    {
        return new Dog();
    }
}