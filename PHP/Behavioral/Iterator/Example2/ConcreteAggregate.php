<?php

require_once('Aggregate.php');
require_once('ConcreteIterator.php');

class ConcreteAggregate implements Aggregate
{
    private $items = array();

    public function addItem($item) {
        $this->items[] = $item;
    }

    public function createIterator()
    {
        return new ConcreteIterator($this);
    }
    public function getItem($index) {
        return $this->items[$index];
    }

    public function getCount() {
        return count($this->items);
    }

}