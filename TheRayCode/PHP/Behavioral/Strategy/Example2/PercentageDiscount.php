<?php
include_once 'DiscountStrategy.php';

class PercentageDiscount  implements DiscountStrategy
{
    private $percentage;

    public function __construct($percentage) {
        $this->percentage = $percentage;
    }
    public function applyDiscount($totalAmount)
    {
        return $totalAmount - ($totalAmount * ($this->percentage / 100));
    }
}