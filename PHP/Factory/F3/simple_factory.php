<?php

/**
 * The simple factory pattern.
 */

use SimpleFactory\MotorcycleFactory;

require_once 'vendor/autoload.php';

$motorcycle = MotorcycleFactory::create('Kawasaki', 'Ninja');
print $motorcycle->getMakeAndModel() . '<br>';

$motorcycle = MotorcycleFactory::create('Yamaha', 'R6');
print $motorcycle->getMakeAndModel() . '<br>';

$motorcycle = MotorcycleFactory::create('Suzuki', 'GSX-R1000');
print $motorcycle->getMakeAndModel() . '<br>';
