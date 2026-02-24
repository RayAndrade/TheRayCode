<?php

interface State
{
    public function play(AudioPlayer $player);
    public function pause(AudioPlayer $player);
    public function stop(AudioPlayer $player);
}