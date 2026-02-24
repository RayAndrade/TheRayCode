<?php

include_once 'ColorExpression.php';
class PrimaryColorExpression implements ColorExpression
{
    private $color;

    public function __construct($color) {
        $this->color = $color;
    }

    public function interpret()
    {
        return $this->color;
    }
}