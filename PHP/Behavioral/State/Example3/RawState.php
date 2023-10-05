<?php
include_once 'FoodState.php';
class RawState implements FoodState
{

    public function cook(FoodItem $item)
    {
        echo "Cooked to perfection!<br>";
        $item->setState(new CookedState());
    }

    public function overcook(FoodItem $item)
    {
        echo "Oops! Overcooked!<br>";
        $item->setState(new OvercookedState());
    }
}