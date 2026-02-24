<?php

class TurnOffLightCommand implements CommandInterface
{
    private $light;

    public function __construct($light) {
        $this->light = $light;
    }
    public function execute()
    {
        $this->light->turnOff();
    }
}