<?php
include_once ('Command.php');
include_once ('SimpleCommand.php');
include_once ('ComplexCommand.php');
include_once ('Receiver.php');
include_once ('Invoker.php');

/**
 * The client code can parameterize an invoker with any commands.
 */
$invoker = new Invoker;
$invoker->setOnStart(new SimpleCommand("Say Hi!"));
$receiver = new Receiver;
$invoker->setOnFinish(new ComplexCommand($receiver, "Send email", "Save report"));

$invoker->doSomethingImportant();
