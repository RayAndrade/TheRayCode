<?php

class Robot
{
    private $head;
    private $arms;
    private $legs;

    public function setHead($head) {
        $this->head = $head;
    }

    public function setArms($arms) {
        $this->arms = $arms;
    }

    public function setLegs($legs) {
        $this->legs = $legs;
    }

    public function showParts() {
        return "Robot: [Head: {$this->head}, Arms: {$this->arms}, Legs: {$this->legs}]";
    }
}