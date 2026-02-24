<?php
include_once 'State.php';
class PausedState implements State
{
    public function play(AudioPlayer $player) {
        echo "Playing<br>";
        $player->setState(new PlayingState());
    }

    public function pause(AudioPlayer $player) {
        // Already paused
    }

    public function stop(AudioPlayer $player) {
        echo "Stopped<br>";
        $player->setState(new StoppedState());
    }
}