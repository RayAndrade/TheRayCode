<?php
include_once ('Facade.php');
include_once ('Subsystem1.php');
include_once ('Subsystem2.php');

function clientCode(Facade $facade)
{
    // ...

    echo $facade->operation();

    // ...
}

/**
 * The client code may have some of the subsystem's objects already created. In
 * this case, it might be worthwhile to initialize the Facade with these objects
 * instead of letting the Facade create new instances.
 */
$subsystem1 = new Subsystem1;
$subsystem2 = new Subsystem2;
$facade = new Facade($subsystem1, $subsystem2);
clientCode($facade);
