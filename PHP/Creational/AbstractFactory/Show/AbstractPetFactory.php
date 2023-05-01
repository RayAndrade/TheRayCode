<?php

namespace TheRayCode\Factory;

interface AbstractPetFactory
{
    public function createCat(): Cat;
    public function createDog(): Dog;
}