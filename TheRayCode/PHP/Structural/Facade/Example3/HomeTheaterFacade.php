<?php
require_once 'Projector.php';
require_once 'DVDPlayer.php';
require_once 'Amplifier.php';
class HomeTheaterFacade
{
    private Projector $projector;
    private DVDPlayer $dvdPlayer;
    private Amplifier $amplifier;

    public function __construct(Projector $projector, DVDPlayer $dvdPlayer, Amplifier $amplifier) {
        $this->projector = $projector;
        $this->dvdPlayer = $dvdPlayer;
        $this->amplifier = $amplifier;
    }

    public function watchMovie() {
        $this->projector->on();
        $this->dvdPlayer->on();
        $this->dvdPlayer->play();
        $this->amplifier->on();
        $this->amplifier->setVolume(5);
    }

    public function endMovie() {
        $this->dvdPlayer->stop();
        $this->dvdPlayer->off();
        $this->amplifier->off();
        $this->projector->off();
    }
}