<?php

require_once 'BMWFactory.php';
require_once 'TeslaFactory.php';

$bmwFactory = new BMWFactory();
$teslaFactory = new TeslaFactory();

$bmwCar = $bmwFactory->createCar();
$bmwBike = $bmwFactory->createBike();

$teslaCar = $teslaFactory->createCar();
$teslaBike = $teslaFactory->createBike();

echo $bmwCar->getName() . "<br/>";
echo $bmwBike->getName() . "<br/>";
echo $teslaCar->getName() . "<br/>";
echo $teslaBike->getName();
