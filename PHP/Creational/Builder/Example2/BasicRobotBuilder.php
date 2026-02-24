<?php

include 'Robot.php';
include 'RobotBuilder.php';
class BasicRobotBuilder implements RobotBuilder
{

    private $robot;

    public function __construct() {
        $this->robot = new Robot();
    }
    public function buildHead()
    {
        $this->robot->setHead('Basic Head');
    }

    public function buildArms()
    {
        $this->robot->setArms('Basic Arms');
    }

    public function buildLegs()
    {
        $this->robot->setLegs('Basic Legs');
    }

    public function getRobot()
    {
        return $this->robot;
    }
}