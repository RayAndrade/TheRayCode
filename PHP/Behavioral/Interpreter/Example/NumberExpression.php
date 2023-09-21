<?php

include_once 'Expression.php';
class NumberExpression implements Expression
{
    private $number;

    public function __construct($number) {
        $this->number = $number;
    }

    public function interpret($context)
    {
        return $this->number;
    }
}