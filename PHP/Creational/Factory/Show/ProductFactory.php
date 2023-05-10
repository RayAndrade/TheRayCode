<?php

namespace TheRayCode\Factory;

class ProductFactory
{
    public static function createProduct(string $type): ProductInterface {
        switch ($type) {
            case 'shirt':
                return new Shirt();
            case 'pants':
                return new Pants();
            default:
                throw new InvalidArgumentException('Invalid product type.');
        }
    }
}