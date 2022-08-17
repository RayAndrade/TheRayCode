<?php

namespace RefactoringGuru\Adapter\Conceptual;

/**
 * The Adapter makes the Adaptee's interface compatible with the Target's
 * interface.
 */
include_once ("Target.php");

class Adapter extends Target
{
    private $adaptee;

    public function __construct(Adaptee $adaptee)
    {
        $this->adaptee = $adaptee;
    }

    public function request(): string
    {
        return "Adapter: (TRANSLATED) " . strrev($this->adaptee->specificRequest());
    }
}