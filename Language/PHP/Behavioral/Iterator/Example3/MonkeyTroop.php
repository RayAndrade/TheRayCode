<?php

class MonkeyTroop
{
    private $monkeys = [];

    public function addMonkey(Monkey $monkey) {
        $this->monkeys[] = $monkey;
    }

    public function removeMonkey(Monkey $monkey) {
        foreach ($this->monkeys as $key => $m) {
            if ($m->getName() === $monkey->getName()) {
                unset($this->monkeys[$key]);
            }
        }
        $this->monkeys = array_values($this->monkeys);
    }

    public function count() {
        return count($this->monkeys);
    }

    public function getMonkey($index) {
        if (isset($this->monkeys[$index])) {
            return $this->monkeys[$index];
        }
        return null;
    }

}