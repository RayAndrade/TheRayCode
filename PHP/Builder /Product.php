<?php


namespace TheRayCode\Builder;


class Product
{
    public $parts = [];

    public function listParts(): void
    {
        echo "Product parts: " . implode(', ', $this->parts) . "<br/><br/>";
    }
}