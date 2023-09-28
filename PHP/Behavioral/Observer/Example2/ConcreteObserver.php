<?php

include 'Observer.php';
class ConcreteObserver implements Observer
{
    private $name;

    public function __construct($name) {
        $this->name = $name;
    }

    public function update($message)
    {
        echo "Observer {$this->name} received message: {$message}<br>";
    }
}