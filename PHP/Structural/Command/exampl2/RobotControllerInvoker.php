<?php

namespace TheRayCode\Command;

class RobotControllerInvoker
{
    private $assembleCommand;
    private $testCommand;
    private $deployCommand;

    public function __construct(
        Command $assembleCommand,
        Command $testCommand,
        Command $deployCommand) {
        $this->assembleCommand = $assembleCommand;
        $this->testCommand = $testCommand;
        $this->deployCommand = $deployCommand;
    }

    public function pressAssemble(): void {
        $this->assembleCommand->execute();
    }

    public function pressTest(): void {
        $this->testCommand->execute();
    }

    public function pressDeploy(): void {
        $this->deployCommand->execute();
    }
}