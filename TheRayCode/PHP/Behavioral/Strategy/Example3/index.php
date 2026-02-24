<?php
include_once 'BattleStrategy.php';
include_once 'AerialAttack.php';
include_once 'NavalBombardment.php';
include_once 'InfantryAssault.php';
include_once 'BattleContext.php';

// Execute different battle strategies
$aerialBattle = new BattleContext(new AerialAttack());
$navalBattle = new BattleContext(new NavalBombardment());
$infantryBattle = new BattleContext(new InfantryAssault());

echo $aerialBattle->executeStrategy() . "<br>";
echo $navalBattle->executeStrategy() . "<br>";
echo $infantryBattle->executeStrategy();
