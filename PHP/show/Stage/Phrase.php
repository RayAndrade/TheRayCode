<?php

class Phrase
{
    public $phrase;

    public function __construct($phrase) {
        $this->phrase = $phrase;
    }

    public function deepClone() {
        $cloned = clone $this;
        $cloned->chatchPrase = clone $this->chatchPrase;  // clone inner object
        return $cloned;
    }

}