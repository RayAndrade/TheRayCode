<?php

class Order
{
    private $totalAmount;
    private $discountStrategy;

    public function __construct($totalAmount, DiscountStrategy $discountStrategy) {
        $this->totalAmount = $totalAmount;
        $this->discountStrategy = $discountStrategy;
    }

    public function getFinalAmount() {
        return $this->discountStrategy->applyDiscount($this->totalAmount);
    }
}