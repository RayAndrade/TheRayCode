<?php

namespace TheRayCode\AbstractFactory;

class Dog extends AbstractPet
{

    public function makeSound()
    {
        return "Woof! I'm a good boy!";
    }
}