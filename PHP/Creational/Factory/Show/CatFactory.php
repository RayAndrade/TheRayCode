<?php

namespace Show;
include_once "AnimalFactory.php";
class CatFactory implements AnimalFactory
{

    public function createAnimal()
    {
        return new Cat();
    }
}