<?php

class RemoteControl
{
    private $command;

    public function setCommand(CommandInterface $command) {
        $this->command = $command;
    }

    public function pressButton() {
        $this->command->execute();
    }
}