<?php

namespace TheRayCode\AbstractFactory;

class BirdFactory extends AbstractFactory
{

    public function createPet()
    {
        return new Bird();
    }
}