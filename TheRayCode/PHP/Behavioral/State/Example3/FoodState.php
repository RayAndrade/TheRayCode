<?php

interface FoodState
{
    public function cook(FoodItem $item);
    public function overcook(FoodItem $item);
}