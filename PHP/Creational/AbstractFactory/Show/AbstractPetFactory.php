<?php

namespace TheRayCode\Factory;

abstract class  AbstractPetFactory
{
    abstract public function createCat(): Cat;
    abstract public function createDog(): Dog;
}