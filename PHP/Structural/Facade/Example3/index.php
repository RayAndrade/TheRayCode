<?php
require_once 'classes/Amplifier.php';
require_once 'classes/Tuner.php';
require_once 'classes/DvdPlayer.php';
require_once 'classes/Projector.php';
require_once 'classes/HomeTheaterFacade.php';

// Create subsystem objects
$amplifier = new Amplifier();
$tuner = new Tuner();
$dvdPlayer = new DvdPlayer();
$projector = new Projector();

// Create the HomeTheaterFacade
$homeTheater = new HomeTheaterFacade($amplifier, $tuner, $dvdPlayer, $projector);

// Demo the Facade pattern
$homeTheater->watchMovie("The Matrix");
$homeTheater->endMovie();