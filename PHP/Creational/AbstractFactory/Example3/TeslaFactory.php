<?php

require_once 'AbstractVehicleFactory.php';
require_once 'TeslaCar.php';
require_once 'TeslaBike.php';
class TeslaFactory extends AbstractVehicleFactory
{

    function createCar()
    {
        return new TeslaCar();
    }

    function createBike()
    {
        return new TeslaBike();
    }
}