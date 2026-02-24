<?php

include 'Memento.php';
class Originator
{
    private $state;

    public function setState($state) {
        $this->state = $state;
    }

    public function getState() {
        return $this->state;
    }

    public function saveStateToMemento() {
        return new Memento($this->state);
    }

    public function getStateFromMemento($memento) {
        $this->state = $memento->getState();
    }
}