<?php

class Caretaker
{
    private $mementoList = [];

    public function add($memento) {
        $this->mementoList[] = $memento;
    }

    public function get($index) {
        return $this->mementoList[$index];
    }
}