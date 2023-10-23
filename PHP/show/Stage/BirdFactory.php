<?php

class BirdFactory extends AbstractFactory
{

    public function createPet()
    {
        return new Bird();
    }
}