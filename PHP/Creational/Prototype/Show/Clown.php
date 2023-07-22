<?php

namespace TheRayCode\Prototype;

class Clown
{
    public $name;
    public $chatchPrase;

    public function __construct($name, Phrase $prase) {
        $this->name = $name;
        $this->chatchPrase = $prase;
    }

    // Shallow clone
    public function __clone() {
        // When you clone the Clown object, PHP does a shallow copy by default.
    }

    // Deep clone
    public function deepClone() {
        $cloned = clone $this;
        $cloned->chatchPrase = clone $this->chatchPrase;  // clone inner object
        return $cloned;
    }
}