<?php
include 'BasicRobotBuilder.php';

// Building a robot using the Builder pattern
$robotBuilder = new BasicRobotBuilder();
$robotBuilder->buildHead();
$robotBuilder->buildArms();
$robotBuilder->buildLegs();

$robot = $robotBuilder->getRobot();
echo $robot->showParts();