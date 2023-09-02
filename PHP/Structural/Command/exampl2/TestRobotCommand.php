<?php

namespace TheRayCode\Command;

class TestRobotCommand implements Command
{
    private $robot;

    public function __construct(Robot $robot) {
        $this->robot = $robot;
    }

    public function execute(): void
    {
        $this->robot->test();
    }
}