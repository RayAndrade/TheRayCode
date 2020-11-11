<?php


namespace TheRayCode\Builder;


class ConcreteBuilder implements Builder
{
    private $product;

    public function __construct()
    {
        $this->reset();
    }
    public function reset(): void
    {
        $this->product = new Product;
    }
    public function producePartA(): void
    {
        $this->product->parts[] = "PartA";
    }

    public function producePartB(): void
    {
        $this->product->parts[] = "PartB";
    }

    public function producePartC(): void
    {
        $this->product->parts[] = "PartC";
    }

    public function getProduct(): Product
    {
        $result = $this->product;
        $this->reset();

        return $result;
    }
}