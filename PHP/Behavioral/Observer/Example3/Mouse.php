<?php

interface Observer {
    public function update($subject);
}

class Mouse  implements Observer
{

    private $name;

    public function __construct($name) {
        $this->name = $name;
    }

    public function update($subject)
    {
        if ($subject instanceof Cat && $subject->isAway()) {
            echo $this->name . " is playing!<br>";
        } else {
            echo $this->name . " is hiding!<br>";
        }
    }
}