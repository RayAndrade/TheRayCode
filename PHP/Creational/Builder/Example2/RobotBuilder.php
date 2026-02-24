<?php

interface RobotBuilder
{
    public function buildHead();
    public function buildArms();
    public function buildLegs();
    public function getRobot();
}