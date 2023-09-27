<?php

require_once('Aggregate.php');
require_once('ConcreteIterator.php');

class FlockOfSheep implements Aggregate {
    private $sheep = array();

    public function addSheep($name) {
        $this->sheep[] = $name;
    }

    public function createIterator() {
        return new ConcreteIterator($this);
    }

    public function getSheep($index) {
        return $this->sheep[$index];
    }

    public function getCount() {
        return count($this->sheep);
    }
}