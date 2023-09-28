<?php

class Cat
{
    private $isAway = false;
    private $observers = [];

    public function addObserver($observer) {
        $this->observers[] = $observer;
    }

    public function isAway() {
        return $this->isAway;
    }

    public function goAway() {
        $this->isAway = true;
        $this->notifyObservers();
    }

    public function returnHome() {
        $this->isAway = false;
        $this->notifyObservers();
    }

    private function notifyObservers() {
        foreach ($this->observers as $observer) {
            $observer->update($this);
        }
    }
}