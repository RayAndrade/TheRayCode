<?php
// Invoker.php

require_once 'Command.php';

// Invoker holds the command and triggers execution
class Invoker
{
    private $command;

    public function setCommand(Command $command)
    {
        $this->command = $command; // Store the command
    }

    public function executeCommand()
    {
        if ($this->command) {
            echo "Invoker: Executing stored command...\n";
            $this->command->execute(); // Trigger execution
        } else {
            echo "Invoker: No command set.\n";
        }
    }
}
