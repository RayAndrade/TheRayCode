<?php
// index.php

require_once 'Invoker.php';
require_once 'ConcreteCommand.php';
require_once 'Receiver.php';

// Step 1: Create the receiver (knows how to do the work)
$receiver = new Receiver();

// Step 2: Create the command and associate it with the receiver
$command = new ConcreteCommand($receiver);

// Step 3: Create the invoker and assign the command
$invoker = new Invoker();
$invoker->setCommand($command);

// Step 4: Ask the invoker to execute the command
$invoker->executeCommand();
