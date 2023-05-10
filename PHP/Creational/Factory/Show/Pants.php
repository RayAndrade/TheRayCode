<?php

namespace TheRayCode\Factory;

class Pants implements ProductInterface
{

    public function getName(): string
    {
        return 'Pants';
    }

    public function getPrice(): float
    {
        return 35.99;
    }
}