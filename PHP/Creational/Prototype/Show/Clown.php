<?php

namespace TheRayCode\Prototype;

class Clown
{
    public $name;
    public $chatchPrase;

    public function __construct($name, Phrase $phrase) {
        $this->name = $name;
        $this->chatchPrase = $phrase;
    }

    public function deepClone() {
        $cloned = clone $this;
        $cloned->chatchPrase = clone $this->chatchPrase;  // clone inner object
        return $cloned;
    }

}