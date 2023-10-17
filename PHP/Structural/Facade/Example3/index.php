<?php
require_once 'classes/Amplifier.php';
require_once 'classes/Tuner.php';
require_once 'classes/DvdPlayer.php';
require_once 'classes/Projector.php';
require_once 'classes/HomeTheaterFacade.php';

$amplifier = new Amplifier();
$tuner = new Tuner();
$dvdPlayer = new DvdPlayer();
$projector = new Projector();

$homeTheater = new HomeTheaterFacade($amplifier, $tuner, $dvdPlayer, $projector);

$homeTheater->watchMovie("The Matrix");
$homeTheater->endMovie();