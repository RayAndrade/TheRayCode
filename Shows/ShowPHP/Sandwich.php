<?php

namespace TheRayCode\Builder;

class Sandwich
{
    private $bread;
    private $meat;
    private $cheese;
    private $veggies;

    function __construct($bread, $meat, $cheese, $veggies) {
        $this->bread = $bread;
        $this->meat = $meat;
        $this->cheese = $cheese;
        $this->veggies = $veggies;
    }

    function __toString() {
        return $this->bread . ", " . $this->meat . ", " . $this->cheese . ", " . $this->veggies;
    }
}