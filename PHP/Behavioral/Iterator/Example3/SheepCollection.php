<?php

class SheepCollection implements IteratorAggregate
{
    private array $sheepList;

    public function __construct() {
        $this->sheepList = [];
    }

    public function addSheep(Sheep $sheep): void {
        $this->sheepList[] = $sheep;
    }
    public function getIterator(): Traversable
    {
        return new SheepIterator($this->sheepList);
    }
}