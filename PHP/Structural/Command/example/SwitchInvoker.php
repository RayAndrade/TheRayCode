<?php

namespace TheRayCode\Command;

class SwitchInvoker
{
    private $onCommand;
    private $offCommand;

    public function __construct(Command $onCommand, Command $offCommand) {
        $this->onCommand = $onCommand;
        $this->offCommand = $offCommand;
    }

    public function pressOn(): void {
        $this->onCommand->execute();
    }

    public function pressOff(): void {
        $this->offCommand->execute();
    }
}