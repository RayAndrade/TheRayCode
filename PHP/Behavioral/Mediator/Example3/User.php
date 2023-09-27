<?php

class User
{
    protected $name;
    protected $mediator;

    public function __construct($name, $mediator) {
        $this->name = $name;
        $this->mediator = $mediator;
    }

    public function send($message) {
        $this->mediator->sendMessage($message, $this);
    }

    public function receive($message) {
        echo $this->name . " Received: " . $message . "<br/>";
    }

    public function getName() {
        return $this->name;
    }
}