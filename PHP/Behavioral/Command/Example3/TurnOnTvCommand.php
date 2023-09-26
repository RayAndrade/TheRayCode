<?php
require_once 'CommandInterface.php';
class TurnOnTvCommand implements CommandInterface
{
    private $television;

    public function __construct($television) {
        $this->television = $television;
    }

    public function execute()
    {
        $this->television->turnOn();
    }
}