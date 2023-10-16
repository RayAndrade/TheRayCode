<?php

class Projector
{
    public function on() {
        echo "Projector is ON<br/>\n";
    }

    public function off() {
        echo "Projector is OFF<br/>\n";
    }

    public function setInput($source) {
        echo "Setting projector input to: $source<br/>\n";
    }
}