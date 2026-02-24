<?php
include_once 'DiscountStrategy.php';
include_once 'FixedDiscount.php';
include_once 'PercentageDiscount.php';
include_once 'Order.php';

// Create orders with different discount strategies
$orderWithFixedDiscount = new Order(1000, new FixedDiscount(200));
$orderWithPercentageDiscount = new Order(1000, new PercentageDiscount(10));

echo "Order with Fixed Discount: " . $orderWithFixedDiscount->getFinalAmount() . "<br>";
echo "Order with Percentage Discount: " . $orderWithPercentageDiscount->getFinalAmount();
