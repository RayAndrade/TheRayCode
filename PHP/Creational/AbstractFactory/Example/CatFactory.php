<?php

namespace TheRayCode\Factory;

class CatFactory extends AbstractFactory
{

    public function createPet()
    {
        return new Cat();
    }
}