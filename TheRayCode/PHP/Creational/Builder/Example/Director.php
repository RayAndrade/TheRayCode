<?php
include_once 'Builder.php';
class Director
{
    private Builder $builder;

    // Set the builder to use
    public function setBuilder(Builder $builder): void
    {
        $this->builder = $builder;
    }

    // Construct the product step by step
    public function construct(): void
    {
        $this->builder->buildPartA();
        $this->builder->buildPartB();
    }

}