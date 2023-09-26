<?php
require_once 'CommandInterface.php';
require_once 'TurnOnTvCommand.php';
require_once 'TurnOffTvCommand.php';
require_once 'Television.php';
require_once 'RemoteControl.php';

// Create a new Television instance
$tv = new Television();

// Create commands
$turnOn = new TurnOnTvCommand($tv);
$turnOff = new TurnOffTvCommand($tv);

// Create the remote control and set the command to TurnOn
$remote = new RemoteControl();
$remote->setCommand($turnOn);
$remote->pressButton();

// Set the command to TurnOff
$remote->setCommand($turnOff);
$remote->pressButton();
