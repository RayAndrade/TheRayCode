<?php

namespace TheRayCode\Builder;

class SandwichBuilder
{
    private $bread;
    private $meat;
    private $cheese;
    private $veggies;

    function setBread($bread) {
        $this->bread = $bread;
        return $this;
    }

    function setMeat($meat) {
        $this->meat = $meat;
        return $this;
    }

    function setCheese($cheese) {
        $this->cheese = $cheese;
        return $this;
    }

    function setVeggies($veggies) {
        $this->veggies = $veggies;
        return $this;
    }

    function build() {
        return new Sandwich($this->bread, $this->meat, $this->cheese, $this->veggies);
    }
}