<?php

include 'Originator.php';
include 'Caretaker.php';

$originator = new Originator();
$caretaker = new Caretaker();

$originator->setState("State #1");
$originator->setState("State #2");
$caretaker->add($originator->saveStateToMemento());

$originator->setState("State #3");
$caretaker->add($originator->saveStateToMemento());

$originator->setState("State #4");
echo "Current State: " . $originator->getState() . "<br>";

$originator->getStateFromMemento($caretaker->get(0));
echo "First saved State: " . $originator->getState() . "<br>";
$originator->getStateFromMemento($caretaker->get(1));
echo "Second saved State: " . $originator->getState() . "<br>";
