<?php

namespace TheRayCode\AbstractFactory;

class Bird extends AbstractPet
{

    public function makeSound()
    {
        return "Tweet tweet! I'm bird-brained!";
    }
}