<?php
require_once 'CommandInterface.php';
require_once 'TurnOnLightCommand.php';
require_once 'TurnOffLightCommand.php';
require_once 'Light.php';
require_once 'RemoteControl.php';

// Create a new Light instance
$light = new Light();

// Create commands
$turnOn = new TurnOnLightCommand($light);
$turnOff = new TurnOffLightCommand($light);

// Create the remote control and set the command to TurnOn
$remote = new RemoteControl();
$remote->setCommand($turnOn);
$remote->pressButton();

// Set the command to TurnOff
$remote->setCommand($turnOff);
$remote->pressButton();
