<?php

/**
 * The factory method pattern.
 */

use FactoryMethod\MotorcycleFactory;

require_once 'vendor/autoload.php';

$yamaha = MotorcycleFactory::create('yamaha');

$honda = MotorcycleFactory::create('honda');

$ducati = MotorcycleFactory::create('ducati');
