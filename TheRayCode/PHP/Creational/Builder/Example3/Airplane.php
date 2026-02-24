<?php

class Airplane
{
    private $wings;
    private $engine;
    private $cockpit;

    public function setWings($wings) {
        $this->wings = $wings;
    }

    public function setEngine($engine) {
        $this->engine = $engine;
    }

    public function setCockpit($cockpit) {
        $this->cockpit = $cockpit;
    }

    public function showSpecifications() {
        return "Airplane: [Wings: {$this->wings}, Engine: {$this->engine}, Cockpit: {$this->cockpit}]";
    }
}