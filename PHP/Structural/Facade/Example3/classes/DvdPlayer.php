<?php

namespace classes;

class DvdPlayer
{
    public function off() {
        echo "DVD Player is OFF<br/>\n";
    }
    public function play($movie) {
        echo "Playing DVD: $movie<br/>\n";
    }
}