<?php

include_once 'BattleStrategy.php';
class AerialAttack implements BattleStrategy
{

    public function execute()
    {
        return "Executing aerial attack!";
    }
}