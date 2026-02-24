<?php

class Originator
{
    private $state;
    public function __construct(string $state)
    {
        $this->state = $state;
        echo "Originator: My initial state is: {$this->state}<br/>";
    }
    public function doSomething(): void
    {
        echo "Originator: I'm doing something important.<br/>";
        $this->state = $this->generateRandomString(30);
        echo "Originator: and my state has changed to: {$this->state}<br/>";
    }

    private function generateRandomString(int $length = 10): string
    {
        return substr(
            str_shuffle(
                str_repeat(
                    $x = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ',
                    ceil($length / strlen($x))
                )
            ),
            1,
            $length
        );
    }

    public function save(): Memento
    {
        return new ConcreteMemento($this->state);
    }
    public function restore(Memento $memento): void
    {
        $this->state = $memento->getState();
        echo "Originator: My state has changed to: {$this->state}<br/>";
    }
}