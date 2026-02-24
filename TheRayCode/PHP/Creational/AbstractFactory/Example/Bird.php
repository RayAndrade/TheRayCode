<?php

namespace TheRayCode\Factory;

class Bird extends AbstractPet
{

    public function makeSound()
    {
        return "Tweet tweet! I'm bird-brained!";
    }
}