<?php

class BattleContext
{
    private $strategy;

    public function __construct(BattleStrategy $strategy) {
        $this->strategy = $strategy;
    }

    public function executeStrategy() {
        return $this->strategy->execute();
    }
}