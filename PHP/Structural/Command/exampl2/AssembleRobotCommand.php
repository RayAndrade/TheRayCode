<?php

namespace TheRayCode\Command;

class AssembleRobotCommand implements Command
{
    private $robot;

    public function __construct(Robot $robot) {
        $this->robot = $robot;
    }

    public function execute(): void
    {
        $this->robot->assemble();
    }
}