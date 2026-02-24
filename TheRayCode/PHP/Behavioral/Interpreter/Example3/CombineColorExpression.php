<?php
include_once 'ColorExpression.php';
class CombineColorExpression implements ColorExpression
{
    private $color1;
    private $color2;

    public function __construct(ColorExpression $color1, ColorExpression $color2) {
        $this->color1 = $color1;
        $this->color2 = $color2;
    }
    public function interpret()
    {
        if ($this->color1->interpret() == "Red" && $this->color2->interpret() == "Blue") {
            return "Purple";
        }
        if ($this->color1->interpret() == "Red" && $this->color2->interpret() == "Yellow") {
            return "Orange";
        }
        if ($this->color1->interpret() == "Blue" && $this->color2->interpret() == "Yellow") {
            return "Green";
        }
        return "Unknown combination";
    }
}