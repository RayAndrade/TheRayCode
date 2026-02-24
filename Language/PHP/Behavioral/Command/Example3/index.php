<?php
require_once 'Light.php';
require_once 'TurnOnLightCommand.php';
require_once 'TurnOffLightCommand.php';
require_once 'RemoteControl.php';

// Create instances
$light = new Light();
$turnOn = new TurnOnLightCommand($light);
$turnOff = new TurnOffLightCommand($light);

$remote = new RemoteControl();

// Turn on the light using command pattern
$remote->setCommand($turnOn);
$remote->pressButton();

// Turn off the light using command pattern
$remote->setCommand($turnOff);
$remote->pressButton();