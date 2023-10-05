<?php
include_once 'AudioPlayer.php';

$player = new AudioPlayer();

$player->play();  // Playing
$player->pause(); // Paused
$player->play();  // Playing
$player->stop();  // Stopped
