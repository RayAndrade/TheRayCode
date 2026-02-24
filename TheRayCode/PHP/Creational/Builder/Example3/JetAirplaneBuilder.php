<?php
// JetAirplaneBuilder.php
include 'Airplane.php';
include 'AirplaneBuilder.php';

class JetAirplaneBuilder implements AirplaneBuilder
{
    private $airplane;

    public function __construct() {
        $this->airplane = new Airplane();
    }

    public function buildWings() {
        $this->airplane->setWings('Jet Wings');
    }

    public function buildEngine() {
        $this->airplane->setEngine('Jet Engine');
    }

    public function buildCockpit() {
        $this->airplane->setCockpit('Jet Cockpit');
    }

    public function getAirplane() {
        return $this->airplane;
    }

}