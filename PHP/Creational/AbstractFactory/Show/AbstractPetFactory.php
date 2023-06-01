<?php

namespace TheRayCode\Factory;

abstract class AbstractPetFactory
{
    abstract public function createDog(): Dog;
    abstract public function createCat(): Cat;
}