<?php
// ConcreteCommand.php

require_once 'Command.php';
require_once 'Receiver.php';

// ConcreteCommand binds a Receiver and delegates the execution to it
class ConcreteCommand implements Command
{
    private $receiver;

    public function __construct($receiver)
    {
        $this->receiver = $receiver; // Save the receiver instance
    }

    public function execute()
    {
        echo "ConcreteCommand: Delegating the call to the Receiver...\n";
        $this->receiver->action(); // Delegate to Receiver
    }
}
