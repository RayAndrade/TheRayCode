<?php

class Comedian implements Performer
{

    private $name;

    public function __construct($name) {
        $this->name = $name;
    }

    public function perform()
    {
        return "Comedian {$this->name} tells a joke.<br/>";
    }
}