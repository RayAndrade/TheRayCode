<?php
class MonkeyTroopIterator {
    private $monkeyTroop;
    private $currentMonkey = 0;

    public function __construct(MonkeyTroop $monkeyTroop) {
        $this->monkeyTroop = $monkeyTroop;
    }

    public function hasNext() {
        return $this->currentMonkey < $this->monkeyTroop->count();
    }

    public function next() {
        return $this->monkeyTroop->getMonkey($this->currentMonkey++);
    }
}