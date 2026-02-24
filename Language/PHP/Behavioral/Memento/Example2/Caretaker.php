<?php

class Caretaker
{
    private $mementos = [];
    private $originator;
    public function __construct(Originator $originator)
    {
        $this->originator = $originator;
    }
    public function backup(): void
    {
        echo "\nCaretaker: Saving Originator's state...<br/>";
        $this->mementos[] = $this->originator->save();
    }
    public function undo(): void
    {
        if (!count($this->mementos)) {
            return;
        }
        $memento = array_pop($this->mementos);
        echo "Caretaker: Restoring state to: " . $memento->getName() . "<br/>";
        try {
            $this->originator->restore($memento);
        } catch (\Exception $e) {
            $this->undo();
        }
    }
    public function showHistory(): void
    {
        echo "Caretaker: Here's the list of mementos:<br/>";
        foreach ($this->mementos as $memento) {
            echo $memento->getName() . "<br/>";
        }
    }
}