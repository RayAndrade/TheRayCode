<?php

interface DiscountStrategy
{
    public function applyDiscount($totalAmount);
}