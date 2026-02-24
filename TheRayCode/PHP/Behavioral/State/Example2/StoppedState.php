<?php
include_once 'State.php';
class StoppedState implements State
{
    public function play(AudioPlayer $player) {
        echo "Playing<br>";
        $player->setState(new PlayingState());
    }

    public function pause(AudioPlayer $player) {
        // Can't pause if it's already stopped
    }

    public function stop(AudioPlayer $player) {
        // Already stopped
    }
}