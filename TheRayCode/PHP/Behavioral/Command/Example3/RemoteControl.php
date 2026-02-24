<?php
require_once 'Command.php';

class RemoteControl
{
    private $command;

    public function setCommand(Command $cmd) {
        $this->command = $cmd;
    }

    public function pressButton() {
        $this->command->execute();
    }
}