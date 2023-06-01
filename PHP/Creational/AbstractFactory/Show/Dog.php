<?php

namespace TheRayCode\Factory;

class Dog
{
    private string $species;

    public function __construct(string $species)
    {
        $this->species = $species;
    }

    public function makeSound(): string
    {
        return "Woof!";
    }

    public function getSpecies(): string
    {
        return $this->species;
    }
}