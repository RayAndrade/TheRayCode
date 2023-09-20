<?php

class Number extends Expression
{
    private $number;

    public function __construct($number) {
        $this->number = $number;
    }
    public function interpret(array $context)
    {
        return $this->number;
    }
}