<?php
require_once 'HomeTheaterFacade.php';

$projector = new Projector();
$dvdPlayer = new DVDPlayer();
$amplifier = new Amplifier();

$homeTheater = new HomeTheaterFacade($projector, $dvdPlayer, $amplifier);

$homeTheater->watchMovie();
echo "<br>";
$homeTheater->endMovie();