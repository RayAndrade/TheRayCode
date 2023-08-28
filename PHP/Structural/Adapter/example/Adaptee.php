<?php

namespace TheRayCode\Adapter;

class Adaptee
{
    public function specificRequest(): string
    {
        return "Specific request from Adaptee.";
    }
}