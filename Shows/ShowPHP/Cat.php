<?php

namespace TheRayCode\AbstractFactory;

class Cat extends AbstractPet
{

    public function makeSound()
    {
        return "Meow! Feed me, hooman!";
    }
}