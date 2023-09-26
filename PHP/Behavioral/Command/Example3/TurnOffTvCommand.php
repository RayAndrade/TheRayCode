<?php

class TurnOffTvCommand implements CommandInterface
{
    private $television;

    public function __construct($television) {
        $this->television = $television;
    }
    public function execute()
    {
        $this->television->turnOff();
    }
}