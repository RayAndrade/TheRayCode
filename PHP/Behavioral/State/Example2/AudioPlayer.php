<?php
include_once 'PlayingState.php';
include_once 'PausedState.php';
include_once 'StoppedState.php';

class AudioPlayer
{
    private $state;

    public function __construct() {
        $this->state = new StoppedState();
    }

    public function play() {
        $this->state->play($this);
    }

    public function pause() {
        $this->state->pause($this);
    }

    public function stop() {
        $this->state->stop($this);
    }

    public function setState(State $state) {
        $this->state = $state;
    }
}