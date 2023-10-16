<?php

class Amplifier
{
    public function on() {
        echo "Amplifier is ON<br/>\n";
    }

    public function off() {
        echo "Amplifier is OFF<br/>\n";
    }

    public function setVolume($volume) {
        echo "Amplifier volume set to $volume<br/>\n";
    }
}