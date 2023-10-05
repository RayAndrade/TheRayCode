<?php

include_once 'BattleStrategy.php';
class InfantryAssault implements BattleStrategy
{

    public function execute()
    {
        return "Launching infantry assault!";
    }
}