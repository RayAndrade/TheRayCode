<?php

class SheepHerd
{
    private $sheep = [];

    public function addSheep(Sheep $sheep) {
        $this->sheep[] = $sheep;
    }

    public function removeSheep(Sheep $sheep) {
        foreach ($this->sheep as $key => $s) {
            if ($s->getName() === $sheep->getName()) {
                unset($this->sheep[$key]);
            }
        }
        $this->sheep = array_values($this->sheep);
    }

    public function count() {
        return count($this->sheep);
    }

    public function getSheep($index) {
        if (isset($this->sheep[$index])) {
            return $this->sheep[$index];
        }
        return null;
    }
}