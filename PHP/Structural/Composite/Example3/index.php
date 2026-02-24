<?php

require_once 'Performer.php';
require_once 'Comedian.php';
require_once 'ComedyTroupe.php';

$jerry = new Comedian("Jerry");
$elaine = new Comedian("Elaine");

$funnyFolks = new ComedyTroupe();
$funnyFolks->add($jerry);
$funnyFolks->add($elaine);

$kramer = new Comedian("Kramer");

$comedyFestival = new ComedyTroupe();
$comedyFestival->add($funnyFolks);
$comedyFestival->add($kramer);

echo $comedyFestival->perform();
