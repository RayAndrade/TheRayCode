<?php
require 'Command.php';
require 'Light.php';
require 'LightOnCommand.php';
require 'LightOffCommand.php';
require 'SwitchInvoker.php';

use TheRayCode\Command\Light;
use TheRayCode\Command\LightOnCommand;
use TheRayCode\Command\LightOffCommand;
use TheRayCode\Command\SwitchInvoker;

// Client code
$light = new Light();
$lightOn = new LightOnCommand($light);
$lightOff = new LightOffCommand($light);

$switch = new SwitchInvoker($lightOn, $lightOff);

$switch->pressOn();
$switch->pressOff();
