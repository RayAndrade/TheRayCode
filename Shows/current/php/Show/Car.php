<?php

namespace TheRayCode\Prototype;

class Car
{
    public $engine;

    public function __construct($engine) {
        $this->engine = $engine;
    }

    public function __clone() {
        $this->engine = clone $this->engine;
    }
}

class Engine {
    public $type;
}