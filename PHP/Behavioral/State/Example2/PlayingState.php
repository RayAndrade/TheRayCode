<?php
include_once 'State.php';
class PlayingState implements State
{

    public function play(AudioPlayer $player)
    {
        // Already playing
    }

    public function pause(AudioPlayer $player)
    {
        echo "Paused<br>";
        $player->setState(new PausedState());

    }

    public function stop(AudioPlayer $player)
    {
        echo "Stopped<br>";
        $player->setState(new StoppedState());
    }
}