<?php
require_once 'CommandInterface.php';
class TurnOnLightCommand implements CommandInterface
{
    private $light;

    public function __construct($light) {
        $this->light = $light;
    }
    public function execute()
    {
        $this->light->turnOn();
    }
}