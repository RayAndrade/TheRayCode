<?php

namespace TheRayCode\Factory;

class PetFactory extends AbstractPetFactory
{
    public function createDog(): Dog
    {
        $species = $this->generateRandomSpecies();
        return new Dog($species);
    }

    public function createCat(): Cat
    {
        $species = $this->generateRandomSpecies();
        return new Cat($species);
    }

    private function generateRandomSpecies(): string
    {
        $speciesList = ['Labrador', 'Poodle', 'German Shepherd'];
        $randomIndex = array_rand($speciesList);
        return $speciesList[$randomIndex];
    }
}