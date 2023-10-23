<?php

class CatFactory extends AbstractFactory
{

    public function createPet()
    {
        return new Cat();
    }
}