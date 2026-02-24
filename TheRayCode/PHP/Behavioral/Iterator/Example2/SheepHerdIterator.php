<?php

class SheepHerdIterator
{
    private $sheepHerd;
    private $currentSheep = 0;

    public function __construct(SheepHerd $sheepHerd) {
        $this->sheepHerd = $sheepHerd;
    }

    public function hasNext() {
        return $this->currentSheep < $this->sheepHerd->count();
    }

    public function next() {
        return $this->sheepHerd->getSheep($this->currentSheep++);
    }
}