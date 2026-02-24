<?php
include 'Subject.php';
class ConcreteSubject implements Subject
{
    private $observers = [];
    private $state;

    public function attach(Observer $observer)
    {
        $this->observers[] = $observer;
    }

    public function detach(Observer $observer)
    {
        foreach ($this->observers as $key => $obs) {
            if ($obs === $observer) {
                unset($this->observers[$key]);
            }
        }
    }

    public function notify()
    {
        foreach ($this->observers as $observer) {
            $observer->update($this->state);
        }
    }

    public function setState($state) {
        $this->state = $state;
        $this->notify();
    }
}