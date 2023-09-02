<?php

namespace TheRayCode\Command;

class LightOnCommand implements Command
{
    private $light;

    public function __construct(Light $light) {
        $this->light = $light;
    }
    public function execute(): void
    {
        $this->light->on();
    }
}