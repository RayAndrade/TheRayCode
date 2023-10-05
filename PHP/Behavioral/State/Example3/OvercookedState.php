<?php
include_once 'FoodState.php';
class OvercookedState implements FoodState
{

    public function cook(FoodItem $item)
    {
        // Already overcooked
        echo "It can't be cooked anymore. It's burnt!<br>";
    }

    public function overcook(FoodItem $item)
    {
        // Already overcooked
        echo "It's already overcooked!<br>";
    }
}