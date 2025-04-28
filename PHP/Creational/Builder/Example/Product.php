<?php

class Product
{
    private array $parts = [];

    // Add a part to the product
    public function addPart(string $part): void
    {
        $this->parts[] = $part;
    }

    // Show the parts that have been added to the product
    public function show(): void
    {
        echo "Product Parts:\n";
        foreach ($this->parts as $part) {
            echo "- $part\n";
        }
    }

}