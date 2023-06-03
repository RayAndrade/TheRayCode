<?php

namespace TheRayCode\AbstractFactory;

abstract class PetFactory
{
    abstract public function createDog();
    abstract public function createCat();
    abstract public function createBird();
}