<?php

class Amplifier
{
    public function on() {
        echo "Amplifier is ON.<br>";
    }

    public function off() {
        echo "Amplifier is OFF.<br>";
    }

    public function setVolume(int $level) {
        echo "Amplifier volume set to " . $level . ".<br>";
    }
}