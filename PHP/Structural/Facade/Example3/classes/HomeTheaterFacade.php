<?php

namespace classes;

class HomeTheaterFacade
{
    private $amplifier;
    private $tuner;
    private $dvdPlayer;
    private $projector;

    public function watchMovie($movie) {
        echo "Get ready to watch a movie...<br/>\n";
        $this->projector->on();
        $this->projector->setInput("DVD");
        $this->amplifier->on();
        $this->amplifier->setVolume(7);
        $this->dvdPlayer->on();
        $this->dvdPlayer->play($movie);
    }
    public function endMovie() {
        echo "Shutting down the home theater...<br/>\n";
        $this->projector->off();
        $this->amplifier->off();
        $this->dvdPlayer->off();
    }

}