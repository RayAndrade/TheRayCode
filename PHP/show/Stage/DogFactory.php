<?php

class DogFactory extends AbstractFactory
{

    public function createPet()
    {
        return new Dog();
    }
}