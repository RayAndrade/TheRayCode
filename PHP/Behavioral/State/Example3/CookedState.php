<?php
include_once 'FoodState.php';
class CookedState implements FoodState
{

    public function cook(FoodItem $item)
    {
        echo "Oops! Overcooked!<br>";
        $item->setState(new OvercookedState());
    }

    public function overcook(FoodItem $item)
    {
        // Already overcooked
        echo "It's already overcooked!<br>";
    }
}