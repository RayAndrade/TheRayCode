<?php

namespace TheRayCode\Factory;

class Shirt implements ProductInterface
{

    public function getName(): string
    {
        return 'Shirt';
    }

    public function getPrice(): float
    {
        return 25.99;
    }
}