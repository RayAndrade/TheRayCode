<?php

require_once 'Monkey.php';
require_once 'MonkeyTroop.php';
require_once 'MonkeyTroopIterator.php';

// Create monkey troop and add monkeys
$monkeyTroop = new MonkeyTroop();
$monkeyTroop->addMonkey(new Monkey("Curious George"));
$monkeyTroop->addMonkey(new Monkey("King Kong"));
$monkeyTroop->addMonkey(new Monkey("Zaius"));

// Iterate over monkey troop
$iterator = new MonkeyTroopIterator($monkeyTroop);
while ($iterator->hasNext()) {
    $monkey = $iterator->next();
    echo "Observing monkey: " . $monkey->getName() . "<br/>";
}

