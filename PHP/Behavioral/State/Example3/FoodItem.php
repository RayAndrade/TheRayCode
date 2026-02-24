<?php
include_once 'RawState.php';
include_once 'CookedState.php';
include_once 'OvercookedState.php';

class FoodItem
{
    private $state;

    public function __construct() {
        $this->state = new RawState();
    }

    public function cook() {
        $this->state->cook($this);
    }

    public function overcook() {
        $this->state->overcook($this);
    }

    public function setState(FoodState $state) {
        $this->state = $state;
    }
}