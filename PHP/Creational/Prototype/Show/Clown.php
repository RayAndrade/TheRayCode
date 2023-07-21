<?php

namespace TheRayCode\Prototype;

class Clown
{
    public $name;
    public $nose;

    public function __construct($name, Nose $nose) {
        $this->name = $name;
        $this->nose = $nose;
    }

    // Shallow clone
    public function __clone() {
        // When you clone the Clown object, PHP does a shallow copy by default.
    }

    // Deep clone
    public function deepClone() {
        $cloned = clone $this;
        $cloned->nose = clone $this->nose;  // clone inner object
        return $cloned;
    }
}