<?php

// index.php

require 'Command.php';
require 'Robot.php';
require 'AssembleRobotCommand.php';
require 'TestRobotCommand.php';
require 'DeployRobotCommand.php';
require 'RobotControllerInvoker.php';

use TheRayCode\Command\Robot;
use TheRayCode\Command\AssembleRobotCommand;
use TheRayCode\Command\TestRobotCommand;
use TheRayCode\Command\DeployRobotCommand;
use TheRayCode\Command\RobotControllerInvoker;

// Client code
$robot = new Robot();
$assembleRobot = new AssembleRobotCommand($robot);
$testRobot = new TestRobotCommand($robot);
$deployRobot = new DeployRobotCommand($robot);

$controller = new RobotControllerInvoker($assembleRobot, $testRobot, $deployRobot);

$controller->pressAssemble();
$controller->pressTest();
$controller->pressDeploy();