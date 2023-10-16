<?php

class DvdPlayer
{
    public function on() {
        echo "DVD Player is ON<br/>\n";
    }

    public function off() {
        echo "DVD Player is OFF<br/>\n";
    }

    public function play($movie) {
        echo "Playing DVD: $movie<br/>\n";
    }
}