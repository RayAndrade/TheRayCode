<?php

namespace TheRayCode\AbstractFactory;

class CatFactory extends AbstractFactory
{

    public function createPet()
    {
        return new Bird();
    }
}