<?php

namespace TheRayCode\AbstractFactory;

class DogFactory extends AbstractFactory
{

    public function createPet()
    {
        return new Dog();
    }
}