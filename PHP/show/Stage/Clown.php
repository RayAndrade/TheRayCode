<?php

class Clown
{
    public $name;
    public $chatchPrase;

    public function __construct($name, Phrase $phrase) {
        $this->name = $name;
        $this->chatchPrase = $phrase;
    }
}