<?php

namespace TheRayCode\Factory;

interface ProductInterface
{
    public function getName(): string;
    public function getPrice(): float;
}