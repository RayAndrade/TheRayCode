<?php

include_once 'Product.php';
include_once 'Builder.php';
class ConcreteBuilder implements Builder
{

    private Product $product;

    public function __construct()
    {
        $this->product = new Product();
    }
    public function buildPartA(): void
    {
        $this->product->addPart("PartA");
    }

    public function buildPartB(): void
    {
        $this->product->addPart("PartB");
    }

    public function getResult(): Product
    {
        return $this->product;
    }
}