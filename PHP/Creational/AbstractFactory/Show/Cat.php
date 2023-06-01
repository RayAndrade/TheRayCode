<?php

namespace TheRayCode\Factory;

class Cat
{
    private string $species;

    public function __construct(string $species)
    {
        $this->species = $species;
    }

    public function makeSound(): string
    {
        return "Meow!";
    }
    public function getSpecies(): string
    {
        return $this->species;
    }
}