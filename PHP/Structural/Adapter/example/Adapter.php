<?php

namespace TheRayCode\Adapter;

class Adapter implements Target

{
    private $adaptee;

    public function __construct(Adaptee $adaptee)
    {
        $this->adaptee = $adaptee;
    }

    public function request(): string
    {
        return "Adapter: " . $this->adaptee->specificRequest();
    }
}