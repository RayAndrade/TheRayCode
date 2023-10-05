<?php
include_once 'BattleStrategy.php';
class NavalBombardment implements BattleStrategy
{

    public function execute()
    {
        return "Executing naval bombardment!";
    }
}