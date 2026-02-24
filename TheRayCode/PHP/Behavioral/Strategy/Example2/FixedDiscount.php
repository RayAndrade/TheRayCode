<?php
include_once 'DiscountStrategy.php';
class FixedDiscount implements DiscountStrategy
{
    private $discountAmount;

    public function __construct($discountAmount) {
        $this->discountAmount = $discountAmount;
    }
    public function applyDiscount($totalAmount)
    {
        return $totalAmount - $this->discountAmount;
    }
}