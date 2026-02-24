<?php

include_once "AbstractCreature.php";

class Fly extends AbstractCreature
{
    public function __construct() {
        $this->name = "fly";
        $this->reason = "I don't know why she swallowed the fly. Perhaps she'll die.";
    }
}