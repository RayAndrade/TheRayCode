<?php
require_once 'AbstractVehicleFactory.php';
require_once 'BMWCar.php';
require_once 'BMWBike.php';
class BMWFactory extends AbstractVehicleFactory
{

    function createCar()
    {
        return new BMWCar();
    }

    function createBike()
    {
        return new BMWBike();
    }
}