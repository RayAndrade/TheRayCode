<?php

namespace TheRayCode\Factory;

class Cat extends AbstractPet
{

    public function makeSound()
    {
        return "Meow! Feed me, hooman!";
    }
}