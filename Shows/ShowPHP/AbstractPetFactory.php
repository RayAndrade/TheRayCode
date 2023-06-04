<?php

namespace TheRayCode\AbstractFactory;

abstract class  AbstractPetFactory
{
    abstract public function createCat(): Cat;
    abstract public function createDog(): Dog;
}